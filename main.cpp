#include "FlightList.h"
int main()
{
    Flight_List f;
    string x;
    string h;
    string fnum;
    int choices;
    int n;
    f.CreateList(f);
    system("cls");
    f.Sort(f);
    cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Departures<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n";
    cout << endl;
    cout << "No" << setw(9) << "Time" << setw(14) << "Flight " << setw(16) << "Destination" << setw(23) << "Air manufacturer " << setw(25) << "Destination country";
    cout << endl;
    f.PrintList(f);
    do
    {
        cout << "Choose 1 of 3 choices below\n";
        cout << "1.Add new flights to the list\n"
             << "2.Remove a flight with the flight number you input: \n"
             << "3.Exit! \n"
             << "Your choice: ";
        cin >> choices;

        system("cls");
        switch (choices)
        {
        case 1:
            do
            {
                cout << "Do you wanna add another flight?(Y/N) \n";
                cin >> x;
                if (x == "y")
                {
                    f.add(f);
                }
                else if (x == "n" || x == "N")
                {
                    f.Sort(f);
                    cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Departures<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n";
                    cout << endl;
                    cout << "No" << setw(9) << "Time" << setw(14) << "Flight " << setw(16) << "Destination" << setw(23) << "Air manufacturer " << setw(25) << "Destination country";
                    cout << endl;
                    f.PrintList(f);
                }

            } while (x == "y" || x == "Y");
            break;
        case 2:
            do
            {
                cout << "Do u wanna delete any flights?(Y?N)";
                cin >> h;
                if (h == "y")
                {
                    cout << "Input the Flight number in the list: ";
                    cin.ignore();
                    getline(cin, fnum);
                    f.FaD(f, fnum);
                }
                if (h == "n" || h == "N")
                {
                    f.Sort(f);
                    cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Departures<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n";
                    cout << endl;
                    cout << "No" << setw(9) << "Time" << setw(14) << "Flight " << setw(16) << "Destination" << setw(23) << "Air manufacturer " << setw(25) << "Destination country";
                    cout << endl;
                    f.PrintList(f);
                }
            } while (h == "y" || h == "Y");
            break;
        case 3:
            cout << "Thank you !!!\n";
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choices == 1 || choices == 2);

    system("pause");
    return 0;
}
