#include "main.h"

Cashier::Cashier(const std::string& user,
                 const std::string& pass,
                 const std::string& email,
                 const std::string& first_name,
                 const std::string& last_name)
    : User(user, pass, email, first_name, last_name) {}

void Cashier::displayRole() const {
    User::displayRole();
    std::cout << "Role: Cashier" << std::endl;
}
