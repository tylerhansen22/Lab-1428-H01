#include <iostream>

using namespace std;

int factorial(int val);

int main()
{
    int n = 0;
    cout << "Enter a number: ";
    cin >> n;
    cout << factorial(n);

    return 0;
}

int factorial(int val)
{
if (val == 1)
    return val;
return val * factorial(val-1);
}
