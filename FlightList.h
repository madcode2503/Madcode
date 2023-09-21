#include "Flight.h"
class Flight_List
{
public:
    vector<Flight> F;
    int fls;
    Flight_List() : fls(0) {}
    int naf;

    void CreateList(Flight_List &fll) 
    {
        do
        {
            cout << "Nhap so hieu chuyen bay: ";
            cin >> fll.fls;
            if (fll.fls <= 0)
            {
                cout << "Invalid! \n";
            }

        } while (fll.fls <= 0);
        F.resize(fll.fls);
        for (int i = 0; i < F.size(); i++)
        {
            cout << "Nhap thong tin chuyen bay: " << i + 1 << endl;
            F[i].Creatfl(F[i]);
        }
    }
    void PrintList(Flight_List fll)
    {
        for (int i = 0; i < F.size(); i++)
        {
            cout << i + 1 << setw(10);
            F[i].Print(F[i]);
            cout << endl;
        }
    }
    void Sort(Flight_List &fll) 
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
        cout << "Nhap so chuyen bay hom nay: ";
        cin >> n;

        int currentSize = F.size();
        F.resize(currentSize + n);

        for (int i = currentSize; i < currentSize + n; i++)
        {
            cout << "Them chuyen bay " << i << endl;
            F[i].Creatfl(F[i]);
            fll.naf++;
        }
    }
    void FaD(Flight_List &fll, string z)
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
