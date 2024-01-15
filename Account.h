// Account.h
#pragma once
#include "Customer.h"

class Account {
public:
    Account(Customer* owner, double balance);
    // Getters and setters
    Customer* getOwner() const;
    double getBalance() const;
    void deposit(double amount);
    void withdraw(double amount);

private:
    Customer* owner;
    double balance;
};
