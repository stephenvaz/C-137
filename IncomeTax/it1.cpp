#include <iostream>
using namespace std;

int main(){
    float x;
    string name;
    cout << "Client Name:"; cin >> name;
    cout <<  "Hi!" << name << ", \nPlease enter you Annual Income:Rs."; cin >> x;
    while (x<250000)
    {
        cout << "No Tax will be levied" << "\nFinal Income (After Deduction) is Rs." << x;
        break;
    }
    while (x>=250001 && x<500000 )
    {
        x=x-x*0.05;
        cout << "Tax Levied=5%" << "\nFinal Income (After Deduction) is Rs." << x;
        break;
    }

    
     
     
}
