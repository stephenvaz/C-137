#include <iostream>
using namespace std;

int is_valid_bracket_seq(int n)
{
    string arr;
    cin >> arr;
    int i;
    for (i = 0; i < n / 2; i++)
    {
        if (arr[i] == arr[n - i - 1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    cout << is_valid_bracket_seq(n);
    return 1;
}