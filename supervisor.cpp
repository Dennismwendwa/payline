#include "main.h"

Supervisor::Supervisor(const std::string& user, const std::string& pass, 
                       const std::string& email,
                       const std::string& firstName,
                       const std::string& lastName)
    : User(user, pass, email, firstName, lastName) {}

void Supervisor::displayRole() const {
    User::displayRole();
    std::cout << "Role: Supervisor" << std::endl;
}
