#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void calculatePayableAmount(string day, double amount);

int main()
{
    string day, amountText;
    cout << "Enter the day of purchase: ";
    cin >> day;
    cout << "Enter the total purchase amount: ";
    cin >> amountText;

    // Allow input such as "$1000" as well as "1000"
    if (!amountText.empty() && amountText[0] == '$')
        amountText = amountText.substr(1);
    double amount = atof(amountText.c_str());

    calculatePayableAmount(day, amount);
    return 0;
}

void calculatePayableAmount(string day, double amount)
{
    if (day == "Sunday")
        amount = amount - amount * 0.10;   // 10% discount
    cout << "Payable Amount: $" << amount << endl;
}