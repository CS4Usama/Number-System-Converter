#include <iostream>
using namespace std;
int main()
{
	long dec, db, tmp, i=1;
	char hex[100];
	cout<<"Enter Decimal Number:  ";
	cin>>dec;
	db=dec;
	if(db==0)
		cout<<"Equivalent Hexadecimal Value of '"<<dec<<"' is:  (0)";
	else
	{
		for(; db!=0; db/=16)
		{
			tmp=db%16;
			if(tmp<=9)
				tmp=tmp+48;
			else
				tmp=tmp+55;
			hex[i++]=tmp;
		}
		cout<<"Equivalent Hexadecimal Value of '"<<dec<<"' is:  (";
		for(int j=i-1; j>0; j--)
			cout<<hex[j];
		cout<<")";
	}
	return 0;
}
