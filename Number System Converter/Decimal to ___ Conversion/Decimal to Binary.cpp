#include <iostream>
using namespace std;
int main()
{
	long dec, bin[100], db, i=1;
	cout<<"Enter Decimal Number:  ";
	cin>>dec;
	db=dec;
	if(db==0)
		cout<<"Equivalent Binary Value of '"<<dec<<"' is:  (0000)";
	else
	{
		for(; db!=0; db/=2)
			bin[i++]=db%2;
		cout<<"Equivalent Binary Value of '"<<dec<<"' is:  (";
		for(int j=i-1; j>0; j--)
			cout<<bin[j];
		cout<<")";
	}
	return 0;
}
