#include "buyer.h"
#include "seller.h"
#include <iostream>

int main() {
    // Create a buyer
    Buyer buyer(1, "John Doe", 1000.0);
    
    // Create a seller
    Seller seller(2, "Jane Smith", 5000.0, "Best Products Inc");
    
    std::cout << "=== Buyer Information ===" << std::endl;
    buyer.displayBuyerInfo();
    std::cout << std::endl;
    
    std::cout << "=== Seller Information ===" << std::endl;
    seller.displaySellerInfo();
    std::cout << std::endl;
    
    // Simulate transactions
    std::cout << "=== Transactions ===" << std::endl;
    buyer.makePurchase(250.0);
    seller.recordSale(250.0);
    
    buyer.makePurchase(150.0);
    seller.recordSale(150.0);
    
    std::cout << "\n=== After Transactions ===" << std::endl;
    buyer.displayBuyerInfo();
    std::cout << std::endl;
    seller.displaySellerInfo();
    
    return 0;
}