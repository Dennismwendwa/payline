#include "main.h"
#include "items.hpp"

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

    Item* item[3];

    item[0] = new Item("Tomato", 200, 0.4, 300, "ruuuuuuuuds");
    item[1] = new Item("Mango", 100, 0.6, 500, "rtyuuuuds");
    item[2] = new Item("carotes", 200, 8, 800, "yuteoeiis");

    for (int i = 0; i < 3; ++i) {
        item[i]->printObject();
        std::cout << std::endl;
        delete item[i]; // Clean up
    }

    return 0;
}