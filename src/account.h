//
// Created by Dobri on 23-Mar-24.
//
#ifndef ATM_H
#define ATM_H
#include <iostream>

class Account {
public:
    explicit Account(std::string accName);
    void withdraw(float amount);
    void deposit(float amount);
    static void transferFundsTo(float amount, Account* accountToTransferTo, Account* fromAccount);
    void displayBalance();
    std::string name;
private:
    float getBalance();
    float balance = 50.0f;
};
#endif //ATM_H
