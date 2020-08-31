/* Basic notes while studing C++ */

Bool is a new data type introduced in the C++, where 2 possible states 1.true 2.False
Size of bool is 1.

Bool improves the code redability.

String :  
it is new data type in a C++;
string lenght can be changed run time, by this we can overcome the problem of malloc and realloc.

S="Hello"
cout << s;
s="hello world ";
cout << s;


sizeof string datatype is 4.

string is class c++;
class is special type of structure 

Structure is a user defined datatype .


class string {

char * str;
some functio operations;
}




        //cin >> s; it will not acuscept words after the space 
        getline (cin,s); ///for taking the string with space



Namespaces :
Mechanism for logically grouping declarations and definations into common declarative region 



items declard in standard c++ library are in std namespace

to include the input and output in functions from from c++ library
use

#include <iostream>
using namespace std;


Local declaration of namespace is invalid .



Need to learn the ambuguity error in c+ after using multiple namespaces.



Mutable keyword :
it is a keyword which is used to allow a particular data member of a constant object to be modified.


struct a {
mutable int a;
char b;
};

const struct a a;
a.a=11;//is possible because of mutable keyword



Function overloading :
	overloading means using single  name for several different task;

defining a multiple functions with same names is called as function overloading, these function must differ in their
member, type or argument .

in function overloading the fucntion call finds the exact matching function in which the formal and actual argument match 
in number and type it involkes that function for execution.

functons cant be overloaded just because of return data type.




function overloading follow the Name mangling concept.

	name mangling is concept used in c++ wher compiler changes the names of the every function by adding additional
information based on fucntion name and its arguments.



function overloading is depends on the arguments not on return type 



Default Argument:
A default argument is a function parameter that has a default value provided to it.if the user does not supply the value 
for that parameter the default value is used .if user does supply the a value for the default parameter the user supplied value is provided.




Rules for the default parameter :
	1.a fucnton can have multiple default parameter .
	2.all default parameter must be right most parameter in argument
`	3.default parameter must be given at the time of prototype and must not be repeatedin function defination .



Advantage : 
1.The can used to combine the similar functions into one .
2.They provide the greater flexibility to the programmer.



ambuguity error may occur due to defaults arguments and overlaoding function 

int fun (int a, int b=0);
int fun (int a)

fun (1,2);
fun (1); /// this will cause an ambuguity 


Ambuguity may occur due to datatypes of the overloaded function 

void fun (int x)
void fun (int &x)


fun (10)
fun (variable ) //ambuguity which fun has to select 




Inline fuction 


inline funtion is a function which is expanded inline on invocation (in place of function call)
that means whenever c++ complier comes across the inline functin call it substitution the entire code of function in place of function call.





Diff bet inline function and macro


new operator and delet:

new operator is used same as malloc in c
u
syntax of new :
int *ptr = new int 
int *ptr = new int [5]

syntax of delet:
delet ptr;
delet []ptr;




typecasting is not required in new operator 

Class and object :

Class:	it is nothing but it is a advance structure 
Object :object is nothing but it is a instance of a class 

stucture is collection of different data types in contigeous memory  location.

whenever the object is created then memory is allocated only for the data members .



class st{

int a;
char c;

void fun ()
{

}
//here fun is member function and (a,b) are the data members .

}
yo


empty structure size is 0 byte in c and 1 byte in c++;


c++ structure allow the fucntion declaration inside the structure [encapuslation ]which not possible in c.

in c++ strucures the by default the members are public and in class it is private

by default the c++ structure takes a public inheritance and class has private inheritance



3 Access permissions are there in c++
@
it is also called as visibility mode

1.public 
2.private 
3.protected 





Friend function:
	it is a non member of the class which is used to access the private data members of the class .


syntax :
	friend return_type function_name  (classname &, ---)

a non member function can be a friend function of the class.

This pointer :

/* In member function */
obj.setdata (10,20)

void setdata (int a, int b)
{
x=a, y=b; // ---> internally obj.x=a, obj.y=b;
}

/* In non-member function */
obj.setdata(obj1, int a,int b)
{
obj1.x=x,obj1.y=y;
}


This pointer conecpt is not there in a non member function , we have to pass the object as an explicit parameter.


C++ provides a unique pointer called this pointer .the pointer called this points to object itself.whenever a member
function is called , this is automatically passed to the called member function as an implicit in built argument.


charactaristic of this pointer:

Need to learn;


 
In a class both can be declared as static i.e data member and member function .


Static data  member:
	it is like global variable for its class, it can be accessed by all object of the class.

default value of static value is 0.
just one copy of the data member is created and it is shared across the objects;


a static data member must be declared within a class .
and defined outside the class by type and scope of the static member variable.



1.Static member function are same as a normal function .


2.A static member function can access the only static members of the class (variable or  function )
3.static member function can be involved by using the class name (instead of its object ) as follow:



class_name::function name;

static member function dont have an implicit "this " pointer as the first parameter.


Advantages of static member function :
1.the static function can be used to count the no of instances of a class and can be returned the value 
of static variable using static member function .
2.the static function can be called without creating the objecti.e class name :: function name;
this is useful to define the constructors in private sections.
ihi



member function :
	1.access data 
	2.modify the data 


C++ provider special mechanism of initialize an object during its creation and and destroy the object 
when it is no more needed using special member functions known as constructors and destructors.



A constructor is a special member function which gets called/involked automatically when an object gets 
created of same class , object is automatically initialized by the constructor .



member function:
return type classname :: function name (argc,--);

constructor :
class_name :: (classname )(argc,--)


in contructor there is no return tupe.vi.e like void , int ,char *

No function name .



Class A {
int x,y;
public :
A()
{
x=10,y=20;
}
main ()
{
A obj;
}
}  


constructors are used to initialize the class members.
whenever obj is created out of class then constructor must be in public mode.


properties of contructors :
1.constructors has the same name as class to which it belongs .
2.it does not have return type i.e even void 
3.it must be declared in public mode , if objects are ceating outside the class.
4.Address of the constructor cannot be refered .

5.constructor can have default argument.
6.contructor can be overloaded .

7.contructor can not be virtual.
8.contructor can be inherited although a derived class can call the base class contructor.



**why contructor can not have return type and have parameter.

--basically contructor are called when a object created  and there can never exits a situvation where 	we want
to return a value at a time of creation of an object .but there are situvation when the data members of the dofferent onjects must 
be initialized with different value at the time of creation , so C++ allow a passing an argument to constructor .



**4 Default member function of the class:

1.default contructor 
2.copy condtructor 
3.destructor
4.Assignment operator overloaded function 


Constructor types :
1.Default contructors 
2.parameterised constructor 
3.copy constructors 
4.dynamic contructors 


1.default contructor :
	A constructor which does not accept any parameter is called as default contructor.

When constructor is not explicitely declare in class , a default constructor is added and involked during 
object 	initialization by the compiler .
syntax: classname ::classname ();

2.
A contructor with one or more argument is known as parameterised contructor.

syntax:
	classname :: classname (arg,--);


Default contructor is ignored by the compiler if any contructor explicitely present into the class.

3.Copy constructor :
copy constructor is special type of contructor used to make the copy of one class object and initialization 
it done by using another object of the same class.

copy contructor takes the single argument which is reference to another object of the same class.


A default copy constructor is ignored when the explicit copy contructor provided in the class.

Explicit copy contructor is not provided then implicit copy constructor is provided .



without & A (A & ob) -->so recursively call the function .

Error : Invalid contructor you probably meant  'A (const &A)'


constructor involked only once in to a object.


copy constructor cases 
Case1.

A obj;
A obj1=obj; ---> initialization 
obj1=obj;--> Assignment operator overloading function 



Shallow copy :
it is called as member wise copy.

it is a type of copy in which the data member of an object  or copy into one object use 
to default constructor.

Note : shallow copy is not suitable for copying objects containing dynamically allocated pointers.
to overcome this problem we use the another type of copy called as deep copy.





Deep coopy:
	if data member of one object or copy into the another object using explicit copy contructor then it is called deep copy


deep copy copies what  object pointer members to pointing another object by allocating a separate memory.



Dynamic contructor :
	if a contructor involked to to dynamically created object that is called as dynamic contructor .


         A *ptr =new A;///dynamically allocate the memory 
     
        ptr->print ();

        ptr = new A (222,333);

        ptr->print ();

 

Destructors :
	it is a special member function of the class which is invloked whenever the scope of the object 
is going to object completed (destroyed ).


it is used to avoid the memory leak;

void fun ()
{
A obj:///
}

syntax  ~classname (void);


~ constructor means the destructors  ~ A()


destructor is the only function which never accepts the arguments .

main function of the destructor is to avoid the dynamic memory leakage .


const object must be initialized with constructor .

const object must be accessed with constant  member function only .















 




