Abstract:
--------------------------------------------------------------------

This demo is used to demonstrate how you can easily save 
and load classes async.
This demo extends the demo: Compress and Encrypt!

How to use the demo:
--------------------------------------------------------------------

Interact with the Gui in the scene, to either create a new serializeable object
from type 'Teacher', by clicking 'Save'.
Or load a teacher object from a file by clicking 'Load'.

A 'Teacher' object has a serializeable base type 'Employee'.
A 'Employee' object has a serializeable base type 'Person'.

Additionally a 'Teacher' object contains a list of 'Child' objects
which are serializeable too.

What you use:
--------------------------------------------------------------------

//SAVE ASYNC - with sync callback
this.StartCoroutine(this.SaveAsync(teacher));
private IEnumerator SaveAsync(Teacher teacher)
    {
        var serializerAsyncRequest = OPS.Serialization.IO.Helper.SerializerAsyncRequestFactory.CreateSerializerAsyncRequest(teacher);
        yield return serializerAsyncRequest;

        FileStream stream = new FileStream("OPS_Teacher.ser", FileMode.Create);
        stream.Write(serializerAsyncRequest.Bytes, 0, serializerAsyncRequest.Bytes.Length);
        stream.Close();
    }

//SAVE ASYNC - with async callback
this.SaveAsync_Alternative(teacher);
private void SaveAsync_Alternative(Teacher teacher)
    {
        OPS.Serialization.IO.SerializerAsync.Serialize(this.OnSavedAsync_Alternative, teacher);
    }
private void OnSavedAsync_Alternative(object myObject, byte[] bytes)
    {
        FileStream stream = new FileStream("OPS_Teacher.ser", FileMode.Create);
        stream.Write(bytes, 0, bytes.Length);
        stream.Close();
    }

//LOAD ASYNC - with sync callback
this.StartCoroutine(this.LoadAsync());
private IEnumerator LoadAsync()
    {
        byte[] bytes = File.ReadAllBytes("OPS_Teacher.ser");

        var serializerAsyncRequest = OPS.Serialization.IO.Helper.SerializerAsyncRequestFactory.CreateDeserializerAsyncRequest(typeof(Teacher), bytes);
        yield return serializerAsyncRequest;

        Teacher teacher = (Teacher)serializerAsyncRequest.Object;
    }

//LOAD ASYNC - with async callback
this.LoadAsync_Alternative();
private void LoadAsync_Alternative()
    {
        byte[] bytes = File.ReadAllBytes("OPS_Teacher.ser");

        OPS.Serialization.IO.SerializerAsync.Deserialize<Teacher>(this.OnLoadedAsync_Alternative, bytes);
    }

private void OnLoadedAsync_Alternative(Teacher teacher)
    {
    }


Explaination:
--------------------------------------------------------------------

The serialization asset gives you two ways to serialize/deserialize data.

The first one is, serialize/deserialize data using a thread and receive a callback
using a coroutine.
The advantage here is, your callback is called inside the unity main thread. Allowing you to
instantiate GameObject for example.
Disadvantage here: This serialize/deserialize process needs a coroutine call inside a monobehaviour.

The second one is, serialize/deserialize data using a thread and receive a callback inside this
thread.
Advantage: Everything stays in a seperate thread, that does not stress the unity main thread.
Disadvantage: You cannot instantiate GameObjects for example, this is only allowed in the main thread.

So decide want you prefer!

And feel free to adjust / improve the async process!