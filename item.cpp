#include "item.h"

#include <iostream>
#include <stdexcept>

Item::Item(std::string name, int price)
    : _name{name}, _price{price} {
        if (price < 0) throw std::runtime_error("Invalid Price!");
    }
    std::string Item::to_string()
    {
        float price_flt = _price/100.00;
        return std::string(_name + " " + "($" + std::to_string(price_flt) + ")");
    }