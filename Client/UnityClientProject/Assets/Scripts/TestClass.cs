using MessagePack;

namespace DefaultNamespace
{
    [MessagePackObject]
    public class TestClass
    {
        [Key(0)]
        public int ActionID;
        [Key(1)]
        public int PlayerID;
        [Key(2)]
        public int TargetID;
        
        public TestClass(int actionID, int playerID, int targetID)
        {
            ActionID = actionID;
            PlayerID = playerID;
            TargetID = targetID;
        }
    }
}