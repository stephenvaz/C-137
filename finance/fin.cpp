#include<iostream> 
#include <unistd.h> 
using namespace std;

int main(){
   int a;
   int x;
   string name, surname,company_name;
   cout <<  "Hi!" <<  "\nHow can I assist you "<< "?" << "\nI can calculate your Income and also help you in GST(Goods and Service Tax) \nPlease enter the service you want to avail: \n1.Income Tax \n2.GST (Goods and Service Tax) \n";
   cin >> a;
   switch (a)
   {
   case 1:
   int b;
   cout << "1.Individual \n2.Domestic Comapnies \n"; cin >> b ;
       switch (b)
       {
       case 1:
    int age;
    cout << "Client Name: ";cin >> name>>surname;
    cout << "Client Age: "; cin >> age;
    cout << name <<" " << surname << ", please enter your Annual Income:Rs."; cin >> x; cout << "Calculating" ; sleep(2); cout << " ."; sleep(1) ; cout << "."; sleep(2); cout << "."; sleep(1); 
    while ((age<=60))
    {
    {
        while (x<=250000)
    {
        cout << "No Tax will be levied" << "\nFinal Income (After Deduction) is Rs." << x;
        break;
    }
    while (x>=250001 && x<=500000 )
    {
        x=x-(x*0.05);
        cout << "Tax Levied= 5%" << "\nFinal Income (After Deduction) is Rs." << x; 
        break;
    }
    while (x>=500001 && x<=750000)
    {
        x=x-12500-(0.1*x);
        cout << "Tax Levied= 10% + 12500" <<"\nFinal Income (After Deduction) is Rs." << x;
        break;
    }
    while (x>=750001 && x<=1000000)
    {
        x=x-37500-(x*0.15);
        cout << "Tax Levied= 15% + 37500" << "\nFinal Income (After Deduction) is Rs." << x; 
        break;
    }
    while (x>=1000001 && x<=1250000)
    {
        x=x-75000-(x*0.2);
        cout << "Tax Levied= 20% + 75000" << "\nFinal Income (After Deduction) is Rs." << x; 
        break;
    }
    while (x>=1250001 && x<=1500000)
    {
        x=x-125000-(x*0.25);
        cout << "Tax Levied= 25% + 125000" << "\nFinal Income (After Deduction) is Rs." << x; 
        break;
    }
    while (x>=1500001)
    {
        x=x-187500-(x*0.30);
        cout << "Tax Levied= 30% + 187500" << "\nFinal Income (After Deduction) is Rs." << x; 
        break;
    }
    cout << "\nWant to save some tax? \nPlease stay tuned for further releases";
    
    
   break;
    } break;

    }
    while (age>60 && age<=80)
    {
         while (x<300000)
        {
            cout << "\nNo Tax will be levied";
            break;

        }
        while (x>=300000 && x<500000)
        {cout << "\nTax levied = 5% + 4% Cess";
        x=x - (x*0.05)*0.04;
        cout << "Final income (after deduction) is Rs. " << x;
        break;

        }
        while (x<= 500000 && x< 1000000)
        {
            cout << "\nTax levied = 20%";
            x = x - (x*0.2)*0.04;
            cout << "\nFinal income (after deduction) is Rs. " << x;
            break;
            
        }
        while (x>= 1000000)
        {
            cout << "\nTax levied= 30%";
            x = x- (x*0.3)*0.04;
            cout << "\nFinal income (after deduction) is Rs. " << x;
            break;
        }

        break;
    }
    while (age>80)
    {
        while (x<=500000)
        {
            cout << "No Tax will be levied" << "\nFinal Income (After Deduction) is Rs." << x;
            break;
        }
        while (x<=500001 && x>=1000000)
        {
            cout << "Tax Levied = 20%";
            x=x-(x*0.2);
            cout << "Final Income (After Deduction)" <<x;
            break;
        }
        while (x>=1000001)
        {
            cout <<"Tax Levied = 30%";
            x=x-(x*0.3);
            cout <<"Final Income (After deduction) is Rs." <<x;
            break;
        }
        break;  
    }
           break;
       
       case 2:
    cout << "Company Name: "; cin >> company_name;
    cout << "Please enter you annual turn over:" << " Rs."; cin >> x;
    if (x<=2500000000)
    {
        cout <<"Tax Levied = 25%";
        x=x-(x*0.25);
        cout<<"\nGross turnover (After Taxation) is Rs." <<x;
    }
    else
    {
        cout <<"Tax Levied = 30%";
        x=x-(x*0.3);
        cout<<"Gross turnover (After Deduction) is Rs." <<x;
    }
    break;
    
           break;
       }
       break;
   
   case 2:
   int category;
    float n,c;
    cout << "Client Name: " ;cin >> name >> surname;
    cout << name << " " << surname << ", please enter the Amount (without tax):" ;
    cin >> n;
    cout << "Enter type of product from the list below(number):" << "\n1.Essentials(Milk,Eggs,Ceral)" << "\n2.Slab 2 (Sugar,Spices,Tea)"<<"\n3.Slab 3 (Computers, Processed Food)" <<"\n4.Slab 4 (Mobiles, School Bags)" <<"\n5.Slab 5 (AC's, Luxury Item)"<<"\n" ;
    cin >> category;
switch (category)
{
case 1:
    c=n;
    cout << "Amount to be charged:" <<"Rs." << c <<"\nGST Charged: Rs.0" ;
    break;

case 2:
    c=(n*0.05) + n;
    cout << "Amount to be charged:" <<" Rs." << c <<"\nGST Charged: Rs." << n*0.05 ;
    break;
case 3:
    c=(n*0.12) + n;
    cout << "Amount to be charged:" <<" Rs." << c <<"\nGST Charged: Rs." << n*0.12;
    break;
case 4:
    c=(n*0.18) + n;
    cout << "Amount to be charged:" <<" Rs." << c <<"\nGST Charged: Rs." << n*0.18;
case 5:
    c= (n*0.28) + n;  
    cout << "Amount to be charged:" <<" Rs." << c <<"\nGST Charged: Rs." << n*0.28 ;
    break;  
}  
       break;
   }
    cout << "\n\nCredits:- \nAtharv Salian~Income Tax(Individual) \nStephen Vaz~Income Tax(Domestic) & GST " <<endl ; system("pause");
}
    