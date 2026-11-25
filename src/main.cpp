//
// Created by lixia on 2026/11/25.
//

#include "Armor.hpp"
#include <iostream>

#include "BigArmor.h"

int main() {
    Armor armor(0,"0xFFFFFF",100,100); //在栈上创建对象
    armor.printInfo();
    armor.updatePos(200,200);
    std::cout << "=============================" << std::endl;
    armor.printInfo();

    BigArmor bigArmor(0,"0xEEEEEE",300,300);//实例化 BigArmor
    bigArmor.printInfo(); // 调用重写方法

    return 0;
}
