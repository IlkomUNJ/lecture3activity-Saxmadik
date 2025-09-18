#include "buyer.h"
#include <iostream>

Buyer::Buyer(int id, const std::string& name, double balance)
    : BankCustomer(id, name, balance), itemsPurchased(0) {
}

int Buyer::getItemsPurchased() const {
    return itemsPurchased;
}

void Buyer::makePurchase(double amount) {
    if (amount > getBalance()) {
        std::cout << "Purchase rejected: Insufficient funds!" << std::endl;
    } else {
        withdrawBalance(amount);
        itemsPurchased++;
        std::cout << "Purchase successful! $" << amount << " deducted. Total purchases: " << itemsPurchased << std::endl;
    }
}

void Buyer::displayBuyerInfo() const {
    printInfo();
    std::cout << "Items Purchased: " << itemsPurchased << std::endl;
}