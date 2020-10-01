#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,grade;
    double maxm,eng1,eng2,math,phy,chem,bio,lang3,hist,geo,elecm;
    char div;
    string g;
    string name,elec;
    cout<<"Hi, this program will follow ten subjects namely, English 1, English 2, Mathematics, Physics, Chemistry, Biology, Second Language, History, Geogrpahy and Elective Subject.\n";
    cout<<"Enter the full name of the student.\n";
    getline(cin,name);
    cout<<"For Roman Grade System press 1, for numerical grade system press 2. \nFor example, for class 9, Roman Grade is IX and numerical grade is 9.\n";
    cin>>a;
    
    switch (a)
    {
    case 1:
        {
            cout<<"Enter the grade of the student: ";
            cin>>g;
            cout<<"\n";
        }
        break;
    case 2:
        {
            cout<<"Enter the grade of the student: ";
            cin>>grade;
            cout<<"\n";
        }
    default:
    {
        cout<<"Wrong input! Please enter 1 or 2.";
        cout<<"\n";
    }
        break;
    }


    cout<<"Enter the division/section of the student: ";
    cin>>div;
    
    cout<<"\nEnter the Elective Subject for the student: ";
    getline(cin, elec);

    cout<<"\nMaximum number of marks for each subject: ";
    cin>>maxm;

    cout<<"Enter the marks of "<<name<<" scored in English 1, English 2 and Third Language respectively: \n";
    cin>>eng1; cout<<"\n";
    cin>>eng2; cout<<"\n";
    cin>>lang3; cout<<"\n";
    cout<<"Enter the marks scored in Mathematics, Physics, CHemistry and Biology respectively.";
    cin>>math; cout<<"\n";
    cin>>phy; cout<<"\n";
    cin>>chem; cout<<"\n";
    cin>>bio; cout<<"\n";
    cout<<"Enter marks scored in History, Geography and "<<elec<<" respectively.";
    cin>>hist;cout<<"\n";
    cin>>geo;cout<<"\n";
    cin>>elecm;cout<<"\n";

    

}
