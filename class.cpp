#include "main.h"

Manager::Manager(const std::string& user, const std::string& pass,
                 const std::string& email, const std::string& firstName,
                 const std::string& lastName)
    : User(user, pass, email, firstName, lastName) {}

void Manager::displayRole() const {
    User::displayRole();
    std::cout << "Role: Manager" << std::endl;
}
