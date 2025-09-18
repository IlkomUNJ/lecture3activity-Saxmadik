#include "BankCustomer.h"
#include <string>

class Seller : public BankCustomer {
private:
    std::string businessName;
    int itemsSold;
    
public:
    Seller(int id, const std::string& name, double balance, const std::string& businessName);
    
    std::string getBusinessName() const;
    int getItemsSold() const;
    
    void setBusinessName(const std::string& name);
    void recordSale(double amount);
    void displaySellerInfo() const;
};