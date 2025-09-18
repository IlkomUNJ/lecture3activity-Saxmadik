#include "BankCustomer.h"
#include <iostream>

BankCustomer::BankCustomer(int id, const std::string& name, double balance) 
    : id(id), name(name), balance(balance) {
}

int BankCustomer::getId() const {
    return id;
}

std::string BankCustomer::getName() const {
    return name;
}

double BankCustomer::getBalance() const {
    return balance;
}

void BankCustomer::setName(const std::string& newName) {
    name = newName;
}

void BankCustomer::setBalance(double amount) {
    balance = amount;
}

void BankCustomer::addBalance(double amount) {
    balance += amount;
}

void BankCustomer::withdrawBalance(double amount) {
    if (amount > balance) {
        std::cout << "Rejected: Insufficient funds!" << std::endl;
    } else {
        balance -= amount;
    }
}

void BankCustomer::printInfo() const {
    std::cout << "Customer Name: " << name << std::endl;
    std::cout << "Customer ID: " << id << std::endl;
    std::cout << "Balance: $" << balance << std::endl;
}