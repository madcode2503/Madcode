#include "FlightList.h"
int main()
{
    Flight_List f;
    string x;
    string h;
    string fnum;
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
        cout << "Do you wanna add another flight?(Y/N) \n";
        getline(cin, x);
        if (x == "y")
        {
            f.add(f);
        }
        else if (x == "n")
        {
            f.Sort(f);
            cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Departures<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n";
            cout << endl;
            cout << "No" << setw(9) << "Time" << setw(14) << "Flight " << setw(16) << "Destination" << setw(23) << "Air manufacturer " << setw(25) << "Destination country";
            cout << endl;
            f.PrintList(f);
        }

    } while (x == "y");
    do
    {
        cout << "Do u wanna delete any flights?(Y?N)";
        getline(cin, h);
        if (h == "y")
        {
            cout << "Input the Flight number: ";
            getline(cin, fnum);
            f.FaD(f, fnum);
        }
        if (h == "n")
        {
            f.Sort(f);
            cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Departures<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n";
            cout << endl;
            cout << "No" << setw(9) << "Time" << setw(14) << "Flight " << setw(16) << "Destination" << setw(23) << "Air manufacturer " << setw(25) << "Destination country";
            cout << endl;
            f.PrintList(f);
        }
    } while (h == "y");
    system("pause");
    return 0;
}