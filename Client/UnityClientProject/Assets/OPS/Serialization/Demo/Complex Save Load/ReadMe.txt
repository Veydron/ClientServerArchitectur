Abstract:
--------------------------------------------------------------------

This demo is used to demonstrate, how you can implement a save
and load system used in most modern games.
Decorating many classes with serialization attributes may be confusing.
So you will have in this demo only one class called 'SaveMetaData'
managing serialization and deserialization.

How to use the demo:
--------------------------------------------------------------------

The demo is a mini first person shooter. You are a wizard shooting fireballs on to other
wizard.

Interact with the Gui in the scene, to either create a new game,
save a game or load a game.

All fireballs, enemies and player settings get saved.

What you use:
--------------------------------------------------------------------

//SAVE
FileStream stream = new FileStream("OPS_Complex_Save_Load.ser", FileMode.Create);
SaveMetaData saveMetaData = new SaveMetaData();
this.OnSave(saveMetaData);
OPS.Serialization.IO.Serializer.SerializeToStream(stream, saveMetaData);
stream.Close();

//LOAD
FileStream stream = new FileStream("OPS_Complex_Save_Load.ser", FileMode.Open);
SaveMetaData saveMetaData = OPS.Serialization.IO.Serializer.DeSerializeFromStream<SaveMetaData>(stream);
this.OnLoad(saveMetaData);
stream.Close();

//ATTRIBUTES
[SerializeAbleClass]
[SerializeAbleField(0)]

//IMPORTANT CLASSES
ISaveAble
SaveMetaData

Explaination:
--------------------------------------------------------------------

The class 'SaveMetaData' contains lists of primitive serializeable types.
For example a List of ints, floats or bools. 
To add elements to those lists, the class 'SaveMetaData' contains 'Add' methods.
To read elements of those lists, you can use 'GetNextInt' or 'GetNextFloat'.
While using such a read method an integer increases, pointing on the next element
on the belonging list.

The interface 'ISaveAble' cotains two method: 
void OnSave(SaveMetaData _SaveMetaData);
void OnLoad(SaveMetaData _SaveMetaData);

Add this interface to a class to make it saveable.
Use OnSave to add elements you want to save to the 'SaveMetaData'
and use OnLoad to load elements you want to load from the 'SaveMetaData'.

I recommend you to mark the implemented functions as virtual or abstract 
to make inherited class saveable too.

Example how this looks like:

public class WorldObject : MonoBehaviour, ISaveAble
{
    public virtual void OnSave(SaveMetaData _SaveMetaData)
    {
        _SaveMetaData.Add(this.transform.position);
        _SaveMetaData.Add(this.transform.rotation);
    }

    public virtual void OnLoad(SaveMetaData _SaveMetaData)
    {
        this.transform.position = _SaveMetaData.GetNextVector3();
        this.transform.rotation = _SaveMetaData.GetNextQuaternion();
    }
}

The WorldObject is the base class of all objects in the world.
It saves and loads its position and rotation.


To save the object you have to create a new SaveMetaData and call OnSave on the
object you want to save:

WorldObject myWorldObject = ...;
SaveMetaData saveMetaData = new SaveMetaData();
myWorldObject.OnSave(saveMetaData);

Next you have to serialize this SaveMetaData to a file or to bytes (for network communication for example).

FileStream stream = new FileStream("OPS_Complex_Save_Load.ser", FileMode.Create);
OPS.Serialization.IO.Serializer.SerializeToStream(stream, saveMetaData);
stream.Close();


To load the serialized SaveMetaData call OnLoad on the belonging Object:

WorldObject myWorldObject = Instantiate(...).GetComponent<WorldObject>();
FileStream stream = new FileStream("OPS_Complex_Save_Load.ser", FileMode.Open);
SaveMetaData saveMetaData = OPS.Serialization.IO.Serializer.DeSerializeFromStream<SaveMetaData>(stream);
stream.Close();
myWorldObject.OnLoad(saveMetaData);


Models and Animation:
--------------------------------------------------------------------
For this demo some assets from the publisher Mixamo are used. Please support them. Great assets!
https://assetstore.unity.com/publishers/150