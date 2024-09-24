#ifndef ITEMS_HPP
#define ITEMS_HPP
#include <iostream>

#include "main.h"
#include "items.hpp"

class Item
{
    //std::string user_type = "normal";

    protected:
        std::string name;
        int price;
        int stock;
        std::string seller;
        std::string barcode;

    public:
        Item(const std::string &name,
            const int &price,
            const int &stock,
            const std::string seller, 
            const std::string &barcode
            );
        virtual void printObject() const;
        virtual ~Item();
};
#endif