using System;
using System.Net;
using System.Net.Sockets;

namespace ConsoleServer
{
    public class Server
    {
        public static int maxPlayers { get; private set; }
        public static int port { get; private set; }

        private static TcpListener tcpListener;

        public static void Start(int _maxPlayer, int _port)
        {
            maxPlayers = _maxPlayer;
            port = _port;

            Console.WriteLine("Server is starting . . .");
            
            tcpListener = new TcpListener(IPAddress.Any, port);
            tcpListener.Start();
            tcpListener.BeginAcceptTcpClient(new AsyncCallback(TCPConnectCallback), null);

            Console.WriteLine("Server startet on port: " + port);
        }

        public static void TCPConnectCallback(IAsyncResult _result)
        {
            TcpClient _tcpClient = tcpListener.EndAcceptTcpClient(_result);
            tcpListener.BeginAcceptTcpClient(new AsyncCallback(TCPConnectCallback), null);
            
        }
    }
    
}