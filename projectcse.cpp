#include<iostream>
#include<string.h>
using namespace std;

class Service_type
{
	int service_query;
	char vechicle;
	public:
		int display()
		{
			cout<<"\n1.Accidental Vehicle\n2.Regular Service\n3.Normal Checkup.\n4.Denting and Painting\n5.Washing\n6.Part Replacement.\n";
            cin>>service_query;
            return service_query;
		}
	};
		class derived:public Service_type
		{
			public:
			void accindental()
			{
				int AC,UI;
			const string type = "Accidential Case";
			cout<<"Vehicle Name";
			get_line(cin,vehicle name )
			cout<<"Enter The Amount of Accidential Case";
			cin>>AC;
			cout<<"User Unique Id";
			cin>>"UI";
		}
		void regular()
        {
			int RS,UI
			const string type = "Regular Service";
			cout<<"Vehicle Name";
			get_line(cin,vehicle name )
			cout<<"Enter The Amount of Regular Service";
			cin>>RS;
			cout<<"User Unique Id";
			cin>>"UI";
		}
		void checkup()
		{
		int C,UI
			const string type = "Normal Checkup";
			cout<<"Vehicle Name";
			get_line(cin,vehicle name )
			cout<<"Enter The Amount of Regular Service";
			cin>>RS;
			cout<<"User Unique Id";
			cin>>"UI";	
		}
		void denting()
		{
			int C,UI
			const string type = "Denting and Painting";
			cout<<"Vehicle Name";
			get_line(cin,vehicle name )
			cout<<"Enter The Amount of Danting and Painting ";
			cin>>D;
			cout<<"User Unique Id";
			cin>>"UI";	
		}
		void washing()
		{
			int W;
		const string type = "Washing";
		cout<<"Enter the Amount of Washing";
		cin>>W;
			cout<<"User Unique Id";
			cin>>"UI";
	}
	void resplacement()
	{
		string name;
		cout<<"Part Resplacement";
		cin>>"name"; 
	}
};
main()
{
	service_type s1;
	derived d1;
	int ch;
	ch = s1.display();
//	cout << ch;
	switch(ch)
	{
	case 1 :
	d1.accindental();
	break;
	case 2 :
	d1.regular();
	case 3 :
	d1.denting();
	case 4 :
	d1.washing()
	break;
	case 5:
	d1.resplacement()
	break;
    default:
	cout<<"Invalid Choice";
	}
}
