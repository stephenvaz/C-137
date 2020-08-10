#include<iostream>
using namespace std;

int main() {
    int a;
    string name, surname;
    cout << "Please enter your Full Name:"; cin >> name >> surname;
    cout <<  "Hi!" << " " << name <<" " << surname << "\nHow can I assist you "<< name << " " << surname << "?" << "\nI can calculate your Income and also help you in GST(Goods and Service Tax) \nPlease enter the service you want to avail: \n1.Income Tax \n2.GST (Goods and Service Tax) \n";
    cin >> a;
    switch (a)
    {
    case 1:
        int main();{
    float x, y;
    int age;
    cout << "Client Age:"; cin >> age;
    cout << name <<" " << surname << ", please enter your Annual Income:Rs."; cin >> x;
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
        break;
    
    case 2:
    int main();{
    int category;
    float n,b;
    cout << name << " " << surname << ", please enter the Amount (without tax):" ;
    cin >> n;
    cout << "Enter type of product from the list below(number):" << "\n1.Essentials(Milk,Eggs,Ceral)" << "\n2.Slab 2 (Sugar,Spices,Tea)"<<"\n3.Slab 3 (Computers, Processed Food)" <<"\n4.Slab 4 (Mobiles, School Bags)" <<"\n5.Slab 5 (AC's, Luxury Item)"<<"\n" ;
    cin >> category;
switch (category)
{
case 1:
    b=n;
    cout << "Amount to be charged:" <<"Rs." << b <<"\nGST Charged: Rs.0" ;
    break;

case 2:
    b= (n*0.05) + n;
    cout << "Amount to be charged:" <<" Rs." << b <<"\nGST Charged: Rs." << n*0.05 ;
    break;
case 3:
    b= (n*0.12) + n;
    cout << "Amount to be charged:" <<" Rs." << b <<"\nGST Charged: Rs." << n*0.12;
    break;
case 4:
    b= (n*0.18) + n;
    cout << "Amount to be charged:" <<" Rs." << b <<"\nGST Charged: Rs." << n*0.18;
case 5:
    b= (n*0.28) + n;  
    cout << "Amount to be charged:" <<" Rs." << b <<"\nGST Charged: Rs." << n*0.28 ;
    break;  
}
return 0;

}
        break;
    }
}