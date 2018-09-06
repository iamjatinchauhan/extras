#include<iostream>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
#include<fstream>
using namespace std;

class login
{
	public:
		char username[100];
		int password;
		void entry();
};
void login :: entry()
{
	cout<<"\n\n\n\n\n\n\n\n\t\t\t\tENTER LOCIN ID:";
	cin>>username;
	cout<<" \n\n\n\n\n\n\n\n\t\t\t\tENTER PASSWORD:";
	cin>>password;
	while(username=="lpu"&& password==12345)
	{
		cout<<"\n\n\t CORRECT\n\n";
		cout<<" \n\n\nWELCOME BACK\n\n\t\t";
		system("CLS");
	}
}
class Bill
{
    public:
    int x,y,z,n,a,b;
    char name[];
    int date;
    void getdata()
    {
    	cout<<"**********************************"<<endl;
        cout<<" PLEASE ENTER CUSTOMER NAME:";
        cin>>name;
        cout<<" \nPLEASE ENTER BILLING DATE:";
        cin>>date;
        cout<<"\n**********************************"<<endl;
        cout<<" \nPLEASE ENTER NO. OF ITEMS:";
        cin>>n;

        cout<<"\n**********************************"<<endl<<endl;
        cout<<" PLEASE ENTER NO. OF PARACETAMOL:";
        cin>>x;
        cout<<endl;
        cout<<" PLEASE ENTER ASPIRIN:";
        cin>>y;
        cout<<endl;
        cout<<" PLEASE ENTER VICKS:";
        cin>>z;
        cout<<endl;
        cout<<" PLEASE ENTER BENADRYLL:";
        cin>>a;
        cout<<endl;
        cout<<" PLEASE ENTER EQUANIL:";
        cin>>b;
        cout<<endl;
    }
};
class Customer:public Bill
{
    public:
    void check()
    {
        cout<<"********************************************"<<endl;
		cout<<"********************************************"<<endl;
		cout<<"** NAME: "<<name<<"   *  "<<"DATE: "<< date<<"**"   <<endl;
		cout<<"********************************************"<<endl;
		cout<<" _______________MEDICINES BILL______________"<<endl;
		cout<"1. PARACETAMOL:X";cout<<x<<endl;
		cout<"2. ASPIRIN    :X";cout<<y<<endl;
		cout<"3. VICKS      :X";cout<<z<<endl;
		cout<"4. BENADRYLL  :X";cout<<a<<endl;
		cout<"5. EQUANIL    :X";cout<<b<<endl;
    }
};





int main()
{
	login lo;
	lo.entry();
	Bill person;
int a,b,c;
Customer u;
    u.getdata();
    u.check();
char name[200];
int weight,year,price;
fstream infile;
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<< "++ ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
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
 
		cin>>b;
		if(b==2)
		{
			system("CLS");
			cout<<"\n\n\t\t\tYOU HAVE ENTERED THE CHOICE - READ THE MEDICINE RECORD";
			infile.open("medicines.txt",ios::in);
			cout<<"\n\n\n\tfile opened successfully";
		}
		else if(b==1)
		{
			system("CLS");
			cout<<"\n\n\t\t YOUR ENTERED CHOICE-UPDATE THE MEDICINE RECORD\n\n";
			
			cout<<"\n\n\n\nENTER THE NO. OF MEDICINES FOR WHICH YOU WANT TO ENTER THE DETAILS:";
			cin>>c;
			ofstream out("medicines");
			for(int l=1;l<=c;l++)
			{
				cout<<l<<"st MEDICINE"<<endl;
				cout<<"***************************************"<<endl;
				cout<<l<<"ENTER MEDICINES NAME:";
				char string[40];
				cin>>string;
				
				int len=strlen(string);
				fstream file;
				file.open("names.text",ios::app);
				file<<"  ";
				for(int m=0;m<len;m++)
				{
					file.put(string[m]);
				}
				file.seekg(0);
				char ch;
				while(file)
				{
					file.get(ch);
				}
				file.close();
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
				
				
				cout<<"***************************************"<<endl;
		}
	}
	else
	cout<<"PLEASE ENTER THE CORRECT NUMBER TO CONTINUE";
}
