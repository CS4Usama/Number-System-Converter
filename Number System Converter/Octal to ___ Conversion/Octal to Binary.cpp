#include <iostream>
using namespace std;
int main()
{
	long oct, bin, rem, rev=0;
	cout<<"Enter Octal Number:  ";
	cin>>oct;
	bin=oct;
	for(; bin!=0; bin/=10)
	{
		rem=bin%10;
		rev=(rev*10)+rem;
	}
	bin=rev;
	if(oct==0)
		cout<<"Equivalent Binary Value of '"<<oct<<"' is:  (0000)";
	else if(rem>7)
		cout<<"Invalid Octal Value "<<oct<<"\nPlease Choose Digits from 0 to 7";
	else
	{
		cout<<"Equivalent Binary Value of '"<<oct<<"' is:  (";
		for(; bin!=0; bin/=10)
		{
			rem=bin%10;
			switch(rem)
			{
				case 0:	cout<<"000";
					break;
				case 1:	cout<<"001";
					break;
				case 2:	cout<<"010";
					break;
				case 3:	cout<<"011";
					break;
				case 4:	cout<<"100";
					break;
				case 5:	cout<<"101";
					break;
				case 6:	cout<<"110";
					break;
				case 7:	cout<<"111";
					break;
			}
		}
		if(oct%10==0)
			cout<<"000";
		cout<<")";
	}
	return 0;
}
