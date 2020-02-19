using System;
using System.Collections.Generic;
using System.Net.Configuration;
using System.Threading.Tasks;
using Amazon;
using Amazon.DynamoDBv2;
using Amazon.DynamoDBv2.DataModel;
using Amazon.DynamoDBv2.DocumentModel;
using Amazon.DynamoDBv2.Model;
using Amazon.Runtime;
using Cassandra.Mapping;

namespace ConsoleApplication2
{
    public class DBHandler
    {
        public event EventHandler<CustomPackets> OnLoginSuccsess; 
        public event EventHandler<int> OnLoginFailed; 
        
        AmazonDynamoDBClient client = new AmazonDynamoDBClient(new BasicAWSCredentials("login", "pass"), RegionEndpoint.USEast2);

        public async void DBRun()
       {
           string tableName = "DynamoDBTestTabelle";
           
           //Console.WriteLine("Creating credentials and initializing DynamoDB client");
          // var credentials = new BasicAWSCredentials("AKIAWBJFUVAB6FVHZMXJ", "5vUlCTIjvYqh8VmEMU/ECz4J5yXGd+2NUEGOP9nU");
           //var client = new AmazonDynamoDBClient(credentials, RegionEndpoint.USEast2);
           
           Console.WriteLine("Verify table => " + tableName);
           var tableResponse = await client.ListTablesAsync();
           if (!tableResponse.TableNames.Contains(tableName))
           {
               Console.WriteLine("Table not found");
           }
           else
           {
               Console.WriteLine("Table found");
           }

       }
       
       public async void OnClientLogin(object source, CustomPackets msg)
       {
           Console.WriteLine("Recive Client Packeet with ID : "+msg.ConnectionID);
           CustomPackets custommsg = new CustomPackets();
           custommsg = msg;
           
           Dictionary<string, AttributeValue> key = new Dictionary<string, AttributeValue>
           {
               { "Email", new AttributeValue { S = msg.SA } },
               { "Password", new AttributeValue { S = msg.SB } }
           };
 
            // Create GetItem request
           GetItemRequest request = new GetItemRequest
           {
               TableName = "LoginTest",
               Key = key,
           };

           try
           {
               var result = await  client.GetItemAsync(request);
               Dictionary<string, AttributeValue> item = result.Item;
               if (item.Values.Count == 0)
               {
                   Console.WriteLine("Loggin Failed !");
                   Console.WriteLine("On login Failed ID: " +custommsg.ConnectionID);
                   OnLoginFailed(this, custommsg.ConnectionID);

               }
               else
               {
                   Console.WriteLine("Loggin Succsess !");
                   custommsg.AccountID = Int32.Parse(item["AccountID"].N);
                   OnLoginSuccsess(this,custommsg);
               }

           }
           catch (Exception e)
           {
               Console.WriteLine("Login went horribale wrong");
               throw;
           }
       }
    }

}
