#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	long oct, dec, db;
	cout<<"Enter Octal Number:  ";
	cin>>oct;
	db=oct;
	for(int i=0; db!=0; i++)
	{
		dec= dec+(db%10)*pow(8,i);
		db/=10;
	}
	cout<<"Equivalent Decimal Value of '"<<oct<<"' is:  ("<<dec<<")";
	return 0;
}
