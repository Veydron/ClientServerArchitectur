using System;
using System.Collections;
using System.Numerics;
using System.Runtime.InteropServices;

namespace ConsoleApplication2
{
    public static class PlayerMovement
    {
        public static Vector3 move(bool W, bool A, bool S, bool D,Vector3 PlayerPosition)
        {
            Vector3 move = PlayerPosition;
            
            if (W == true)
            {
                //Console.WriteLine("Player hat W gedrückt");  
                move = new Vector3(move.X,move.Y+0.2f,move.Z);
            }
            if (A == true)
            {
                //Console.WriteLine("Player hat A gedrückt");
                move = new Vector3(move.X-0.2f,move.Y,move.Z);
            }
            if (S == true)
            {
                //Console.WriteLine("Player hat S gedrückt");
                move = new Vector3(move.X,move.Y-0.2f,move.Z);
            }
            if (D == true)
            {
                //Console.WriteLine("Player hat D gedrückt");
                move = new Vector3(move.X+0.2f,move.Y,move.Z);
            }
            
            

            //Console.WriteLine("Neue Playerposition ist : X"+move.X+" Y:"+move.Y);
            return move;
        }
    }
}