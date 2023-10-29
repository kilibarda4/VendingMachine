#include <iostream>
#include "item.h"
#include "vending_machine.h"

int main( void )
{
    Vending_machine vend;
    vend.add("Chips", 190);
    vend.add("Cheese", 200);
    std::cout << vend.menu() << std::endl;
    vend.buy(1);
    
    return 0;
}