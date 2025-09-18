#include "BankCustomer.h"
#include <string>
#include <vector>

class Bank {
private:
    std::string name;
    std::vector<BankCustomer> accounts;
    int customerCount;

public:
    Bank(const std::string& name);
};
