#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class BusTicket
{
private:
    int ticketId;
    string passengerName;
    string source;
    string destination;
    int passengers;
    double ticketPrice;
    double totalAmount;
    double discount;
    double finalAmount;

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

        cout << "Enter Number of Passengers: ";
        cin >> passengers;

        cout << "Enter Ticket Price Per Person: ";
        cin >> ticketPrice;
    }

    void calculateFare()
    {
        totalAmount = passengers * ticketPrice;

        if (passengers >= 5)
            discount = totalAmount * 0.10;
        else
            discount = 0;

        finalAmount = totalAmount - discount;
    }

    void displayTicket()
    {
        cout << fixed << setprecision(2);

        cout << "\n===== BUS TICKET DETAILS =====\n";
        cout << "Ticket ID       : " << ticketId << endl;
        cout << "Passenger Name  : " << passengerName << endl;
        cout << "Source          : " << source << endl;
        cout << "Destination     : " << destination << endl;
        cout << "Passengers      : " << passengers << endl;
        cout << "Ticket Price    : Rs. " << ticketPrice << endl;
        cout << "Total Fare      : Rs. " << totalAmount << endl;
        cout << "Discount        : Rs. " << discount << endl;
        cout << "Final Fare      : Rs. " << finalAmount << endl;
    }
};

int main()
{
    BusTicket b;

    b.getDetails();
    b.calculateFare();
    b.displayTicket();

    return 0;
}
