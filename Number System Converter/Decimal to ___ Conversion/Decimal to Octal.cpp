#include <iostream>
using namespace std;
int main()
{
	long dec, oct[100], db, i=1;
	cout<<"Enter Decimal Number:  ";
	cin>>dec;
	db=dec;
	if(db==0)
		cout<<"Equivalent Octal Value of '"<<dec<<"' is:  (000)";
	else
	{
		for(; db!=0; db/=8)
			oct[i++]=db%8;
		cout<<"Equivalent Octal Value of '"<<dec<<"' is:  (";
		for(int j=i-1; j>0; j--)
			cout<<oct[j];
		cout<<")";
	}
	return 0;
}
