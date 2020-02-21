using System.Collections.Generic;

namespace ConsoleApplication2
{
    public class GridSystem
    {
        public Node[,] mapGrid;

        public void CreateTestGrid()
        {
            mapGrid = new Node[100,100];

            for (int x = 0; x <= 100; x++)
            {
                for (int z = 0; z <= 100; z++)
                {
                    mapGrid[x, z].worldPosX = x;
                    mapGrid[x, z].worldPosX = z;
                    mapGrid[x, z].worldPosX = 0;
                    mapGrid[x, z].isWalkable = true;
                }
            }
        }
        
        
        
    }

    public class Node
    {
        public float worldPosX;
        public float worldPosY;
        public float worldPosZ;

        public bool isWalkable;

        public int characterID;
        public int connectionID;
    }
}