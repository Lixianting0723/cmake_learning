//
// Created by lixia on 2026/11/25.
//

#ifndef LEARNING_ARMOR_H
#define LEARNING_ARMOR_H
#include <string>

class Armor {
    public:
        int id; // 装甲板ID
        std::string color; // 颜色
        float x,y;// 中心坐标 x,y
        //构造函数 传递初始状态
        Armor(int,std::string,float,float);


        // 输出装甲板所有属性
        virtual void printInfo();
        //更新中心坐标
        void updatePos(float,float);
};

#endif //LEARNING_ARMOR_H
