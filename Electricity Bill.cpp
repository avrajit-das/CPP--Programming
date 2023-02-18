#include <iostream>
using namespace std;

int main() {
    string customerName;
    int prevReading, currReading, units;
    double billAmount;

    // Get customer details
    cout << "Enter customer name: ";
    getline(cin, customerName);
    cout << "Enter previous reading: ";
    cin >> prevReading;
    cout << "Enter current reading: ";
    cin >> currReading;

    units = currReading - prevReading;

    // Calculate bill amount based on units consumed
    if (units <= 100) {
        billAmount = units * 3.50;
    }
    else if (units > 100 && units <= 300) {
        billAmount = 100 * 3.50 + (units - 100) * 4.50;
    }
    else {
        billAmount = 100 * 3.50 + 200 * 4.50 + (units - 300) * 6.50;
    }

    // Display the bill
    cout << "\nElectricity Bill\n";
    cout << "Customer Name: " << customerName << endl;
    cout << "Previous Reading: " << prevReading << endl;
    cout << "Current Reading: " << currReading << endl;
    cout << "Units Consumed: " << units << endl;
    cout << "Bill Amount: " << billAmount << " Rs." << endl;

    return 0;
}

