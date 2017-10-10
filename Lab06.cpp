#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void printArray(char arr[10][10]);

int main()
{
	//NUMBER OF ROWS AND COLUMNS
	const int ROWS = 10;
	const int COLS = 10;
	char life[ROWS][COLS];
	char copyArr[ROWS][COLS];
	int generations;

	//RANDOM NUMBER GENERATOR TO CREATE INITIAL GENERATION
	srand (time(NULL));
	int cell;

	for(int r=0; r<ROWS; r++)
	{
		for(int c =0; c<COLS;c++)
		{
			cell = rand() % 7;
			if(cell >= 5)
			{
				life[r][c] = '*';
			}
			else
			{
				life[r][c]=' ';
			}
		}
	}

	cout << "How many generations would you like to run the game of life?" << endl;
	cin >> generations;

	for(int g = 1; g <= generations; g++)
    {
        cout << "Generation " << g << endl;
        printArray(life);

        int cellCount = 0;
        for(int r = 0; r < ROWS; r++)
        {
            for(int c = 0; c < COLS; c++)
            {
                cellCount = 0;
                if(r-1 >=0 && c-1 >= 0 && life[r-1][c-1] == '*')
                    cellCount++;
                if(r-1 >= 0 && life[r-1][c] == '*')
                    cellCount++;
                if(c-1 >= 0 && life[r][c-1] == '*')
                    cellCount++;
                if(c-1 >= 0 && r+1 < ROWS && life[r+1][c-1] == '*')
                    cellCount++;
                if(c+1 < COLS && r-1 >= 0 && life[r-1][c+1] == '*')
                    cellCount++;
                if(r+1 < ROWS && life[r+1][c] == '*')
                    cellCount++;
                if(c+1 < COLS && life[r][c+1] == '*')
                    cellCount++;
                if(r+1 < ROWS && c+1 < COLS && life[r+1][c+1] == '*')
                    cellCount++;

                if(cellCount < 2)
                    copyArr[r][c] = ' ';
                else if(cellCount == 2)
                    copyArr[r][c] = life[r][c];
                else if(cellCount == 3)
                    copyArr[r][c] = '*';
                else
                    copyArr[r][c] = ' ';

            }

        }
        for(int r = 0; r < 10; r++)
                {
                    for(int c = 0; c < 10; c++)
                    {
                        life[r][c] = copyArr[r][c];
                    }
                }

    }


	return 0;

}

void printArray(char arr[10][10])
{
    for(int r = 0; r < 10; r++){
        for(int c = 0; c < 10; c++)
            cout << arr[r][c];
        cout << endl;
    }
}
