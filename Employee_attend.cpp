#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    int totalDays;
    int presentDays;
    double dailySalary;
    double attendance;
    double salary;

public:
    void getDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Total Working Days: ";
        cin >> totalDays;

        cout << "Enter Present Days: ";
        cin >> presentDays;

        cout << "Enter Daily Salary: ";
        cin >> dailySalary;
    }

    void calculate()
    {
        attendance = ((double)presentDays / totalDays) * 100;
        salary = presentDays * dailySalary;
    }

    void display()
    {
        cout << fixed << setprecision(2);

        cout << "\n===== EMPLOYEE REPORT =====\n";
        cout << "Employee ID      : " << id << endl;
        cout << "Employee Name    : " << name << endl;
        cout << "Working Days     : " << totalDays << endl;
        cout << "Present Days     : " << presentDays << endl;
        cout << "Attendance       : " << attendance << "%" << endl;
        cout << "Daily
