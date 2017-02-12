//
//  1_5.cpp
//  CPuzzleBook
//
//  Created by masai on 2017/02/12.
//  Copyright (c) 2017年 masai. All rights reserved.
//

#include "1_5.h"

#define PRINT(int) std::cout<<#int<<"="<<int<<std::endl

void func_1_5(){
    std::cout << "======= 1.5" << std::endl;
    int x=1, y=1, z=1;
    x += y += z;
    int tmp = x < y ? y : x;
    PRINT(tmp);

    tmp = x < y ? x ++ : y ++;
    PRINT(tmp);

    tmp = z += x < y ? x ++ : y ++;
    PRINT(tmp);

    x = 3; y = z = 4;
    tmp = (z >= y >= x) ? 1 : 0; // bad syntax.
    PRINT(tmp);
    
    tmp = (z >= y && y >= x);
    PRINT(tmp);
}

