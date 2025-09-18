#include "seller.h"
#include <iostream>

Seller::Seller(int id, const std::string& name, double balance, const std::string& businessName)
    : BankCustomer(id, name, balance), businessName(businessName), itemsSold(0) {
}

std::string Seller::getBusinessName() const {
    return businessName;
}

int Seller::getItemsSold() const {
    return itemsSold;
}

void Seller::setBusinessName(const std::string& name) {
    businessName = name;
}

void Seller::recordSale(double amount) {
    addBalance(amount);
    itemsSold++;
    std::cout << "Sale recorded! $" << amount << " added. Total sales: " << itemsSold << std::endl;
}

void Seller::displaySellerInfo() const {
    printInfo();
    std::cout << "Business Name: " << businessName << std::endl;
    std::cout << "Items Sold: " << itemsSold << std::endl;
}