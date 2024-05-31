#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double hours, rate, gross, tax, net;

    // Get input from the user
    cout << "Enter the number of hours worked: ";
    cin >> hours;
    cout << "Enter the hourly rate: ";
    cin >> rate;

    // Calculate gross pay
    gross = hours * rate;

    // Calculate tax (assume 20% tax rate)
    tax = 0.2 * gross;

    // Calculate net pay
    net = gross - tax;

    // Display the results
    cout << fixed << setprecision(2);
    cout << "Gross pay: $" << gross << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Net pay: $" << net << endl;

    return 0;
}