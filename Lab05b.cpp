#include <iostream>

using namespace std;

int main()
{
    int d1, d2, d3, t1, t2;
    float average;
    cout << "Enter Daily Grade 1: ";
    cin >> d1;
    cout << "Enter Daily Grade 2: ";
    cin >> d2;
    cout << "Enter Daily Grade 3: ";
    cin >> d3;
    cout << "Enter Test Grade 1: ";
    cin >> t1;
    cout << "Enter Test Grade 2: ";
    cin >> t2;
    average = .4 * ((d1 + d2 + d3) / 3) + .6 *((t1 + t2) / 2);
    cout << average;

    return 0;
}
