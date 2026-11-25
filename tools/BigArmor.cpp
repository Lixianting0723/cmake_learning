//
// Created by lixia on 2026/11/25.
//

#include "BigArmor.h"
#include <iostream>

void BigArmor::printInfo() {
    std::cout << "this is an override method \n";
    std::cout << "id = " << this->id << std::endl;
    std::cout << "color = " << this->color << std::endl;
    std::cout << "x = " << this->x << std::endl;
    std::cout << "y = " << this->y << std::endl;
    std::cout << "size = " << this->size << std::endl;
}
