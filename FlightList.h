#include "Flight.h"
class Flight_List
{
public:
    vector<Flight> F;
    int fls;
    Flight_List() : fls(0) {}
    int naf;

    void CreateList(Flight_List &fll) // Input the information of the flights
    {
        do
        {
            cout << "Input the number of flights: ";
            cin >> fll.fls;
            if (fll.fls <= 0)
            {
                cout << "Invalid! \n";
            }

        } while (fll.fls <= 0);
        F.resize(fll.fls);
        for (int i = 0; i < F.size(); i++)
        {
            cout << "Input the information of the flight: " << i + 1 << endl;
            F[i].Creatfl(F[i]);
        }
    }
    void PrintList(Flight_List fll) // Print
    {
        for (int i = 0; i < F.size(); i++)
        {
            cout << i + 1 << setw(10);
            F[i].Print(F[i]);
            cout << endl;
        }
    }
    void Sort(Flight_List &fll) // Sort the flight list
    {
        for (int i = 0; i < F.size() - 1; i++)
        {
            int temp_index = i;
            for (int j = i + 1; j < F.size(); j++)
            {
                if (F[j].Time(F[j]) > F[temp_index].Time(F[temp_index]))
                {
                    temp_index = j;
                }
            }
            swap(F[i], F[temp_index]);
        }
    }

    void add(Flight_List &fll) // Add a new flight to the list
    {
        int n;
        cout << "Input the number of flights that you want to add: ";
        cin >> n;

        int currentSize = F.size();
        F.resize(currentSize + n);

        for (int i = currentSize; i < currentSize + n; i++)
        {
            cout << "Add the flight " << i << endl;
            F[i].Creatfl(F[i]);
            fll.naf++;
        }
    }
    void FaD(Flight_List &fll, string z) // Remove a flight
    {
        for (auto it = fll.F.begin(); it != fll.F.end();)
        {
            if (it->flnum == z)
            {
                fll.F.erase(it);
            }
            else
            {
                ++it;
            }
        }
    }
};