#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Meter
{
private:
    int customerId;
    string name;
    int previousReading;
    int currentReading;
    int units;
    double bill;

public:
    void getDetails()
    {
        cout << "Enter Customer ID: ";
        cin >> customerId;

        cin.ignore();

        cout << "Enter
