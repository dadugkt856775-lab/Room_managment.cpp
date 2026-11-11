#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class TrainTicket
{
private:
    int ticketId;
    string passengerName;
    string source;
    string destination;
    int adults;
    int children;
    double adultFare;
    double childFare;
    double totalFare;

public:
    void getDetails()
    {
        cout << "Enter Ticket ID: ";
        cin >> ticketId;

        cin.ignore();

        cout << "Enter Passenger Name: ";
        getline(cin, passengerName);

        cout << "Enter Source: ";
        getline(cin, source);

        cout << "Enter Destination: ";
        getline(cin, destination);

        cout << "Enter Number of Adults: ";
        cin >> adults;

        cout << "Enter Number of Children: ";
        cin >> children;

        cout << "Enter Adult Fare: ";
        cin >> adultFare;

        cout << "Enter Child Fare: ";
        cin >> childFare;
    }

    void calculateFare()
    {
        double adultTotal = adults * adultFare;
        double childTotal = children * childFare;

        totalFare = adultTotal + childTotal;

        if (children > 0)
        {
            double childDiscount = childTotal * 0.25;
            totalFare -= childDiscount;
        }
    }

    void displayTicket()
    {
        cout << fixed << setprecision(2);

        cout << "\n===== TRAIN TICKET =====\n";
        cout << "Ticket ID       : " << ticketId << endl;
        cout << "Passenger Name  : " << passengerName << endl;
        cout << "Source          : " << source << endl;
        cout << "Destination     : " << destination << endl;
        cout << "Adults          : " << adults << endl;
        cout << "Children        : " << children << endl;
        cout << "Adult Fare      : Rs. " << adultFare << endl;
        cout << "Child Fare      : Rs. " << childFare << endl;
        cout << "Total
