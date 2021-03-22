#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	long oct, fk, rem, hex=0, rev=0, i=0, k=0, m=1, c=0;
	char bin[30]="", hexanum[30];
	cout<<"Enter Octal Number:  ";
	cin>>oct;
	fk=oct;
	for(; fk!=0; fk/=10)
	{
		rem=fk%10;
		if(rem>7)
		{
			c++;
			break;
		}
		rev=(rev*10)+rem;
	}
	if(oct==0)
		cout<<"Equivalent Hexadecimal Value of '"<<dec<<"' is:  (0)";
	else if(c==0)
	{
		fk=rev;
		for(; fk!=0; fk/=10)
		{
			rem=fk%10;
			switch(rem)
			{
				case 0:	strcat(bin, "000");
					break;
				case 1:	strcat(bin, "001");
					break;
				case 2:	strcat(bin, "010");
					break;
				case 3:	strcat(bin, "011");
					break;
				case 4:	strcat(bin, "100");
					break;
				case 5:	strcat(bin, "101");
					break;
				case 6:	strcat(bin, "110");
					break;
				case 7:	strcat(bin, "111");
					break;
			}
		}
		if(oct%10==0)
			strcat(bin, "000");
		while(bin[k]!='\0')
			k++;
		c=1;
		k--;
		for(; k>=0;k--)
		{
			if(bin[k]=='0')
				rem=0;
			else
				rem=1;
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
		cout<<"Equivalent Hexadecimal Value of '"<<oct<<"' is:  (";
		c=0;
		for(i=i; i>=0; i--)
		{
			if(hexanum[i]=='0' && c==0)
			{
				c++;
				continue;
			}
			else
				cout<<hexanum[i];
		}
		cout<<")";
	}
	else
		cout<<"Invalid Octal Value "<<oct<<"\nPlease Choose Digits from 0 to 7";
	return 0;
}
