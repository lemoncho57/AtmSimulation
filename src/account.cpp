#include "account.h"

Account::Account(std::string accName) {
    name = accName;
}

void Account::withdraw(float amount) {
    if (balance <= 0 || amount > balance)
        std::cout << "You don't have enough funds in your balance! \n";

    else if (balance > 0 || amount <= balance) {
        balance -= amount;
        std::cout << "You've succesfully withdrawed " << amount << " levs from your account! \n";
        std::cout << "You now have " << balance << " levs in your account! \n";
    }
}

void Account::deposit(float amount) {
    balance += amount;
    std::cout << "You've succesfully deposited " << amount << " levs in your account! \n";
    std::cout << "You now have " << balance << " levs in your account! \n";
}

void Account::transferFundsTo(float amount, Account* accountToTransferTo, Account* fromAccount) {
    fromAccount->balance -= amount;
    accountToTransferTo->balance += amount;

    std::cout << "You've succesfully transfered " << amount << " levs to " << accountToTransferTo->name << " ! \n";

}

float Account::getBalance() {
    return balance;
}

void Account::displayBalance() {
    std::cout << "Your balance is " << getBalance() << " levs! \n";
}

