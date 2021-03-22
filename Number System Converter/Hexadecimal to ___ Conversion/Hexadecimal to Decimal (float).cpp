#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()
{
	long dec=0, dec1=0, rem, len=0, len2;
	int dot=0;
	double dec2=0;
	char hex[30];
	cout<<">>NOTE: It can Convert both Point and without Point Hexadecimal Values into Decimal Values..."<<endl<<endl;
	cout<<"Enter Hexadecimal Number:  ";
	cin>>hex;
	for(int i=0; hex[i]!='\0'; i++)
	{
		if(hex[i]=='.')
			dot=i;
		len++;
	}
	len--;
	if(dot==0)
	{
		for(int i=0; len>=0; len--,i++)
		{
			rem=hex[len];
			if(rem>=48 && rem<=57)
				rem-=48;
			else if(rem>=65 && rem<=70)
				rem-=55;
			else if(rem>=97 && rem<=102)
				rem-=87;
			else
			{
				cout<<"Invalid Hexadecimal Value "<<hex;
				exit(1);
			}
			dec= dec+(rem*pow(16,i));
		}
		cout<<"Equivalent Decimal Value of '"<<hex<<"' is:  ("<<dec<<")";
	}
	else
	{
		for(int i=0,len2=dot-1; len2>=0; len2--,i++)
		{
			rem=hex[len2];
			if(rem>=48 && rem<=57)
				rem-=48;
			else if(rem>=65 && rem<=90)
				rem-=55;
			else if(rem>=97 && rem<=102)
				rem-=87;
			else
			{
				cout<<"Invalid Hexadecimal Value "<<hex;
				exit(1);
			}
			dec1= dec1+(rem*pow(16,i));
		}
		for(int i=-1,len2=dot+1; len2<=len; len2++,i--)
		{
			rem=hex[len2];
			if(rem>=48 && rem<=57)
				rem-=48;
			else if(rem>=65 && rem<=90)
				rem-=55;
			else if(rem>=97 && rem<=102)
				rem-=87;
			else
			{
				cout<<"Invalid Hexadecimal Value "<<hex;
				exit(1);
			}
			dec2= dec2+(rem*pow(16,i));
		}
		double decnum= dec1+dec2;
		cout.setf(ios::fixed);
		cout<<"Equivalent Decimal Value of '"<<hex<<"' is:  ("<<decnum<<")";
	}
	return 0;
}
