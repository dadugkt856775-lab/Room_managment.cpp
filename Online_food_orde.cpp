#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class FoodOrder
{
private:
    int orderId;
    string customerName;
    string foodName;
    int quantity;
    double price;
    double foodTotal;
    double deliveryCharge;
    double finalAmount;

public:
    void getDetails()
    {
        cout << "Enter Order ID: ";
        cin >> orderId;

        cin.ignore();

        cout << "Enter Customer Name: ";
        getline(cin, customerName);

        cout << "Enter Food Name: ";
        getline(cin, foodName);

        cout << "Enter Price Per Item: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void calculateBill()
    {
        foodTotal = price * quantity;

        if (foodTotal >= 500)
            deliveryCharge = 0;
        else
            deliveryCharge = 40;

        finalAmount = foodTotal + deliveryCharge;
    }

    void displayBill()
    {
        cout << fixed << setprecision(2);

        cout << "\n===== FOOD ORDER BILL =====\n";
        cout << "Order ID          : " << orderId << endl;
        cout << "Customer Name     : " << customerName << endl;
        cout << "Food Item         : " << foodName << endl;
        cout << "Price Per Item    : Rs. " << price << endl;
        cout << "Quantity          : " << quantity << endl
