User
#include <iostream>
#include <cstdlib>

using namespace std;



    // Admin menu section

    void
    adminmenu()
{
    int x;

menu:
     system("clear");  // Clears the console
    cout << endl
         << "\t \t \t **ADMIN MENU*** " << endl;
    cout << "1) ALl Flight details" << endl;
    cout << "2) Update Flight" << endl;
    cout << "3) Delete Flight" << endl;
    cout << "4) Book the Flight " << endl;
    cout << "5) Passenger Reservaton Details" << endl;
    cout << "6) exit" << endl;

    cout << endl
         << endl
         << endl
         << "Choose one of them(1-6)::\t";
    cin >> x;

    switch (x)
    {
    case 1:
        cout << "Flight details are below";
        break;
    case 2:
        cout << "Update here";
        break;

    case 3:
        cout << "Delete here";
        break;

    case 4:
        cout << "Book here";
        break;

    case 5:
        cout << "Passenger Reservaton Details here:";
        break;
    case 6:
        goto menu;

    default:
        cout << endl<< endl<<"Wrong input..Please choose from (1-6) option";
        goto menu;
    }
};

int main()

{
//setconsoletiSetConsoleTitle("Flight-Reservation-System");

    adminmenu();
    return 0;
}