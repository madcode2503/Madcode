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

               cout << "Input the expected time: ";
               cin >> fltime;

               if (fl.fltime <= 0)
               {
                    cout << "Invalid!\n";
               }
          } while (fl.fltime <= 0);
          cout << "Input the flight number: ";
          cin.ignore();
          getline(cin, fl.flnum);
          cout << "Input the destination: ";
          getline(cin, fl.des);
          cout << "Input air manufacturer: ";
          getline(cin, fl.airman);
          cout << "Input the destination country: ";
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