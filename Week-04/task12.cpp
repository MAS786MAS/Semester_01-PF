#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void calculatePayableAmount(string day, double amount);

int main()
{
    string day, amountText;
    while (true)
    {
        cout << "Enter the day of purchase: ";
        cin >> day;
        cout << "Enter the total purchase amount: ";
        cin >> amountText;

        if (!amountText.empty() && amountText[0] == '$')
            amountText = amountText.substr(1);
        double amount = atof(amountText.c_str());

        calculatePayableAmount(day, amount);
        cout << endl;
    }
    return 0;
}

void calculatePayableAmount(string day, double amount)
{
    if (day == "Sunday")
        amount = amount - amount * 0.10;   // 10% on Sunday
    if (day != "Sunday")
        amount = amount - amount * 0.05;   // 5% on every other day
    cout << "Payable Amount: $" << amount << endl;
}