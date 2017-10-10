#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float tipPercent, price, tipPrice;

    cout << "Please enter a price of the meal: ";
    cin >> price;
    cout << "Please enter a tip percent (as a decimal): ";
    cin >> tipPercent;
    if(tipPercent > 1 || tipPercent < 0)
    {
        cout << "Invalid input. Try again.";
        main();
    }

    tipPrice = price * tipPercent;
    cout << setprecision(2) << fixed;
    cout << "Tip: $" << tipPrice;
    return 0;
}
