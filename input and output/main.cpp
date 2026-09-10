// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
#include<string>

using namespace std; 

int main()
{
    int angstromsPerMeter = pow(10, 10);
    cout << "Angstroms per meter: " << angstromsPerMeter << "\n";
    string text1 = " abracadabra";
    string text2 = "Uvuvwevwevwe Onyetenyevwe Ugwemubwem Ossas";

    cout << "Length of string: " << text1.length() << "\n";
    cout << "Length of string: " << text2.length() << "\n";

    double thoseShoesCost = 19.99;
    double thosePantsCost = 2690.01;

    double clothesTotalCost = thoseShoesCost + thosePantsCost;

    cout << "Total cost is: $ " << clothesTotalCost << "\n";

    return 0;
}
