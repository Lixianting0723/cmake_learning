//
// Created by lixia on 2026/11/25.
//

#ifndef LEARNING_BIGARMOR_H
#define LEARNING_BIGARMOR_H

#include "Armor.hpp"

#include <utility>

class BigArmor: public Armor {
    public:
        float size = 0.25;
        BigArmor(int id,std::string color,float x,float y): Armor(id,std::move(color),x,y) {};

        void printInfo() override;
};

#endif //LEARNING_BIGARMOR_H
