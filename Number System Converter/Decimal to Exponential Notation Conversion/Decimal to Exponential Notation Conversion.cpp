/*Problem:
Write a program that takes input from the User in Decimal Point Value and converts it into Exponential Notation.
--------------------------------------------------------------------------------------------------------------------*/


#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
int main()
{
	long double num;
	cout<<"This Program can convert your Number into Exponential Notation.\n"<<endl;
	cout<<"Enter Number:  ";
	cin>>num;
	cout<<"Exponential Notation of Entered Number is:  "<<scientific<<setprecision(2)<<num;
	getch();
	return 0;
}
