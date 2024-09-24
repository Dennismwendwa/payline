#ifndef ITEMS_HPP
#define ITEMS_HPP
#include <iostream>

#include "main.h"
#include "items.hpp"

class Item
{
    protected:
        std::string name;
        int price;
        double discount;
        int stock;
        std::string barcode;

    public:
        Item(const std::string &name,
            const int &price,
            double discount,
            const int &stock,
            const std::string &barcode
            );
        virtual void printObject() const;
        virtual ~Item();
};
#endif