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










