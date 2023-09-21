#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;
#ifndef F_H
#define F_H
class Flight
{
public:
     double fltime;
     string flnum;
     string des;
     string airman;
     string couname;

     Flight() : fltime(0.0), flnum(""), des(""), airman(""), couname("") {}

     void Creatfl(Flight &fl)
     {
          do
          {

               cout << "Nhap thoi gian : ";
               cin >> fltime;

               if (fl.fltime <= 0)
               {
                    cout << "Invalid!\n";
               }
          } while (fl.fltime <= 0);
          cout << "Nhap so hieu chuyen bay: ";
          cin.ignore();
          getline(cin, fl.flnum);
          cout << "Nhap ten san bay: ";
          getline(cin, fl.des);
          cout << "Nhap hang hang khong: ";
          getline(cin, fl.airman);
          cout << "Nhap ten quoc gia den: ";
          getline(cin, fl.couname);
     }
     void Print(Flight fl)
     {
          cout << setw(10) << fl.fltime << setw(13) << fl.flnum << setw(16) << fl.des << setw(20) << fl.airman << setw(23) << fl.couname << " " << endl;
     }
     float Time(Flight fl)
     {
          return fl.fltime;
     }
};

#endif
