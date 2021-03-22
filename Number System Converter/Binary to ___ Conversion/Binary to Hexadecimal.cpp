#include <iostream>
using namespace std;
int main()
{
	long bin, hex=0, db, rem, c=1, m=1, i=0;
	char hexanum[20];
	cout<<"Enter Binary Number:  ";
	cin>>bin;
	db=bin;
	if(db==0)
		cout<<"Equivalent Hexadecimal Value of '"<<bin<<"' is:  (0)";
	else
	{
	for(; db!=0; db/=10)
	{
		rem=db%10;
		hex=hex+(rem*m);
		if(c%4==0)
		{
			if(hex<=9)
				hexanum[i]=hex+48;
			else
				hexanum[i]=hex+55;
			c=m=1;
			hex=0;
			i++;
		}
		else
		{
			m*=2;
			c++;
		}
	}
	if(c!=1)
		hexanum[i]=hex+48;
	if(c==1)
		i--;
	cout<<"Equivalent Hexadecimal Value of '"<<bin<<"' is:  (";
	for(i=i; i>=0; i--)
		cout<<hexanum[i];
	cout<<")";
	}
	return 0;
}
