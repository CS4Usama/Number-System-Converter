#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int i, len;
	long dec=0, oct=0;
	char hex[30];
	cout<<"Enter Hexadecimal Number:  ";
	cin>>hex;
	for(len=0; hex[len]!='\0'; len++);
	for(i=0; hex[i]!='\0'; i++,len--)
	{
		if(hex[i]>='0' && hex[i]<='9')
			dec= dec+(hex[i]-'0')*pow(16,len-1);
		if(hex[i]>='A' && hex[i]<='F')
			dec= dec+(hex[i]-55)*pow(16,len-1);
		if(hex[i]>='a' && hex[i]<='f')
			dec= dec+(hex[i]-87)*pow(16,len-1);
	}
	for(i=1; dec!=0; i*=10,dec/=8)
		oct= oct+((dec%8)*i);
	cout<<"Equivalent Octal Value of '"<<hex<<"' is:  ("<<oct<<")";
	return 0;
}
