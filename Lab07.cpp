#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{
    int lines;
    ifstream fin("input.txt");
    if(!fin)
    {
        cout << "Unable to find file. Exiting";
        return -1;
    }
    fin >> lines;
    int ram[256];
    const int OP_ADD = 0, OP_SUB = 1, OP_MUL = 2, OP_DIV = 3, OP_EXP = 4, OP_READ = 5, OP_WRITE = 6, OP_STORE = 7;
    for(int x = 0; x < lines; x++)
    {
        int input[4];
        fin >> input[0];
        fin >> input[1];
        fin >> input[2];
        fin >> input[3];
        switch(input[0])
        {
        case OP_ADD :
            ram[input[1]] = input[2] + input[3];
            cout << ram[input[1]] << endl;
            break;
        case OP_SUB :
            ram[input[1]] = input[2] - input[3];
            cout << ram[input[1]] << endl;
            break;
        case OP_MUL :
            ram[input[1]] = input[2] * input[3];
            cout << ram[input[1]] << endl;
            break;
        case OP_DIV :
            ram[input[1]] = input[2] / input[3];
            cout << ram[input[1]] << endl;
            break;
        case OP_EXP :
            ram[input[1]] = pow(input[2], input[3]);
            cout << ram[input[1]] << endl;
            break;
        case OP_WRITE :
            cout << ram[input[1]] << endl;
            break;
        case OP_STORE :
            ram[input[1]] = input[2];
            break;
        default :
            cout << "Unable to perform operation" << endl;
            return -1;
        }
    }
    return 0;
}
