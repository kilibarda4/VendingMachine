#include "vending_machine.h"

void Vending_machine::add(std::string name, int price) {
    Item newItem(name, price);
    Vending_machine::items.push_back(newItem);
}

void Vending_machine::buy(int index) {
    std::cout << "#### Buying: " + Vending_machine::items[index].to_string() << std::endl; 
}

std::string Vending_machine::menu() {
    std::string menuString = "Menu:\n";
    for(int i = 0; i < Vending_machine::items.size(); i++)
    {
        menuString += std::to_string(i) + ". " + items[i].to_string() + "\n";
    }
    return menuString;
}