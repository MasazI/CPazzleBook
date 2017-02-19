
//
//  1_6.cpp
//  CPuzzleBook
//
//  Created by masai on 2017/02/12.
//  Copyright (c) 2017年 masai. All rights reserved.
//

#include "1_6.h"

#define PRINT3(x, y, z) std::cout << #x << "=" << x << "," << #y << "=" << y << "," << #z <<"=" << z << std::endl;

void func_1_6(){
    std::cout << "======= 1.6" << std::endl;
    int x, y, z;
    
    x = y = z = 1;
    ++x || ++ y && ++z; // bad syntax.
    PRINT3(x, y, z);
    
    x = y = z = 1;
    ++x && ++y || ++z; // bad syntax.
    PRINT3(x, y, z);
    
    x = y = z = 1;
    ++x && ++y && ++z;
    PRINT3(x, y, z);
    
    x = y = z = -1;
    ++x && ++y || ++z; // bad syntax.
    PRINT3(x, y, z)
    
    x = y = z = -1;
    ++x || ++y && ++z; // bad syntax.
    PRINT3(x, y, z);
    
    x = y = z = -1;
    ++x && ++y && ++z;
    PRINT3(x, y, z);
}