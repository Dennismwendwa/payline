#include "main.h"

User::User(const std::string &user, const std::string &pass,
const std::string &email, const std::string first_name,
const std::string &last_name) : username(user), password(pass),
email(email), first_name(first_name), last_name(last_name) {}

void User::displayRole() const {
    std::cout << "User: " << username << std::endl;
    std::cout << "Email: " << email << std::endl;
    std::cout << "First Name: " << first_name << std::endl;
    std::cout << "Last Name: " << last_name << std::endl;
}
User::~User() = default;


    Cashier::Cashier(const std::string& user, const std::string& pass, const std::string& email,
            const std::string& first_name, const std::string& last_name)
        : User(user, pass, email, first_name, last_name) {}

    void Cashier::displayRole() const {
        User::displayRole();
        std::cout << "Role: Cashier" << std::endl;
    }


    Supervisor::Supervisor(const std::string& user, const std::string& pass, const std::string& email,
               const std::string& firstName, const std::string& lastName)
        : User(user, pass, email, firstName, lastName) {}

    void Supervisor::displayRole() const {
        User::displayRole();
        std::cout << "Role: Supervisor" << std::endl;
    }

// Derived class for Manager

    Manager::Manager(const std::string& user, const std::string& pass, const std::string& email,
            const std::string& firstName, const std::string& lastName)
        : User(user, pass, email, firstName, lastName) {}

    void Manager::displayRole() const {
        User::displayRole();
        std::cout << "Role: Manager" << std::endl;
    }
