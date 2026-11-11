#include <iostream>
#include <iomanip>
using namespace std;

class ATM
{
private:
    int accountNumber;
    double balance;

public:
    void createAccount()
    {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void checkBalance()
    {
        cout << fixed << setprecision(2);
        cout << "\nCurrent Balance: Rs. " << balance << endl;
    }

    void deposit()
    {
        double amount;

        cout << "Enter Deposit Amount: ";
        cin >> amount;

        if (amount > 0)
        {
            balance += amount;
            cout << "Amount Deposited Successfully!\n";
        }
        else
        {
            cout << "Invalid Amount!\n";
        }
    }

    void withdraw()
    {
        double amount;

        cout << "Enter Withdrawal Amount: ";
        cin >> amount;

        if (amount <= 0)
        {
            cout << "Invalid Amount!\n";
        }
        else if (amount > balance)
        {
            cout << "Insufficient Balance!\n";
        }
        else
        {
            balance -= amount;
            cout << "Please Collect Your Cash.\n";
            cout << "Withdrawal Successful!\n";
        }
    }

    void displayAccount()
    {
        cout << fixed << setprecision(2);

        cout << "\n===== ACCOUNT DETAILS =====\n";
        cout << "Account Number : " << accountNumber << endl;
        cout << "Balance        : Rs. " << balance << endl;
    }
};

int main()
{
    ATM atm;
    int choice;

    atm.createAccount();

    do
    {
        cout << "\n===== ATM MENU =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Account Details\n";
        cout << "5. Exit\n";

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            atm.checkBalance();
            break;

        case 2:
            atm.deposit();
            break;

        case 3:
            atm.withdraw();
            break;

        case 4:
            atm.displayAccount();
            break;

        case 5:
            cout << "Thank You for Using ATM!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}
