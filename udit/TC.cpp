#include <iostream>
using namespace std;
int main() {
     float f , c;
    char option ;

    cout << "Choose the option for desired conversion: \n\n" ;

    cout << "1. Celsius to Fahrenheit.\n" ;
    cout << "2. Fahrenheit to Celsius.\n" ;  

     cin >> option ;

if  (option == '1')   
{
    cout << "Enter Temperatue In degree Celsius\n";
    cin >> c;
    
    f = (1.8 * c) + 32.0;
    cout << "The Temperature in Fahrenheit is : " << f << " F\n" ;
}

else if (option == '2'){
    cout << "Enter The Temperatuere In Degree Fahrenheit\n" ;
    cin >> f ;

    c = (f - 32) / 1.8 ;
    cout << "The Temperature In Degree Celsius : " << c << "C\n";

}

else
    cout << "Pls Enter Either 1 or 2! \n ";
return 0;
}
   