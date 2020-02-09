using System;

namespace ConsoleApplication2
{
    public class LogServer
    {
        
            public void OnPlayerConnection(object source, int msg)
            {
                Console.WriteLine("Player Connected with ID: " + msg);
            }

            public void OnPlayerDisconnection(object source, int msg)
            {
                Console.WriteLine("Player Connected with ID: " + msg + " has disconnected");
            }

            public void OnClientMessage(object source, TestClass msg)
            {
                //Console.WriteLine("Player "+msg.PlayerID+" sendet Packet: " +msg.ActionID);
            }

            public void OnClientKick(object source, Telepathy.Message msg)
            {
                Console.WriteLine("Player "+msg.connectionId+" got kicked of max Packet Spamming");
            }
    }
}