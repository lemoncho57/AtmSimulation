#include <iostream>

#include "account.h"

int main() {
    Account account1 = Account("Dobri");
    Account account2 = Account("Lemoncho");
    int accountChoice = 0;

    int runAgain = 0;

    do {
        std::cout << "Type 1 to login into " << account1.name << std::endl;
        std::cout << "Type 2 to login into " << account2.name << std::endl;
        std::cin >> accountChoice;
        runAgain = 0;

        if (accountChoice == 1) {
            int choise = 0;

            float amount = 0;
            std::string account;

            std::cout << "Succesfully logged into " << account1.name << std::endl;
            std::cout << "Type 1 to withdraw funds from your account \n";
            std::cout << "Type 2 to deposit funds to your account \n";
            std::cout << "Type 3 to transfer to another account \n";
            std::cout << "Type 4 to view your balance \n";
            std::cin >> choise;
            switch (choise) {

                case 1:
                    std::cout << "How much money do you want to withdraw? \n";
                    std::cin >> amount;
                    account1.withdraw(amount);
                    amount = 0;
                    break;
                case 2:
                    std::cout << "How much money do you want to deposit? \n";
                    std::cin >> amount;
                    account1.deposit(amount);
                    amount = 0;
                    break;
                case 3:
                    std::cout << "How much money do you want to transfer? \n";
                    std::cin >> amount;
                    std::cout << "To who do you want to transfer funds? (Type account name! Case sensitive!!!) \n";
                    std::cin >> account;
                    if (account == account1.name)
                        std::cout << "You can't transfer funds to yourself \n";
                    else if (account == account2.name) {
                        Account::transferFundsTo(amount, &account2, &account1);
                    }
                    amount = 0;
                    break;

                case 4:
                    account1.displayBalance();

                default:
                    std::cout << "Incorrect option! \n";
                break;
            }

        }
        else if (accountChoice == 2) {
            int choise = 0;

            float amount = 0;
            std::string account;

            std::cout << "Succesfully logged into " << account2.name << std::endl;
            std::cout << "Type 1 to withdraw funds from your account \n";
            std::cout << "Type 2 to deposit funds to your account \n";
            std::cout << "Type 3 to transfer to another account \n";
            std::cout << "Type 4 to view your balance \n";
            std::cin >> choise;
            switch (choise) {

                case 1:
                    std::cout << "How much money do you want to withdraw? \n";
                    std::cin >> amount;
                    account2.withdraw(amount);
                    amount = 0;
                    break;
                case 2:
                    std::cout << "How much money do you want to deposit? \n";
                    std::cin >> amount;
                    account2.deposit(amount);
                    amount = 0;
                    break;
                case 3:
                    std::cout << "How much money do you want to transfer? \n";
                    std::cin >> amount;
                    std::cout << "To who do you want to transfer funds? (Type account name! Case sensitive!!!) \n";
                    std::cin >> account;
                    if (account == account2.name)
                        std::cout << "You can't transfer funds to yourself \n";
                    else if (account == account1.name) {
                        Account::transferFundsTo(amount, &account1, &account2);
                    }
                    amount = 0;
                    break;

                case 4:
                    account2.displayBalance();

                default:
                    std::cout << "Incorrect option! \n";
                break;
            }
        }

        if (accountChoice >= 3) {
            std::cout << "Incorrect option! \n";
            return 0;
        }

        std::cout << "Do you want to make a transaction again? (0=no 1=yes) \n";
        std::cin >> runAgain;
        system("cls");


        accountChoice = 0;

    } while (runAgain >= 1);
    return 0;
}
