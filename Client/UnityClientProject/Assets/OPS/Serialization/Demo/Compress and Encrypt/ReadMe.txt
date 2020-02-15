Abstract:
--------------------------------------------------------------------

This demo is used to demonstrate how you can easily save 
and load classes by decorating them with the corresponding attributes.
Additionally you can see how you can use compression and encryption.

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

//SAVE
FileStream stream = new FileStream("OPS_Teacher.ser", FileMode.Create);
OPS.Serialization.IO.Serializer.SerializeToStream(stream, teacher, true, true, "UltimatePassword!");
stream.Close();

//LOAD
FileStream stream = new FileStream("OPS_Teacher.ser", FileMode.Open);
Teacher teacher = OPS.Serialization.IO.Serializer.DeSerializeFromStream<Teacher>(stream, true, true, "UltimatePassword!");
stream.Close();

//Attributes
[SerializeAbleClass]
[SerializeAbleField(0)]
[ClassInheritance(typeof(Employee), 0)]

Explaination:
--------------------------------------------------------------------

When serializing/deserializing you have three optional parameters.
The first bool defines if you want to compress or decompress the object.
The second bool defines if you want to encrypt it and the third defines the passwort you want to use.

The Attributes, like 'SerializeAbleClass', can be found in the namespace 'OPS.Serialization.Attributes'.
The Attribute 'SerializeAbleClass' has to be added to a class to mark it as serializeable.
But only adding this Attribute will not save any fields.
You have now to mark the fields you want to serialize with the Attribute 'SerializeAbleField'.
The field type has to be a primitive or a Unity primitive or a class marked by you with 'SerializeAbleClass'.
The 'SerializeAbleField' has a parameter called Index. This Index has to be a unique integer, used as key
to identify the field. Start at best at zero.

To allow inheritance you have to add the Attribute 'ClassInheritance' on the base class.
For example: The 'Teacher' is serializable class and inherites from the serializeable 'Employee' class.
So the 'Employee' class needs an 'ClassInheritance' to 'Teacher'.

//
[SerializeAbleClass]
[ClassInheritance(typeof(Teacher), 0)]
class Employee : Person
{
	...
	[SerializeAbleField(0)]
	public String Department;
	...
}

As you can see you need to link to the type and you have to enter an increasing Index like you know from 
the 'SerializeAbleField' Attribute. These Indexes are independent from the ones used for the fields. So
they can share the same integer values you used for the fields. And vice versa.

--------------------------------------------------------------------

Note: You need only the 'SerializeAbleClass' Attribute or the 'ClassInheritance' Attribute
in the inheritance chain if this class serializes something. If it does not, you have not to add
it.
Example:

//
[SerializeAbleClass]
class Teacher : Emplyoee
{
	...
	[SerializeAbleField(0)]
	public String School;
	...
}

//
class Employee : Person
{
	...
}

//
[SerializeAbleClass]
[ClassInheritance(typeof(Teacher), 0)]
class Person
{
	...
	[SerializeAbleField(0)]
	public String Name;
	...
}

