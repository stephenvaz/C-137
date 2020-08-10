#include <iostream>
using namespace std;

int main(){
    float x, y;
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
        y=x-x*0.05;
        cout << "Tax Levied=5%" << "\nFinal Income (After Deduction) is Rs." << y;
        break;
    }
    while (x>=500001 && x<=750000)
    {
        y=x-12500-(0.1*x);
        cout << "Tax Levied=10% + 12500" <<"\nFinal Income (After Deduction) is Rs." << y;
        break;
    }
   break;
    }
    }
    while (age>60 && age<=80)
    {
         while (x<300000)
        {
            cout << "\nNo Tax will be levied";
            break;

        }
        while (x>=300000 && x<500000)
        {cout << "\nTax levied = 5% ";
        y=x - x*0.05;
        cout << "Final income (after deduction) is Rs. " << y;
        break;

        }
        break;
    }
    return 0; 
}
    
   