#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
int main()
{
string str, word;
vector<string> myVector;
getline(cin, str);
stringstream iss(str);
while(iss >> word)
     myVector.push_back(word);
     return 0;
}