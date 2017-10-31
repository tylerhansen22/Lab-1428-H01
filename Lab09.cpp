#include <iostream>

using namespace std;

struct song
{
    string title;
    string fileName;
    string genre;
    int tracknumber;
    bool fav;
};

int main()
{
    song mp3[100];
    for(int x = 0; x < 100; x++)
    {
        mp3[x].fav = false;
    }
    int choice = 0;
    int index = 0;

    while(choice != 6)
    {
        choice = 0;
        cout << "What would you like to do?" << endl;
        cout << "(1) Enter a new song" << endl;
        cout << "(2) Delete an existing song" << endl;
        cout << "(3) Display all existing songs" << endl;
        cout << "(4) Edit a Song" << endl;
        cout << "(5) Print out favorites" << endl;
        cout << "(6) Exit" << endl;

        cin >> choice;

        switch(choice)
        {
        case 1:
            cout << "What index would you like to have the song as? ";
            cin >> index;
            cout << "Title: ";
            cin >> mp3[index].title;
            cout << "Filename: ";
            cin >> mp3[index].fileName;
            cout << "Genre: ";
            cin >> mp3[index].genre;
            cout << "Tracknumber: ";
            cin >> mp3[index].tracknumber;
            cout << "Favorite (True/False): ";
            cin >> mp3[index].fav;
            break;
        case 2:
            cout << "What index would you like to delete? ";
            cin >> index;
            mp3[index].title = "";
            mp3[index].fileName = "";
            mp3[index].genre = "";
            mp3[index].tracknumber = 0;
            mp3[index].fav = false;
            break;
        case 3:
            for(int x = 0; x < 100; x++)
            {
                if(mp3[x].title != "")
                {
                    cout << "Title: " << mp3[x].title << endl;
                    cout << "Filename: " << mp3[x].fileName << endl;
                    cout << "Genre: " << mp3[x].genre << endl;
                    cout << "Tracknumber: " << mp3[x].tracknumber << endl;
                    cout << "Favorite (True/False): " << mp3[x].fav << endl;
                }
            }
            break;
        case 4:
            cout << "What index would you like to edit? ";
            cin >> index;
            cout << "Title: ";
            cin >> mp3[index].title;
            cout << "Filename: ";
            cin >> mp3[index].fileName;
            cout << "Genre: ";
            cin >> mp3[index].genre;
            cout << "Tracknumber: ";
            cin >> mp3[index].tracknumber;
            cout << "Favorite (True/False): ";
            cin >> mp3[index].fav;
            break;
        case 5:
            for(int x = 0; x < 100; x++)
            {
                if(mp3[x].fav == true)
                {
                    cout << "Title: " << mp3[x].title << endl;
                    cout << "Filename: " << mp3[x].fileName << endl;
                    cout << "Genre: " << mp3[x].genre << endl;
                    cout << "Tracknumber: " << mp3[x].tracknumber << endl;
                    cout << "Favorite (True/False): " << mp3[x].fav << endl;
                }
            }
            break;
        case 6:
            cout << "Exiting" << endl;
            return 0;
            break;
        default:
            cout << "Invalid input. Returning to menu." << endl;
            break;
        }
    }
    return 0;
}
