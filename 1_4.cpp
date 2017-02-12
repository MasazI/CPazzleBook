//
//  1_4.cpp
//  CPuzzleBook
//
//  Created by masai on 2017/02/12.
//  Copyright (c) 2017年 masai. All rights reserved.
//

#include "1_4.h"

#define PRINT(int) std::cout<<#int<<" = "<<int<<std::endl;

void func_1_4(){
    std::cout << "======= 1.4" << std::endl;
    int x, y, z;
    x = 03, y = 02, z = 01;
    int tmp = x | y & z; // bad syntax.
    PRINT(tmp);
    tmp = x | (y & ~ z);
    PRINT(tmp)
    tmp = x ^ y & ~z;
    PRINT(tmp)
    tmp = x & y && z;
    PRINT(tmp)
    
    x = 1, y = -1;
    tmp = !x | x;
    PRINT(tmp)
    tmp = ~ x | x;
    PRINT(tmp)
    tmp = x ^ x;
    PRINT(tmp)
    x <<= 3; PRINT(x)
    y <<= 3; PRINT(y)
    y >>= 3; PRINT(y) // bad calculate.
}