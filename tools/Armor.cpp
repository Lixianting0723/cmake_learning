//
// Created by lixia on 2026/11/25.
//

#include "Armor.hpp"

#include <iostream>
#include <utility>


//构造函数 传递初始状态
Armor::Armor(const int id,std::string color,float x,float y) {
    this->id = id;
    this->color = std::move(color);
    this->x = x;
    this->y = y;
}
// 输出装甲板所有属性
void Armor::printInfo() {
    std::cout << "id = " << this->id << std::endl << "color = " << this->color << std::endl << "x = " << this->x << std::endl << "y = " << this->y << std::endl << std::endl;
}
//更新中心坐标
void Armor::updatePos(float x,float y) {
    this->x = x;
    this->y = y;
}

