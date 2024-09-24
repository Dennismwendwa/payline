#include "main.h"
#include "items.hpp"

Item::Item(const std::string &name,
           const int &price,
           double discount,
           const int &stock,
           const std::string &barcode
           ): 
            name(name),
            price(price),
            discount(discount),
            stock(stock),
            barcode(barcode) {}

void Item::printObject() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Price: " << price << std::endl;
    std::cout << "Stock: " << stock << std::endl;
    std::cout << "Discount: " << discount << std::endl;
    std::cout << "Barcode: " << barcode << std::endl;
}
Item::~Item() = default;