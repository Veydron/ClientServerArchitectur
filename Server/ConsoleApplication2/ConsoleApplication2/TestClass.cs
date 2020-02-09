
using MessagePack;

//TODO Klasse ausarbeiten das sie als Packet benutzt werden kann, eventuell neue Klasse Machen ? 

namespace ConsoleApplication2
{
    
    [MessagePackObject]
        public class TestClass
        { 
            public enum PacketsDNA : ushort
            {
                [Key(7)]
                None = 0,
                [Key(8)]
                InstantiatePlayer = 1,
                [Key(9)]
                MovementInput= 9,
                [Key(10)]
                MovePlayer = 10,
                [Key(11)]
                Skill = 100
                //Etc
            }
            
            [Key(3)] 
            public PacketsDNA Action;
            
            [Key(0)]
            public int ActionID;
          
            [Key(1)]
            public int PlayerID;
          
            [Key(2)]
            public int TargetID;
        
            [SerializationConstructor]
            public TestClass(int actionID, int playerID, int targetID)
            {
                ActionID = actionID;
                PlayerID = playerID;
                TargetID = targetID;
            }

        }
        
}