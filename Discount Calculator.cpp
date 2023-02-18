#include <iostream>
using namespace std;

int main() {
    double originalPrice, discountPercent, finalPrice;
    cout << "Enter the original price: ";
    cin >> originalPrice;
    cout << "Enter the discount percentage: ";
    cin >> discountPercent;

    // Calculate the final price after discount
    finalPrice = originalPrice - (originalPrice * discountPercent / 100);

    // Display the final price after discount
    cout << "Final price after discount: " << finalPrice << endl;

    return 0;
}

