#include<iostream>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
#include<fstream>
#include<iomanip>

using namespace std;
class login
{
	public:
	char username[80];
	int password;
	void entry();	
 }; 
 void login::entry()
 {
 	
	cout<<"\n \n \n\n \n \n \n \n \t \t \t \t ENTER LOGIN ID: ";
	cin>>username;
	cout<<"\n \n \n\n \n \n \n \n \t \t \t \t ENTER PASSWORD: ";
	cin>>password;
	while(username=="lpu" && password==1234)
	{
		cout<<"\n \n \t CORRECT\n \n";
		cout<<"\n \n \n WELCOE BACK \n \n \t \t";
		system("CLS");
	}
	 }
class bill
{
	public:
		char customer[80];
		int total;
		int x,y,z,w,u;
		void general()
		{
			cout<<"**********************************"<<endl;
            cout<<" PLEASE ENTER CUSTOMER NAME:";
			cin>>customer;
			cout<<endl;
			cout<<"ENTER THE QUANTITY OF MEDICINES BELOW:-";
			cout<<"\n 1. SUMO= ";
			cin>>x;
			cout<<"\n 2. ASPIRIN= ";
			cin>>y;
			cout<<"\n 3. EQUANIL= ";
			cin>>z;
			cout<<"\n 4. BENADRYLL= ";
			cin>>w;
			cout<<"\n 5. VICKS= ";
			cin>>u;
		}
		void store()
		
		{
			system("color B1");
           
			cout<<"********************************************"<<endl;
		    cout<<"********************************************"<<endl;
		    cout<<"NAME: "<<customer<<endl;
	    	cout<<"********************************************"<<endl;
		    cout<<" _______________MEDICINES BILL______________"<<endl;
			cout<<x<<" SUMO:="<<(5*x);
			cout<<"\n \n\t\t"<<y<<" ASPIRIN:="<<(8*y);
			cout<<"\n \n\t\t"<<z<<" EQUANIL:="<<(12*z);
			cout<<"\n \n\t\t"<<w<<" BENADRYLL:="<<(60*w);
			cout<<"\n \n\t\t"<<u<<" VICKS:="<<(2*u)<<endl;
			total=((5*x)+(8*y)+(12*z)+(60*w)+(2*u));
			cout<<" \t\t_______________________________"<<endl;
			cout<<"\n \n\t\t TOTAL AMOUNT TO BE PAID: "<<total<<endl;
			cout<<" \t\t_______________________________"<<endl;
			cout<<"\n \n \n \n \n \t \t \t ********THANKS FOR USING******** \n \n \n ";
		}
};
int main()
{
	login lo;
	bill person;
	int a,b,c,g;
	int weight,year,price;
	fstream infile;
	
	lo.entry();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++1234+++++++++++++++++++++"<<endl;
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"                   ----------------------------------                  "<<endl;
	cout<<"++++++++++++++ |  MEDICAL  RECORD  MANAGEMENT SYSTEM | ++++++++++++++++"<<endl;
	cout<<"                   ----------------------------------                  "<<endl;
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"\n\n Press 1 to continue\n";
	cin>>a;
	if(a==1)
	{
	
	system("CLS");
	
		cout<<"\n\n\t\t\t PLEASE CHOOSE THE FOLLOWING OPTIONS TO CONTINUE:\t\t\t\t\n";
		cout<<"\n\n\t\t\t1. UPDATE THE MEDICINE RECORD"<<endl;
		cout<<"\n\n\t\t\t2. READ THE MEDICINE RECORD"<<endl;
		cout<<"\n\n\n\t\t INPUT:";
	cin>>b;
	if(b==2)
	{
		system("CLS");
		cout<<" \n \n \t \t \tYOU HAVE ENTERD THE CHOICE- READ THE MEDICINE RECORD";
		infile.open("medicines.txt",ios::in);
		cout<<"\n \n \t \tfile opened successfully";
	}
	if(b==1)
	{
		system("CLS");
		cout<<"\n \n \t \t \tYOU HAVE ENETERED THE CHOICE- UPDATE THE MEDICINE RECORD\n \n";
		cout<<"\n \n \n \nENTER THE NUMBER OF MEDICINES FOR WHICH YOU WANT TO ENTER THE DETAILS: ";
		cin>>c;
		for(int l=1;l<=c;l++)
		{
			cout<<"*********************************************"<<endl;
			cout<<l<<"st MEDICINE"<<endl;
			cout<<"*********************************************"<<endl;
			cout<<l<<"ENTER MEDICINE NAME:-";
			char string[40];
			cin>>string;
			

 int len= strlen(string);
 fstream file;
 file.open("names.txt", ios::app);
 file<<" ";
 for(int m=0;m<len;m++)
 {
	file.put(string[m]);
}
file.seekg(0);
char ch;
while(file)
{file.get(ch);
}

			cout<<l<<"ENTER THE WEIGHT OF MEDICINE(in mg):-";
	char string1[43];
			cin>>string;
			

 int leng= strlen(string);
 fstream fil;
 fil.open("weight.txt", ios::app);
 fil<<" ";
 for(int m=0;m<leng;m++)
 {
	file.put(string[m]);
}
file.seekg(0);
char che;
while(fil)
{fil.get(che);
}
		}
		cout<<"*******************************************";
		
	}
system("CLS");
cout<<"\n \n \t \t PROCEED FOR BILL\n \n \t \t";
cout<<"\n \n \t \t PRESS 1 FOR BILL PAYMENT";
cin>>g;
if(g==1)
{
	system("CLS");
	person.general();
	system("CLS");
	person.store();
	
	}
	else
	cout<<"\n \n \t \t CHOOSE THE CORRECT CHOICE\n \n \t \t \n \n \t \t THANK YOU \n \n";	

}
else
cout<<"PLEASE ENTER CORRECT NUMBER TO CONTIUE";
}

