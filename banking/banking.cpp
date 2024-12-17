#include <iostream>
using namespace std;

void showMenu()
{
    cout << "**********MENU**********" << endl;
    cout << "1. Check balance\n";
    cout << "2. Deposite \n";
    cout << "3. Withdraw \n";
    cout << "4. Simbanking\n";
    cout << "5. Exit.\n";
    cout << "**********MENU**********" << endl;
}
void simBanking()
{
    cout << "\n\t---SIMBANKING-----\n";
    cout << "Eirtel money.";
    cout << "\nHallo Pesa";
    cout << "\nTiGo Pesa";
    cout << "\nCAzam Pesa\n\n";
}

int main()
{
    int option;
    double balance = 0;

    do
    {

        showMenu();
        cout << "Enter your choice: ";
        cin >> option;
        system("cls");

        switch (option)
        {
        case 1:
            cout << "Balance is $" << balance << endl;
            break;
        case 2:
            cout << "Deposit amount: " << endl;
            double depositAmount;
            cin >> depositAmount;
            balance += depositAmount;
            break;
        case 3:
            cout << "Withdraw amount: " << endl;
            double withdrawAmount;
            cin >> withdrawAmount;
            if (withdrawAmount <= balance)
                balance -= withdrawAmount;
            else
                cout << "no enough money\n";
            break;
        case 4:
            simBanking();
            break;
        default:
            cout << "Invalid choice! Try again.";
        }
    } while (option != 5);
}