// Customer.h
#pragma once
#include <string>

class Customer {
public:
    Customer(const std::string& name, const std::string& address);
    // Getters and setters
    std::string getName() const;
    std::string getAddress() const;

private:
    std::string name;
    std::string address;
};
