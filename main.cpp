#include "main.h"

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