#include <iostream>
using namespace std;
int main()
{
	long bin, dec=0, db, rem;
	cout<<"Enter Binary Number:  ";
	cin>>bin;
	db=bin;
	for(int i=1; db!=0; i*=2)
	{
		rem=db%10;
		dec=dec+rem*i;
		db/=10;
	}
	cout<<"Equivalent Decimal Value of '"<<bin<<"' is:  ("<<dec<<")";
	return 0;
}
