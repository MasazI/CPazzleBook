//
//  1_2.cpp
//  CPuzzleBook
//
//  Created by masai on 2017/02/12.
//  Copyright (c) 2017年 masai. All rights reserved.
//

#include "1_2.h"

#define PRINTX std::cout<<x<<std::endl

void func_1_2(){
    std::cout << "======= 1.2" << std::endl;
    int x = 2, y, z;
    x *= 3 + 2; PRINTX;
    x *= y = z = 4; PRINTX;
    x = y == z; PRINTX;
    x == ( y = z ); PRINTX; // bad syntax.
}
