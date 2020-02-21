using System;
using System.Diagnostics;
using System.Threading;

namespace ConsoleApplication2
{
    public class TimeFrame
    {

        Stopwatch stopwatch = Stopwatch.StartNew();

        private float j;
        private float i;
        
        long tickProcessTime = 0;
        long  oldTick = 0;
        long different = 0;
        public int serverProcessTime = 0;
        public int timer = 0;
        
        public float ElapsedTimeForFrame()
        {
            //Console.WriteLine(stopwatch.ElapsedTicks);
            float j = stopwatch.ElapsedMilliseconds;
            float i = j / 1000;
            return i;
        }
        
        public int ServerProcessTime()
        {
            //Todo hier kommt timespanprocess warning rein (nur die variabeln) Und dann ruft timespann diesen serverprcesstime auf 
            tickProcessTime = stopwatch.ElapsedMilliseconds;

            different = tickProcessTime - oldTick;

            oldTick = tickProcessTime;

            return (int)different;
        }

        public void TimeSpanProcessWarning()
        {
            serverProcessTime = ServerProcessTime();

            if (serverProcessTime > 100)
            {
                //Console.BackgroundColor = ConsoleColor.Blue;
                Console.ForegroundColor = ConsoleColor.Yellow;
                Console.WriteLine("PROCESS TIME WARNING -> " +serverProcessTime);
                //Console.WriteLine("Another line."); // <-- This line is still white on blue.
                Console.ResetColor();
            }
            else
            {
                //Console.WriteLine(different);
            }
            
        }

        public int ServerTickSpan()
        {
            timer = serverProcessTime;
            return timer;
        }
    }
}