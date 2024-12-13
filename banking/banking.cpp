#include<iostream>
using namespace std;

void showMenu() {
    cout << "**********MENU**********" << endl;
    cout << "1. Check balance\n";
    cout << "2. Deposite \n";
    cout << "3. Withdraw \n";
    cout << "**********MENU**********" << endl;
}

int main()
{
    int option;
    double balance = 0;

    do
    {



        showMenu();
        cout << "Option: ";
        cin >> option;
        system("cls");

        switch (option) {
        case 1: cout << "Balance is $" << balance << endl; break;
        case 2: cout << "Deposit amount: " << endl;
            double depositAmount;
            cin >> depositAmount;
            balance += depositAmount;
            break;
        case 3: cout << "Withdraw amount: " << endl;
            double withdrawAmount;
            cin >> withdrawAmount;
            if (withdrawAmount <= balance)
                balance -= withdrawAmount;
            else
                cout << "no enough money\n";
            break;

        }
    } while (option != 4);
}