#include "main.h"

class User
{
    std::string user_type = "normal";

    protected:
        std::string first_name;
        std::string last_name;
        std::string username;
        std::string password;
        std::string email;

    public:
        User(const std::string &user, const std::string &pass,
        const std::string &email, const std::string first_name,
        const std::string &last_name) : username(user), password(pass),
        email(email), first_name(first_name), last_name(last_name) {}

        virtual void displayRole() const {
            std::cout << "User: " << username << std::endl;
            std::cout << "Email: " << email << std::endl;
            std::cout << "First Name: " << first_name << std::endl;
            std::cout << "Last Name: " << last_name << std::endl;
        }
    virtual ~User() = default;
};

class Cashier : public User {
public:
    Cashier(const std::string& user, const std::string& pass, const std::string& email,
            const std::string& first_name, const std::string& last_name)
        : User(user, pass, email, first_name, last_name) {}

    void displayRole() const override {
        User::displayRole();
        std::cout << "Role: Cashier" << std::endl;
    }
};

class Supervisor : public User {
public:
    Supervisor(const std::string& user, const std::string& pass, const std::string& email,
               const std::string& firstName, const std::string& lastName)
        : User(user, pass, email, firstName, lastName) {}

    void displayRole() const override {
        User::displayRole();
        std::cout << "Role: Supervisor" << std::endl;
    }
};

// Derived class for Manager
class Manager : public User {
public:
    Manager(const std::string& user, const std::string& pass, const std::string& email,
            const std::string& firstName, const std::string& lastName)
        : User(user, pass, email, firstName, lastName) {}

    void displayRole() const override {
        User::displayRole();
        std::cout << "Role: Manager" << std::endl;
    }
};

int main() {
    User* users[3];
    users[0] = new Cashier("john_doe", "password123", "john@example.com", "John", "Doe");
    users[1] = new Supervisor("jane_smith", "password456", "jane@example.com", "Jane", "Smith");
    users[2] = new Manager("admin_user", "password789", "admin@example.com", "Admin", "User");

    for (int i = 0; i < 3; ++i) {
        users[i]->displayRole();
        std::cout << std::endl;
        delete users[i]; // Clean up
    }

    return 0;
}