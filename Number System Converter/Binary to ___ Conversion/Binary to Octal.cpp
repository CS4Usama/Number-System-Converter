#include <iostream>
using namespace std;
int main()
{
	long bin, octnum[20], oct=0, db, rem, c=1, m=1, i=0;
	cout<<"Enter Binary Number:  ";
	cin>>bin;
	db=bin;
	for(; db!=0; db/=10)
	{
		rem=db%10;
		oct=oct+(rem*m);
		if(c%3==0)
		{
			octnum[i]=oct;
			c=m=1;
			oct=0;
			i++;
		}
		else
		{
			m*=2;
			c++;
		}
	}
	if(c!=1)
		octnum[i]=oct;
	cout<<"Equivalent Octal Value of '"<<bin<<"' is:  (";
	for(i=i; i>=0; i--)
		cout<<octnum[i];
	cout<<")";
	return 0;
}
