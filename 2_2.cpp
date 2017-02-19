//
// Created by newton on 17/02/19.
//

#include "2_2.h"

#define PR(x) printf(#x " = %.8g\t",(double)x)
#define NL putchar('\n')
#define PRINT4(x1,x2,x3,x4) PR(x1); PR(x2); PR(x3); PR(x4); NL;

void func_2_2() {
    std::cout << "======= 2.2" << std::endl;
    double d;
    float f;
    long l;
    int i;

    i = l = f = d = 100/3; PRINT4(i,l,f,d);
    d = f = l = i = 100/3; PRINT4(i,l,f,d);
    i = l = f = d = 100/3.; PRINT4(i,l,f,d);
    d = f = l = i = (float)100/3; PRINT4(i,l,f,d);

    i = l= f = d =(double)(100000/3); PRINT4(i,l,f,d);
    d = f = l = i = 100000/3; PRINT4(i,l,f,d);
}

