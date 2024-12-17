#include <iostream>
using namespace std;

void showMenu()
{
    cout << "\n**********MENU**********\n"
         << endl;
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
    cout << "1. Eirtel money.";
    cout << "\n2.Hallo Pesa";
    cout << "\n3. TiGo Pesa";
    cout << "\n4. Azam Pesa\n\n";
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
            int x;
            cout << "Enter your simbanking to transfer money: \n\n";
            cin >> x;

            switch (x)
            {
            case 1:
                cout << "Your transaction to Eirtel money is successfully \n\n";
                break;
            case 2:
                cout << "Your transaction to HaloPesa is successfully\n\n";
                break;
            case 3:
                cout << "Your transaction to TiGoPesa is Successfully\n\n";
                break;
            case 4:
                cout << "Your transaction to AzamPesa is Successfully\n\n";
                break;
            }

            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (option != 5);
}