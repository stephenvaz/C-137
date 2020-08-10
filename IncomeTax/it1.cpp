#include <iostream>
using namespace std;

int main(){
    float x;
    string name;
    int age;
    cout << "Client Name:"; cin >> name;
    cout << "Client Age:"; cin >> age;
    cout <<  "Hi!" << name << ", \nPlease enter you Annual Income:Rs."; cin >> x;
    while ((age<=60))
    {
    {
        while (x<250000)
    {
        cout << "No Tax will be levied" << "\nFinal Income (After Deduction) is Rs." << x;
        break;
    }
    while (x>=250001 && x<=500000 )
    {
        x=x-x*0.05;
        cout << "Tax Levied=5%" << "\nFinal Income (After Deduction) is Rs." << x;
        break;
    }
    while (x>=500001 && x<=750000)
    {
        x=x-12500-(0.1*x);
        cout << "Tax Levied=10% + 12500" <<"\nFinal Income (After Deduction) is Rs." << x;
        break;
    }
    }
    }
    while (age>60 && x<=80)
    {
         while (x<300000)
        {
            cout << "No Tax wil be levied";
        }
    }
    
    
}
    
   