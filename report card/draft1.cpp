#include <iostream>
#include <cmath>
using namespace std;

void subjectselect(){
	
}

int main() {
	double math, phy, chem, bio, eng1, eng2, hist, geo, lang3,elec;
	string name;
	int grade;
	char div;
	cout << "Hello! Please enter the details of the student along with their marks.";
	cout << "Name of the student: ";
	getline(cin, name);
	cout << "\nGrade: ";
	cin >> grade;
	cout << " \nDivision: ";
	cin >> div;
	cout<<"Enter marks in English 1, English 2, and Third Language respectively: \n";
	cin>>eng1; cout<<"\n";
	cin>>eng2; cout<<"\n";
	cin>>lang3; cout<<"\n";
	cout<<"Enter marks in Mathematics, Physics, Chemistry and Biology respectively.";
    cin>>math; cout<<"\n";
	cin>>phy; cout<<"\n";
	cin>>chem; cout<<"\n";
	cin>>bio; cout<<"\n";
	cout<<"Enter marks in History, Geography, and Elected subject respectively.";
	cin>>hist; cout<<"\n";
	cin>>geo; cout<<"\n";
	cin>>elec; cout<<"\n";
	return 0;
}