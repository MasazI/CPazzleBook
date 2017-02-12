//
//  1_3.cpp
//  CPuzzleBook
//
//  Created by masai on 2017/02/12.
//  Copyright (c) 2017年 masai. All rights reserved.
//

#include "1_3.h"

#define PRINT(int) std::cout << int << std::endl

void func_1_3(){
    std::cout << "======= 1.3" << std::endl;
    int x, y, z;
    x = 2; y = 1; z = 0;
    x = x && y || z; PRINT(x); // bad syntax.
    int tmp = x || !y && z; // bad syntax.
    PRINT(tmp);
    
    x = y = 1;
    z = x ++ -1; PRINT(x); PRINT(z);
    z += - x ++ + ++ y; PRINT(x); PRINT(z);
    z = x / ++ x; PRINT(z); // bad syntax.
}
