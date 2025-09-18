#include <string>

class BankCustomer {
protected:
    int id;
    std::string name;
    double balance;

public:
    BankCustomer(int id, const std::string& name, double balance);
    
    int getId() const;
    std::string getName() const;
    double getBalance() const;
    
    void printInfo() const;
    void setName(const std::string& name);
    void setBalance(double balance);
    void addBalance(double amount);
    void withdrawBalance(double amount);
};