//
//  1_1.cpp
//  CPuzzleBook
//
//  Created by masai on 2017/02/12.
//  Copyright (c) 2017年 masai. All rights reserved.
//

#include "1_1.h"

void _out(int x){
    std::cout << x << std::endl;
}

void func_1_1(){
    std::cout << "======= 1.1" << std::endl;
    int x;
    x = -3 + 4 * 5 -6;
    _out(x);
    
    x = 3 + 4 % 5 - 6;
    _out(x);
    
    x = -3 * 4 % -6 / 5;
    _out(x);
    
    x = (7 + 6) % 5 / 2;
    _out(x);
}