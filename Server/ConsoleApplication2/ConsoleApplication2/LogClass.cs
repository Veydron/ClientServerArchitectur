using System;

namespace ConsoleApplication2
{
    public class LogClass
    {
        
        public void OnPlayerConnection(object source, Telepathy.Message msg)
        {
            Console.WriteLine("Player Connected with ID: " + msg.connectionId);
        }

        public void OnPlayerDisconnection(object source, Telepathy.Message msg)
        {
            Console.WriteLine("Player Connected with ID: " + msg.connectionId + " has disconnected");
        }
    }
}
