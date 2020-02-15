Abstract:
--------------------------------------------------------------------

This demo is used to demonstrate how you can easily save 
and load a simple object, like Unitys Mesh class.

How to use the demo:
--------------------------------------------------------------------

Interact with the Gui in the scene, to either generate new random sized 
cubes or load cubes.

Each time new cubes get generated, their mesh is saved to a file called
"OPS_Mesh.ser".
When you now call load, new cubes getting created basing on this last
saved mesh in "OPS_Mesh.ser".

What you use:
--------------------------------------------------------------------

//SAVE
FileStream stream = new FileStream("OPS_Mesh.ser", FileMode.Create);
OPS.Serialization.IO.Serializer.SerializeToStream(stream, mesh);
stream.Close();

//LOAD
FileStream stream = new FileStream("OPS_Mesh.ser", FileMode.Open);
Mesh mesh = OPS.Serialization.IO.Serializer.DeSerializeFromStream<Mesh>(stream);
stream.Close();