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
        
        public float ElapsedTimeForFrame()
        {
            //Console.WriteLine(stopwatch.ElapsedTicks);
            float j = stopwatch.ElapsedMilliseconds;
            float i = j / 1000;
            return i;
        }

        public void TimeSpanProcessWarning()
        {
            tickProcessTime = stopwatch.ElapsedMilliseconds;

            different = tickProcessTime - oldTick;

            if (different > 100)
            {
                //Console.BackgroundColor = ConsoleColor.Blue;
                Console.ForegroundColor = ConsoleColor.Yellow;
                Console.WriteLine("PROCESS TIME WARNING -> " +different);
                //Console.WriteLine("Another line."); // <-- This line is still white on blue.
                Console.ResetColor();
            }
            else
            {
                //Console.WriteLine(different);
            }

            oldTick = tickProcessTime;

        }
        
    }
}