#include "BankCustomer.h"
#include <string>

class Buyer : public BankCustomer {
private:
    int itemsPurchased;
    
public:
    Buyer(int id, const std::string& name, double balance);
    
    int getItemsPurchased() const;
    void makePurchase(double amount);
    void displayBuyerInfo() const;
};