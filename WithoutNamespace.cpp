#include <iostream>
using namespace std;

namespace first 
{
	int x=11, y=22;
}
namespace first
{
	int z=12 /* int y=22 --> this will cause redefination error */ ;
	void fun (void )
	{
		std :: cout << "in namespace first " << std::endl;
	}

}

namespace second
{
	int x=15,y=25;
	void fun (void )
	{
		std::cout << "in second namespace " << std::endl;
	}
}
void fun ()
{
	std:: cout << "fun function " << std::endl;

}
int main ()
{
//	using first ::x;///redefination of x 
int x=40;
//using first ::x; --> this will gove error as redefination of x 
	std:: cout <<"x= " << x<< endl;
	//std:: cout <<"::x= " <<::x<< endl;
	//std:: cout <<"first ::x"<< first ::x<< endl;
	cout << "after::"<< x<<endl;
	std:: cout <<"first ::x"<< first ::x<< endl;
	std:: cout <<"first ::z"<< first ::z<< endl;
	std:: cout <<"second ::x"<< second ::x<<std:: endl;
fun ();

}
