#include <iostream>
using namespace std;

int main(){
    int category;
    float n,b;
    cout << "\nEnter the amount(without tax):" ;
    cin >> n;
    cout << "Enter type of product from the list below(nuumber):" << "\n1.Essentials(Milk,Eggs,Ceral)" << "\n2.Slab 2 (Sugar,Spices,Tea)"<<"\n3.Slab 3 (Computers, Processed Food)" <<"\n4.Slab 4 (Mobiles, School Bags)" <<"\n5.Slab 5 (AC's, Luxury Item)"<<"\n" ;
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