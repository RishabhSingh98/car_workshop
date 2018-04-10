#include<iostream>
#include<fstream>
using namespace std;
class mechanic
{
	public:
	int carno;
	char name[60];
		void getdata()
		{
			cout<<"Enter Car-Number: ";
			cin>>carno;
			cout<<"Enter the name of the Customer:";
			cin>>name;
		}
		void showdata()
		{
			cout<<carno<<name;
		}
};
main()
{
	
	int ch;
	ofstream fout;
	ifstream fin;
	cout<<"\n1. New Record\n2. Read Record"<<endl;
	cout<<"\nEnter your choice: ";
	cin>>ch;
	switch(ch)
	{
		case 1:
				fout.open("c:\\cardata\\data.txt",ios::app);
				mechanic p;
				p.getdata();
				fout.write((char*)&p,sizeof(p));
				fout.close();
				break;
	
		case 2:
				mechanic p1;
				int cn;
				cout<<"\nEnter the carno. to read";
				cin>>cn;
				fin.open("c:\\cardata\\data.txt");
				while(!fin.eof())
				{
					fin.read((char*)&p1,sizeof(p1));
					if(p1.carno==cn)
					{
						p1.showdata();
					}			
				}
				break;
		
		default:
				cout<<"No choice matched: ";
	}
				
}

	void accident() 
			{
				int month,date,year;
			if((month % 2 != 0) && (date == 27))
			 {
				month++;
				date = 1;
			}
		if((month % 2 != 0) && (date == 28))
			 {
				month++;
				date = 2;
			}
			if((month % 2 != 0) && (date == 29))
			 {
				month++;
				date = 3;
			}
			if((month % 2 != 0) && (date == 30))
			 {
				month++;
				date = 4;
			}
			if((month % 2 != 0) && (date > 30)) 
			{
				month++;
				date = 5;
			}
			if((month % 2 != 0) && (date <= 26))
			 {
				date = date + 5;
			}
				if((month % 2 == 0) && (date == 26))
			 {
				month++;
				date = 1;
			}
				if((month % 2 == 0) && (date == 27))
			 {
				month++;
				date = 2;
			}
				if((month % 2 == 0) && (date == 28))
			 {
				month++;
				date = 3;
			}
			if((month % 2 == 0) && (date == 29))
			 {
				month++;
				date = 4;
			}
			if((month % 2 == 0) && (date == 30)) 
			{
				month++;
				date = 5;
			}
			if((month % 2 == 0) && (date <=25))
			 {
				date = date + 5;
			}
					if(month == 2)
		 { 
				if(((year%4==0)&&(year%100!=0))||(year%400==0))
				{
				   	if(date == 25)
					 {
						month ++;
						date = 1;
					}
					   if(date == 26)
					 {
						month ++;
						date = 2;
					}
					if(date == 27)
					 {
						month ++;
						date = 3;
					}
					if(date == 28)
					 {
						month++;
						date = 4;
					}
						if(date == 29)
					 {
						month ++;
						date = 5;
					}
						if(date <= 24)
					 {
						date = date + 5;
					}
					if(date == 29)
					 {
						month ++;
						date = 5;
					}
				}
				else
				 {
				 	if(date==24)
				 	{
				 		month++;
				 		date=1;
					 }
					if(date == 25)
					 {
						month ++;
						date = 2;
					}
					   if(date == 26)
					 {
						month ++;
						date = 3;
					}
					if(date == 27)
					 {
						month ++;
						date = 4;
					}
					if(date == 28)
					 {
						month++;
						date = 5;
					}
					if(date <=23)
					 {
						date = date + 5;
					}
				}
			}
			if((month >= 8) && (month <= 11)) 
		{
			if((month % 2 == 0) && (date == 27))
			 {
				month++;
				date = 1;
			}
			if((month % 2 == 0) && (date == 28))
			 {
				month++;
				date = 2;
			}
			if((month % 2 == 0) && (date == 29))
			 {
				month++;
				date = 3;
			}
			if((month % 2 == 0) && (date == 30))
			 {
				month++;
				date = 4;
			}
			if((month % 2 == 0) && (date == 31))
			 {
				month++;
				date = 5;
			}
			if((month % 2 == 0) && (date <=26))
			 {
				date = date + 5;
			}
			if((month % 2 != 0) && (date == 26))
			 {
				month++;
				date = 1;
			}
			if((month % 2 != 0) && (date == 27))
			 {
				month++;
				date = 2;
			}
			if((month % 2 != 0) && (date == 28))
			 {
				month++;
				date = 3;
			}
			if((month % 2 != 0) && (date == 29))
			 {
				month++;
				date = 4;
			}
			if((month % 2 != 0) && (date == 30)) 
			{
				month++;
				date = 5;
			}
			if((month % 2 != 0) && (date <= 25)) 
			{
				date = date +5;
			}
		
		}
			if(month == 12) 
		{
			if((1 <= date) && (date <= 26))
			 {
				date = date + 5;
			}
				if(date == 27) 
			{
				date = 1;
				month = 1;
				year++;
			}
				if(date == 28) 
			{
				date = 2;
				month = 1;
				year++;
			}
				if(date == 29) 
			{
				date = 3;
				month = 1;
				year++;
			}
			if(date == 30) 
			{
				date = 4;
				month = 1;
				year++;
			}
			if(date == 31)
			 {
				date = 5;
				month = 1;
				year++;
			}
	}
	}

