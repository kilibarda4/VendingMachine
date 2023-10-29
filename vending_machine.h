#ifndef __VENDING_MACHINE_H
#define __VENDING_MACHINE_H

#include "item.h"
#include <vector>
#include <iostream>

class Vending_machine {
    public:
        void add(std::string name, int price);
        void buy(int index);
        std::string menu();
    private:
        std::vector<Item> items{};
};
#endif