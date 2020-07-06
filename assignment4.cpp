/*C++ program to create & display CV using concept of inheritance.
HARSHAL BHIMRAO BODHARE 
S.E.-A         ROLL NO:09*/
#include<iostream>
using namespace std;
class personal		//parent class 1
{
	protected:
		char name[20];
		char address[50];
		char gender[10];
		int dd,mm,yy;
	public:
		void get_personal_inf()
		{
			cout<<"\tEnter name:";
			cin>>name;
			cout<<"\tEnter Gender:";
			cin>>gender;
			cout<<"\tEnter DOB:";
			cin>>dd;
			cin>>mm;
			cin>>yy;
			cout<<"\tEnter address:";
			cin>>address;
		}
};
class profession	//parent class 1
{
	protected:
		char comp_name[20];
		char project[20];
		float experience;
	public:
		void get_professional_inf()
		{
			cout<<"\tEnter company name:";
			cin>>comp_name;
			cout<<"\tEnter project:";
			cin>>project;
			cout<<"\tEnter experience:";
			cin>>experience;
		}
};
class academic		//parent class 1
{
	protected:
		int passing_year;
		float perentage;
		char degree[10];
		char obtained_class[10];
	public:
		void get_academic_inf()
		{
			cout<<"\tEnter passing_year:";
			cin>>passing_year;
			cout<<"\tEnter perentage:";
			cin>>perentage;
			cout<<"\tEnter degree:";
			cin>>degree;
			cout<<"\tEnter obtained_class:";
			cin>>obtained_class;
		}
};
class display_biodata:public personal,public profession,public academic // derive class
{
	public:
	 void show_data()
	 {
	 	cout<<"\n\t*************PERSONAL INFORMATION*************"<<endl<<endl;
	 	cout<<"\t\t\tsName:"<<name<<endl;
	 	cout<<"\t\t\tGender:"<<gender<<endl;
	 	cout<<"\t\t\tDOB:"<<dd<<"/"<<mm<<"/"<<yy<<endl;
	 	cout<<"\t\t\tAddress:"<<address<<endl<<endl;
	 	cout<<"\t*************PROFESSIONAL INFORMATION*************"<<endl<<endl;
	 	cout<<"\t\t\tCompany Name:"<<comp_name<<endl;
		cout<<"\t\t\tProject:"<<project<<endl;
		cout<<"\t\t\tExperience:"<<experience<<endl<<endl;
		cout<<"\t*************ACADEMIC INFORMATION*************"<<endl<<endl;
		cout<<"\t\t\tPassing_year:"<<passing_year<<endl;
		cout<<"\t\t\tPerentage:"<<perentage<<endl;
		cout<<"\t\t\tObtained_class:"<<obtained_class<<endl;
		cout<<"\t\t\tDegree:"<<degree<<endl;
	 }
};
int main()
{
	display_biodata ab;
	ab.get_personal_inf();
	ab.get_professional_inf();
	ab.get_academic_inf();
	ab.show_data();		
}

//OUTPUT
/*

Enter name:harshal
	Enter Gender:m
	Enter DOB:12-04-2001
	Enter address:panchawati
	Enter company name:google
	Enter project:AI
	Enter experience:2
	Enter passing_year:2015
	Enter perentage:78.3
	Enter degree:Computer
	Enter obtained_class:A

	*************PERSONAL INFORMATION*************

			sName:harshal
			Gender:m
			DOB:12/-4/-2001
			Address:panchawati

	*************PROFESSIONAL INFORMATION*************

			Company Name:google
			Project:AI
			Experience:2

	*************ACADEMIC INFORMATION*************

			Passing_year:2015
			Perentage:78.3
			Obtained_class:A
			Degree:Computer
*/
