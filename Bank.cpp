// Bank.cpp
#include <iostream>
#include "Customer.h"
#include "Account.h"

int main() {
    // Instantiate customers
    Customer customer1("John Doe", "123 Main St");
    Customer customer2("Jane Smith", "456 Oak St");

    // Instantiate accounts
    Account account1(&customer1, 1000.0);
    Account account2(&customer2, 500.0);

    // Perform transactions
    account1.deposit(500.0);
    account2.withdraw(200.0);

    // Display account information
    std::cout << "Account 1 - Owner: " << account1.getOwner()->getName() << ", Balance: $" << account1.getBalance() << std::endl;
    std::cout << "Account 2 - Owner: " << account2.getOwner()->getName() << ", Balance: $" << account2.getBalance() << std::endl;

    return 0;
}
