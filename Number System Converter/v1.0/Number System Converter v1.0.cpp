#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
using namespace std;

void B2D()
{
	cout<<"\t\t\t\t ----------------------------- \n";
	cout<<"\t\t\t\t |  A Project by CYBER HAWK  | \n";
	cout<<"\t\t\t\t ----------------------------- \n\n\n";
	cout<<"\t(Binary to Decimal Conversion)"<<endl<<endl;
	long bin, dec=0, db, rem;
	cout<<"Enter Binary Number:  ";
	cin>>bin;
	db=bin;
	for(int i=1; db!=0; i*=2)
	{
		rem=db%10;
		dec=dec+rem*i;
		db/=10;
	}
	cout<<"Equivalent Decimal Value of '"<<bin<<"' is:  ("<<dec<<")";
}

void B2O()
{
	cout<<"\t\t\t\t ----------------------------- \n";
	cout<<"\t\t\t\t |  A Project by CYBER HAWK  | \n";
	cout<<"\t\t\t\t ----------------------------- \n\n\n";
	cout<<"\t(Binary to Octal Conversion)"<<endl<<endl;
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
}

void B2H()
{
	cout<<"\t\t\t\t ----------------------------- \n";
	cout<<"\t\t\t\t |  A Project by CYBER HAWK  | \n";
	cout<<"\t\t\t\t ----------------------------- \n\n\n";
	cout<<"\t(Binary to Hexadecimal Conversion)"<<endl<<endl;
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
}

void D2B()
{
	cout<<"\t\t\t\t ----------------------------- \n";
	cout<<"\t\t\t\t |  A Project by CYBER HAWK  | \n";
	cout<<"\t\t\t\t ----------------------------- \n\n\n";
	cout<<"\t(Decimal to Binary Conversion)"<<endl<<endl;
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
}

void D2O()
{
	cout<<"\t\t\t\t ----------------------------- \n";
	cout<<"\t\t\t\t |  A Project by CYBER HAWK  | \n";
	cout<<"\t\t\t\t ----------------------------- \n\n\n";
	cout<<"\t(Decimal to Octal Conversion)"<<endl<<endl;
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
}

void D2H()
{
	cout<<"\t\t\t\t ----------------------------- \n";
	cout<<"\t\t\t\t |  A Project by CYBER HAWK  | \n";
	cout<<"\t\t\t\t ----------------------------- \n\n\n";
	cout<<"\t(Decimal to Hexadecimal Conversion)"<<endl<<endl;
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
}

void O2B()
{
	cout<<"\t\t\t\t ----------------------------- \n";
	cout<<"\t\t\t\t |  A Project by CYBER HAWK  | \n";
	cout<<"\t\t\t\t ----------------------------- \n\n\n";
	cout<<"\t(Octal to Binary Conversion)"<<endl<<endl;
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
}

void O2D()
{
	cout<<"\t\t\t\t ----------------------------- \n";
	cout<<"\t\t\t\t |  A Project by CYBER HAWK  | \n";
	cout<<"\t\t\t\t ----------------------------- \n\n\n";
	cout<<"\t(Octal to Decimal Conversion)"<<endl<<endl;
	long oct, dec, db;
	cout<<"Enter Octal Number:  ";
	cin>>oct;
	db=oct;
	for(int i=0; db!=0; i++)
	{
		dec= dec+(db%10)*pow(8,i);
		db/=10;
	}
	cout<<"Equivalent Decimal Value of '"<<oct<<"' is:  ("<<dec<<")";
}

void O2H()
{
	cout<<"\t\t\t\t ----------------------------- \n";
	cout<<"\t\t\t\t |  A Project by CYBER HAWK  | \n";
	cout<<"\t\t\t\t ----------------------------- \n\n\n";
	cout<<"\t(Octal to Hexadecimal Conversion)"<<endl<<endl;
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
}

void H2B()
{
	cout<<"\t\t\t\t ----------------------------- \n";
	cout<<"\t\t\t\t |  A Project by CYBER HAWK  | \n";
	cout<<"\t\t\t\t ----------------------------- \n\n\n";
	cout<<"\t(Hexadecimal to Binary Conversion)"<<endl<<endl;
	char hex[50], bin[50];
	cout<<"Enter Hexadecimal Number:  ";
	cin>>hex;
	cout<<"Equivalent Binary Value of '"<<hex<<"' is:  (";
	for(long i=0; hex[i]; i++)
	{
		switch(hex[i])
		{
			case '0':	cout<<"0000";
				break;
			case '1':	cout<<"0001";
				break;
			case '2':	cout<<"0010";
				break;
			case '3':	cout<<"0011";
				break;
			case '4':	cout<<"0100";
				break;
			case '5':	cout<<"0101";
				break;
			case '6':	cout<<"0110";
				break;
			case '7':	cout<<"0111";
				break;
			case '8':	cout<<"1000";
				break;
			case '9':	cout<<"1001";
				break;
			case 'A': case'a':	cout<<"1010";
				break;
			case 'B': case'b':	cout<<"1011";
				break;
			case 'C': case'c':	cout<<"1100";
				break;
			case 'D': case'd':	cout<<"1101";
				break;
			case 'E': case'e':	cout<<"1110";
				break;
			case 'F': case'f':	cout<<"1111";
				break;
			default:
				cout<<"Invalid Hexadecimal Value "<<hex;
		}
	}
	cout<<")";
}

void H2D()
{
	cout<<"\t\t\t\t ----------------------------- \n";
	cout<<"\t\t\t\t |  A Project by CYBER HAWK  | \n";
	cout<<"\t\t\t\t ----------------------------- \n\n\n";
	cout<<"\t(Hexadecimal to Decimal Conversion)"<<endl<<endl;
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
}

void H2O()
{
	cout<<"\t\t\t\t ----------------------------- \n";
	cout<<"\t\t\t\t |  A Project by CYBER HAWK  | \n";
	cout<<"\t\t\t\t ----------------------------- \n\n\n";
	cout<<"\t(Hexadecimal to Octal Conversion)"<<endl<<endl;
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
}

void A2C()
{
	cout<<"\t\t\t\t ----------------------------- \n";
	cout<<"\t\t\t\t |  A Project by CYBER HAWK  | \n";
	cout<<"\t\t\t\t ----------------------------- \n\n\n";
	cout<<"\t(ASCII to Character Conversion)"<<endl<<endl;
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
}

void C2A()
{
	cout<<"\t\t\t\t ----------------------------- \n";
	cout<<"\t\t\t\t |  A Project by CYBER HAWK  | \n";
	cout<<"\t\t\t\t ----------------------------- \n\n\n";
	cout<<"\t(Character to ASCII Conversion)"<<endl<<endl;
	char ch;
	cout<<"Enter a Character:  ";
	cin>>ch;
	cout<<"ASCII Value of '"<<ch<<"' is:  ("<<int(ch)<<")";
}

void D2E()
{
	cout<<"\t\t\t\t ----------------------------- \n";
	cout<<"\t\t\t\t |  A Project by CYBER HAWK  | \n";
	cout<<"\t\t\t\t ----------------------------- \n\n\n";
	cout<<"\t(Decimal to Exponential Notation Conversion)"<<endl<<endl;
	long double num;
	cout<<"Enter Decimal Number:  ";
	cin>>num;
	cout<<"Exponential Notation of '"<<num<<"' is:  ("<<scientific<<setprecision(2)<<num<<")";
}

//-------------------------------------

void line()
{
	for(int i=0; i<=52; i++)
		cout<<"--";
}

/* ---------------------------------------------------------------------------------------------------------------------------- */

int main()
{
	int choc;
	char inp;
	while(true)
	{
		cout<<"\t\t\t\t ----------------------------- \n";
		cout<<"\t\t\t\t |  A Project by CYBER HAWK  | \n";
		cout<<"\t\t\t\t ----------------------------- \n\n\n";
		
		cout<<"01.  Type '1'  to perform Binary to Decimal Conversion"<<endl;
		cout<<"02.  Type '2'  to perform Binary to Octal Conversion"<<endl;
		cout<<"03.  Type '3'  to perform Binary to Hexadecimal Conversion"<<endl;
		cout<<"04.  Type '4'  to perform Decimal to Binary Conversion"<<endl;
		cout<<"05.  Type '5'  to perform Decimal to Octal Conversion"<<endl;
		cout<<"06.  Type '6'  to perform Decimal to Hexadecimal Conversion"<<endl;
		cout<<"07.  Type '7'  to perform Octal to Binary Conversion"<<endl;
		cout<<"08.  Type '8'  to perform Octal to Decimal Conversion"<<endl;
		cout<<"09.  Type '9'  to perform Octal to Hexadecimal Conversion"<<endl;
		cout<<"10.  Type '10' to perform Hexadecimal to Binary Conversion"<<endl;
		cout<<"11.  Type '11' to perform Hexadecimal to Decimal Conversion (decimal point + without decimal point)"<<endl;
		cout<<"12.  Type '12' to perform Hexadecimal to Octal Conversion"<<endl;
		cout<<"13.  Type '13' to perform ASCII to Character Conversion"<<endl;
		cout<<"14.  Type '14' to perform Character to ASCII Conversion"<<endl;
		cout<<"15.  Type '15' to perform Decimal to Exponential Notation Conversion"<<endl;
		cout<<"\nNote: Please enter values without decimal point in all conversions except the 11th conversion."<<endl;
		line();
		
		cout<<endl<<"Enter Your Choice:  ";
		cin>>choc;
		
		system("cls");
		
		if(choc==1)
			B2D();
		else if(choc==2)
			B2O();
		else if(choc==3)
			B2H();
		else if(choc==4)
			D2B();
		else if(choc==5)
			D2O();
		else if(choc==6)
			D2H();
		else if(choc==7)
			O2B();
		else if(choc==8)
			O2D();
		else if(choc==9)
			O2H();
		else if(choc==10)
			H2B();
		else if(choc==11)
			H2D();
		else if(choc==12)
			H2O();
		else if(choc==13)
			A2C();
		else if(choc==14)
			C2A();
		else if(choc==15)
			D2E();
		else
		{
			cin.clear();
			cin.sync();
			cout<<"\t\t\t\t ----------------------------- \n";
			cout<<"\t\t\t\t |  A Project by CYBER HAWK  | \n";
			cout<<"\t\t\t\t ----------------------------- \n\n\n";
			cout<<"Invalid Choice... Please enter choice from 1 to 15";
		}
		
		cout<<"\n\n\nDo you want to continue this program to perform another conversion?\nIf Yes then press 'Y' otherwise press any key to exit program."<<endl;
		inp=getch();
		if(inp=='Y' || inp=='y')
			system("cls");
		else
			exit(0);
	}
	
	getch();
	return 0;
}
