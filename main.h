#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <vector>

class User
{
    std::string user_type = "normal";

    protected:
        std::string first_name;
        std::string last_name;
        std::string username;
        std::string password;
        std::string email;
        std::string hashPassWord(const std::string& plain_password) const;

    public:
        User(const std::string &user,
            const std::string &pass,
            const std::string &email,
            const std::string first_name, 
            const std::string &last_name
            );
        virtual void displayRole() const;
        virtual ~User();
};

class Cashier : public User {
public:
    Cashier(const std::string& user, const std::string& pass,
            const std::string& email, const std::string& first_name,
            const std::string& last_name);

    void displayRole() const override;
};

class Supervisor : public User {
public:
    Supervisor(const std::string& user, const std::string& pass,
               const std::string& email, const std::string& firstName,
               const std::string& lastName);

    void displayRole() const override;
};

// Derived class for Manager
class Manager : public User {
public:
    Manager(const std::string& user, const std::string& pass,
            const std::string& email, const std::string& firstName,
            const std::string& lastName);

    void displayRole() const override;
};

#endif
