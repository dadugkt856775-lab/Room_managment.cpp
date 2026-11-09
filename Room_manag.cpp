#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Hotel
{
private:
    int roomNumber;
    string customerName;
    int days;
    double roomRate;
    double totalAmount;
    double discount;
    double finalAmount;

public:
    void getDetails()
    {
        cout << "Enter Room Number: ";
        cin >> roomNumber;

        cin.ignore();

        cout << "Enter Customer Name: ";
        getline(cin, customerName);

        cout << "Enter Number of Days: ";
        cin >> days;

        cout << "Enter Room Rate Per Day: ";
        cin >> roomRate;
    }

    void calculateBill()
    {
        totalAmount = days * roomRate;

        if (days >= 7)
            discount = totalAmount * 0.20;
        else if (days >= 3)
            discount = totalAmount * 0.10;
        else
            discount = 0;

        finalAmount = totalAmount - discount;
    }

    void displayBill()
    {
        cout << fixed << setprecision(2);

        cout << "\n===== HOTEL BOOKING BILL =====\n";
        cout << "Room Number     : " << roomNumber << endl;
        cout << "Customer Name   : " << customerName << endl;
        cout << "Number of Days  : " << days << endl;
        cout << "Room Rate       : Rs. " << roomRate << endl;
        cout << "Total Amount    : Rs. " << totalAmount << endl;
        cout << "Discount        : Rs. " << discount << endl;
        cout << "Final Amount    : Rs. " << finalAmount << endl;
    }
};

int main()
{
    Hotel h;

    h.getDetails();
    h.calculateBill();
    h.displayBill();

    return 0;
}
