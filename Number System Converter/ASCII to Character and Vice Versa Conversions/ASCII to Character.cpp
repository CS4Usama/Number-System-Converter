#include <iostream>
using namespace std;
int main()
{
	int no;
	cout<<"Enter Number:  ";
	cin>>no;
	if(no>=0 && no<=127)
	{
		if(no>=0 && no<=32 || no==127)
			cout<<"This is a Special Corresponding Character which cannot be displayed on Screen.";
		else
			cout<<"The Corresponding Character to the '"<<no<<"' is:  ("<<char(no)<<")";
	}
	else
		cout<<"Invalid Number. Please choose number from 0 to 127";
	return 0;
}
