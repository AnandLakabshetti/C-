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



Data security (static function )
 	
using static functioin we can provide data security .put data and constructor and destructor in private 
then put use static function for variable/object creation 

** operator overloading **

1.user defined 

only assignment operator we can use in the use defined function , other are not work in user defined function .



struct st v1,v2,v3; -->valid 
v3=v1+v2---> invalid

no function to do v1 and v2 addition .

to to addition  if we create a new funtion then that is called as funtion overloading 

**Existing meaning**
it is already performed on the predefiend data variable.

** special meaning **
it has to work on user defined data type variable.


the facility of giving an special meaning to an operator without changing the its existing meaning is 
refered as operator overlaoding .


An operator can be overloaded by creating a special function called operator function , which describes the task.



//If it is member funtion //

return_type  classname :: operator op (arg---)
{
statements;
}

//AS a friend function //
return tupe operataoar op (arg &, --)




List of operators that can be overloaded in c++;

	+    -    *    /      %        ^
&    |    ~    !,        =
    =      ++        --
    ==    !=      &&        ||
+=    -=    /=    %=      ^=        &=
|=    *=    =      []        ()
->    ->*    new    new []      delete    delete []



List of operators that cannot be overloaded


1> Scope Resolution Operator  (::)    
2> Pointer-to-member Operator (.*)    
3> Member Access or Dot operator  (.)    
4> Ternary or Conditional Operator (?:) 
5> Object size Operator   (sizeof) 
6> Object type Operator   (typeid) 


Overload the operators only through the member function .

there are the operator which cannot be overlaoded using member function .

friend function cannot be overloaded using following operators .

1.= (Assignment)
2.() [Funtion call]
3. [] (subscripting )
4.-> (arrow)





Type conversion:

1.explicit 
2.implicit 

C++ supoorts conversion of one type of data type to another involving user defined data type and can be done using 
constructor and type conversion function .


int, char , double , float are the primitive data type.
class/structure are the  non-primitive data types


conversion  from one primitive type to another primitive type no need to typecast i.e it will be automatically converted 

if try same with primitive to no primitive (class) then we will get an error.

class complex c1;
int x=5;
c1=x; ///error 


1.Coversion from basic (primitive)type to class type :
	e.g -> Var1=x;'
	using constructor 


2.Coversion from  class type to basic type  :
	e.g -> x=var1;
	using casting operator 

3.Coversion from  one class type to another class type  :
	e.g -> Var2=var1;
	1.using constructor 
	2.using casting operator 




struct st var1;
struct st var2 ;
int x;

1.var1=x;
2.x=var1;
3.var2=var1;



Target[Constructor] = source [Type conversion ]



when there is no constructor then compiler will create a constructor (default constructor )

if we create the constructor (any type ) then compliler will take that constructor 




Inheritance:
Car :
car will have different properties i.e price , engine , fuel type ,color 
		methods :->setprice() , setfueltype (), setenginetype(), setcolor()


so whenever we try to create an sportcar class then we will derive the properties from the car class 
because as sports car will have some properties/function same as car and some additional properties as well.


there is accessibility and availability difference is there 

Access specifiars 
1.private 
2.protected 
3.public


two users :
1.user1 will create an object type of your class
2.user2 will derived class from your class


here private and protected member functions/function will be available to both the users but 
those accessiblity will be depends on their access specifiers .

As private data members are available to both users but not accessble to both the users dorectly.

and public data members will be available and accessable to both users directly.



If A is class and B is class but derived from A as private 

class A{
}
Class b :private A
{
}

then B can access the public and protected data members not private data members of A 
so here both the users in class B cant access the protected and public members of class as it is private within class B




Is a relationship:
Association between two classes 
	i)Aggregation
	ii)composition 
	iii)inheriatance

if there 'is a' relation is there there , then there will be inheritance.


Banana(child class) is a fruit(parent class) 
rectangle(child class) is a quadrilateral (parent class) 

is a relation always implemented as public inheritance.






Function overiding:
	it is mechanism of providing same function in both base class and derived class is called as function overriding.

program is written there in c++ folder for this function override


compiler will create an variable for class where atleast one function is virtual function , we can verify this using size of both parent and child class.
virtual function :
	virtual function is a function which is present in basa class and may be overrided in derived class and which inform
to compiler to perform the run time polymorphism.

**Virtual functions must be overrided in a derived class ->false.

virtual pointer is always base class type.
vptr is placed in object.


Base class pointer can point to the object of the derived class i.e descendent class but derived class pointer can not point to  base class object .


when fun call happening with object then object type will be considered by compiler and when fun call happening with pointer then 
pointer type will be considered.


And compiler will create an static array (only once ) which a array of pointer (function pointer) [it is array of function pointer called as V V table ]as we know without declaring variable object also static variable will get memory.

in which class virtual function are there , V table will be available for that class.

virtual pointer contains the V table address i.e static array address which will be inheriated in child class.

Method overriding:

class A {

fun () {}
fun1 () {}
};
class B:public A
{
fun() {}///function overriding 
fun1(int ) {} //function Hiding
}
int main  the()
{
B b;
b.fun() ///it gooes to B
b.fun1() //it goes to B but as fun1 in B takes an argument it thows an error 
	///compiler will check the function name in class B it present in class B then it will not check function in parent class otherwise it will go to parent class and search the function
b.fun1(4); ///B it works fine 


Difference between function overloading and overriding :

overloading : in same class same function is present but they differ in arguments 
overriding : two class same function same arguments  name in both classes.
method hiding :two class same function but different arguments .

}

when in inheritance we want to change the functionality which are inherited from parent if we want to change then we will 
go for the function overriding by keeping the same name in child class.

in this example the fun () will get overrided and fun1 will act as function hiding as they differ in arguments in respective class.



/* A virtual function which declared but not defined in base class is refered as pure virtual function */
  
/* if class contains atleast one pure virtual function then class said to be abstract type*/
/* if pure virtual function is declared in base class then it must be overrided in derived class otherwise derived class becomes abstract type class  */



Templates :
1.source code size is less.
2.reduces the user efforts 
3.debugging is easy
4.Good documemtability
5.Less disk space needed to store source files 

-Templates are a new features of the programming language that allows functions and classes to operate with generic types.
-This allows function or class to work on many different data types 
-it overcomes the disadvantages of function overloading 


Templates->1.Function tempates 
	   2.Class Templates


function templates :
which allows the programmer to write a generic function.


RTTI ->run time type identification.

overloading of function templates is possible .


Template is a keyword by using this we can create the function template and class templates 

it is a way to make your function or class generalize as for as data type concerns.



Exception handling :

Exception is an event which occurs during run time and interupts the normal flow of excecution.

to handle such kind of exception we are using mechanism which uses 3 keywords 
1.Try
2.Throw
3.Catch
A catch block will handle the exception condition which is sent by throw.

Try{                       ///testing code 
throw exception--
---
}

catch (data_type argument)
{

----
---Instruction to handle the exception 
---
}

Purpose of Exception handling :

The basic purpose of exception handling is to maintain the normal flow of the application irrespective of errors/exceptions which might occur during execution. If proper exception handling is not implemented then the application flow will be disrupted.



Exception handling not only thowing error kind messages but also used to return different type results from the function.


using exception we can return the value from constructor.
	please check the examples for better understanding 


Some situation where try blocks may produce various types of exception.
can write catch block which can handle all type of exception.
multiple catch blocks are possible but multiple throw not possible.


terminator :
	A terminate handler function is a function automatically called when exception handling process has bo be left for some reason .


throwing an unhandled exception causes standard library function then terminate to be invloked.


File Handling in C++:

if some variable is present in program then it will be exist still it is under execution because we will be performing some operation, to store it permanently in HDD (in variable data will not be stored permanently) we use files which will help in future.
basic example is bank system .

In HDD data is stored in form of file.

Streams:
	input and output stream.

	In C++ predefined class is there for input and output operations on file.
	input and output stream objects we can create.
	include <fstream.h>

	fstream,ifstream,ofstream are the classes by using these class object we can perform the file read,write operations.


	cin and cout are declared in iostream header file.

	">> " (extraction operator) this operator consideres the space as an delimeter/special character 
	to avoid such things use fin.get() which returns the character .

	please go thorough the examples as well for better understanding


	File opening modes in C++;
	
	ios::in -->input/read
	ios::out --> output/write --> truncate the previous data  
	ios::app ->append 
	ios::ate-->update --> if u r performing random operation 
	
	fout.open ('filename') --> means bringing the file from HDD to RAM
	fout.open ('filename',file_open_mode) 
	by default the file will be opened in text mode.


	fout << "my name is \n Anand ";
	if u open the file in binary mode then above line will be printed as it is with \n
	but of u open the file in text mode then Anand will be written in next  line i.e meaning of \n will be considered .


 
       



	to write a data in file 
	
	ofstream fout;//create an stream for output 
	fout.open ("data.txt");
        fout<<"hello\n";
        fout.close ();
	
	To read from the file 

	 ifstream fin;//create an stream for input
	fin.open ("data.txt");  //attach the input object with file for operation 
        fin>>word;
        /*now here the fin is associate with file and cin is associated with keyboard*/
        cout << word<<endl;
	** here word is string */

	To write a class data into file 
	
    int book ::storebook ()
{
        if (price == 0){
                cout << "price is not defined \n"<<endl;
                return 0;
        }
        else {
                ofstream fout;
                fout.open ("file.dat",ios::app);
                fout.write((char *)this ,sizeof (*this));

                fout.close ();
        }
}


To read a object data from a file 

                void readclassfile()
                {
                        ifstream fin;
                        fin.open ("file.dat",ios::in|ios::binary);
                        if (!fin)
                        {
                                cout <<" file not found \n"<<endl;
                        }
                        else{
                                fin.read((char *)this , sizeof (*this));
                                while (!fin.eof ()) {
                                        fin.read((char *)this , sizeof (*this));
                                        showdata ();
                                }
                        }
                }




























































 




