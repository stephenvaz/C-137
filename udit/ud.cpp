#include <iostream>
#include <iomanip>
using namespace std;
int main(){
     const double Government_Rate = 0.15 ,STATE_RATE = 0.05,OVERTIME_RATE = 1.50;
      int hours;
      double rate, state , government, netPay, gross;
      

      cout <<"Welcome to pay calculator";

       
      do
      {
            cout << "\nPlease enter a value between 10 and 20 for Hourly rate: ";
            cin >> rate;

      }while (rate < 10 || rate>20);


      hours = 0;
      while (hours < 1 || hours > 60)
      {
            cout << "Please Enter value between 1 and 60 hours worked : ";
             cin >>  hours;

      }
      if (hours > 40)
      gross = (40 * rate ) + (hours- 40) * rate * OVERTIME_RATE;

      else 
      gross = hours * rate;

      government = gross * Government_Rate;
      state = gross * STATE_RATE;
      netPay = gross - (state + government); 

      cout << "\n"
           << "Hourly Rate: \t" << rate << endl
           << "Hours Worked: \t" << hours << endl 
           << "Gross Pay: \t" << gross << endl
           << "Government tax: " << government << " at 15%" << endl
           << "State tax:  \t" << state << " at 5%" << endl
           << "NetPay: \t" << netPay << endl;




}