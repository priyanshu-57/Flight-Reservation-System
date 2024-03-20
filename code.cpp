#include <iostream>
#include <cstdlib>

using namespace std;

// Admin menu section
void adminmenu()
{
    int x;

    while (true) // this loop runs indefinitely the user chooses to  exit
    {
        system("clear"); // Clears the console
        cout << endl
             << "\t \t \t **ADMIN MENU*** " << endl;
        cout << "1) All Flight details" << endl;
        cout << "2) Update Flight" << endl;
        cout << "3) Delete Flight" << endl;
        cout << "4) Book the Flight " << endl;
        cout << "5) Passenger Reservation Details" << endl;
        cout << "6) Exit" << endl;

        cout << endl
             << "Choose one of them (1-6): ";
        cin >> x;

        switch (x)
        {
        case 1:
            cout << "Flight details are below" << endl;
            break;
        case 2:
            cout << "Update here" << endl;
            break;
        case 3:
            cout << "Delete here" << endl;
            break;
        case 4:
            cout << "Book here" << endl;
            break;
        case 5:
            cout << "Passenger Reservation Details here" << endl;
            break;
        case 6:
            cout << "Exiting..." << endl;
            return; // This line exits the function adminmenu()
        default:
            cout << "Wrong input. Please choose from (1-6)" << endl;
            break;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
        cout << endl
             << endl
             << endl
             << "Press Enter to continue...";
        cin.get();
    }
}

int main()
{
    adminmenu();
    return 0;
}
