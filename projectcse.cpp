#include<iostream>
#include<string>
using namespace std;

class Service_type
{
	int service_info;
	int service_query;
	char vechicle;
	public:
		int display()
		{
			cout<<"==================================Rishi Workshop============================";
			cout<<"\n1.Admin Login\n2.Customer Login\n3.Exit\n";
				cout<<"\t\tEnter your choice\n";
			cin>>service_info;
		
			return service_info;
		}
		int display1()
		{
			cout<<"\n\n\n\t\t\t1.Accidental Vehicle\n\t\t\t2.Regular Service\n\t\t\t3.Normal Checkup.\n\t\t\t4.Denting and Painting\n\t\t\t5.Washing\n\t\t\t6.Part Replacement.\n";
            cin>>service_query;
            return service_query;
		}
	};
	class info:public Service_type
	{
		public:
			char AN;
			int choice;
			int admin_login()
						{
				cout<<"**************Admin Login***************\n";
					cout<<"Enter The Admin Name\n";
					cin>>AN;
					cout<<"Enter The Password\n";
					cout<<"\t\t\tLogin Successfully\n";
					cout<<"*********Admin Pannel*******\n";
					cout<<"\n1.New Record\n2.Search Record\n3.Update Status\n4.Report\n5Exit\n";
					cout<<"Enter Your Choice";
					cin>>choice;
					return choice;
				}
				void record()
				{
					string id,name;
					cout<<"****New Record****";
					cout<<"Enter USer-Id";
					cin>>id;
					cout<<"Name";
					cin>>name;
					cout<<"Purpose\n\n\n\t\t\t1.Accidental Vehicle\n\t\t\t2.Regular Service\n\t\t\t3.Normal Checkup.\n\t\t\t4.Denting and Painting\n\t\t\t5.Washing\n\t\t\t6.Part Replacement.\n";
            
				}
				void customer()
				{
				cout<<"Enter The User Name";
					cin>>AN;
					cout<<"Enter The Password";
				}
	void exit()
	{
		cout<<"EXIT";
	}
	};
		class derived:public Service_type
		{
			public:
 					string vehicle_number;
 					
			void accindental()
			{
				int AC;
				string UI;
			const string type = "Accidential Case";
			cout<<"\t\ttype = Accidential Case\n";
			cin.ignore();
			cout<<"Vehicle Number";
			getline (cin, vehicle_number );
			cout<<"\n\t\t\tEndster The Amount of Accidential Case";
			cin>>AC;
			cout<<"User Unique Id";
			cin.ignore();
			getline (cin, UI );
			}
		void regular()
        {
			int RS;
			string UI;
			const string type = "Regular Service";
			cout<<"Vehicle Number";
			getline(cin,vehicle_number);
			cout<<"Enter The Amount of Regular Service";
			cin>>RS;
			cout<<"User Unique Id";
			cin>>UI;
		}
		void checkup()
		{
		int RS;
		string UI;
			const string type = "Normal Checkup" ;
			cout<<"Vehicle_number";
			getline(cin,vehicle_number );
			cout<<"Enter The Amount of Regular Service";
			cin>>RS;
			cout<<"User Unique Id";
			cin>>UI;	
		}
		void denting()
		{
			int D;
			string UI;
			const string type = "Denting and Painting";
			cout<<"Vehicle Number";
			getline(cin,vehicle_number );
			cout<<"Enter The Amount of Danting and Painting ";
			cin>>D;
			cout<<"User Unique Id";
			cin>>UI;	
		}
		void washing()
		{
			int W;
			string UI;
		const string type = "Washing";
		cout<<"Enter the Amount of Washing";
		cin>>W;
			cout<<"User Unique Id";
			cin>>UI;
	}
	void resplacement()
	{
		string name;
		cout<<"Part Resplacement";
		cin>>name; 
	}
};
main()
{
	Service_type s1,s2;
	derived d1;
	info i1;
	int a,ch;
	int no;
	ch = s1.display();

//	cout << ch;
    switch(ch)
    {
    	case 1 :
    	i1.admin_login();
		break;
		case 2 :
		i1.customer();
		break;
		case 3 :
		cout<<"Exit";	
	}
	no = i1.admin_login();
	switch(no)
	{
		case 1:
			i1.record();
			break;
		
	
	};
	switch(a)
	{
	case 1 :
	d1.accindental();
	break;
	case 2 :
	d1.regular();
	break;
	case 3 :
	d1.denting();
	break;
	case 4 :
	d1.washing();
	break;
	case 5:
	d1.resplacement();
	break;
    default:
	cout<<"Invalid Choice";
	}
}
