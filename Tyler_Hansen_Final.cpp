#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void menu(int &compDie1, int &userDie1, float &myMoney, float &betAmount);
void runAgain(int &compDie1, int &userDie1, float &myMoney, float &bet);
void betFunc(float &myMoney, float &bet);
void getRolls(int &compDie1, int &userDie1);
void results(int &compDie1, int &userDie1, float &myMoney, float &bet);


int main()
{
    srand(time(NULL));
    float myMoney = 1000, bet = 0;
    int compDie1 = 0, userDie1 = 0;
    cout << "Gambling is an addiction...\n" << endl;
    menu(compDie1, userDie1, myMoney, bet);
    return 0;
}
void menu(int &compDie1, int &userDie1, float &myMoney, float &bet)
{
    betFunc(myMoney, bet);
    getRolls(compDie1, userDie1);
    results(compDie1, userDie1, myMoney, bet);
    runAgain(compDie1, userDie1, myMoney, bet);

}
void runAgain(int &compDie1, int &userDie1, float &myMoney, float &bet)
{
    if(myMoney == 0)
    {
        cout << "You ran out of money" << endl;
        cout << "You ended with $0" << endl;
        exit(0);
    }
    char input;
    cout << "Would you like to continue? ('y' or 'n')" << endl;
    cin >> input;
    switch(input)
    {
    case 'Y' :
    case 'y' :
        menu(compDie1, userDie1, myMoney, bet);
        break;
    case 'N' :
    case 'n' :
        cout << "You ended with $" << myMoney << endl;
        cout << "Exiting" << endl;
        exit(0);
    default :
        cout << "Invalid input. Please try again." << endl;
        runAgain(compDie1, userDie1, myMoney, bet);
    }
}
void betFunc(float &myMoney, float &bet)
{
    cout << "You currently have $" << myMoney << endl;
    cout << "How much do you bet?" << endl;
    cout << "$";
    cin >> bet;
    if(bet > myMoney)
    {
        cout << "Can not bet more than money amount. Try again." << endl;
        betFunc(myMoney, bet);
    }

}
void getRolls(int &compDie1, int &userDie1)
{
    compDie1 = rand() % 6 + 1;
    userDie1 = rand() % 6 + 1;
    cout << "You rolled a " << userDie1 << endl;
    cout << "Your opponent rolled a " << compDie1 << endl;
}
void results(int &compDie1, int &userDie1, float &myMoney, float &bet)
{
    if(compDie1 > userDie1)
    {
        cout << "You lost $" << bet << endl;
        myMoney -= bet;
    } else if(compDie1 < userDie1)
    {
        cout << "You gained $" << bet << endl;
        myMoney += bet;
    }else
    {
        cout << "You tied" << endl;
    }
}


