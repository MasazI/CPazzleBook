//
// Created by newton on 17/02/19.
//
#include "2_1.h"
#define PRINT(format,x) printf(#x " = %" #format "\n",x)

int integer = 5;
char character = '5';
char *string = "5";

void func_2_1(){
    std::cout << "======= 2.1" << std::endl;
    PRINT(d,string); PRINT(d,character); PRINT(d,integer);
    std::cout << "------" << std::endl;
    PRINT(s,string); PRINT(c,character); PRINT(c,integer=53);
    std::cout << "------" << std::endl;
    PRINT(d, ('5'>5));

    {
        int x = -2;
        unsigned int ux = -2;
        std::cout << "------" << std::endl;
        PRINT(o, x); PRINT(o, ux);
        std::cout << "------" << std::endl;
        PRINT(d, x); PRINT(d, ux);
        std::cout << "------" << std::endl;
        PRINT(d, x/2); PRINT(d, ux/2);
        std::cout << "------" << std::endl;
        PRINT(o, x>>1); PRINT(o, ux>>1);
        std::cout << "------" << std::endl;
        PRINT(d, x>>1); PRINT(d, ux>>1);
    }
}
