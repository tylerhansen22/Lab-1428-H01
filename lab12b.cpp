#include <iostream>

using namespace std;

int fibonacci(int val);

int main()
{
    int n = 0;
    cout << "Enter a number: ";
    cin >> n;
    cout << fibonacci(n);
    return 0;
}

int fibonacci(int val)
{
    if (val == 0)
        return 0;
    if (val == 1)
        return 1;

    return fibonacci(val-1) + fibonacci(val-2);
}
