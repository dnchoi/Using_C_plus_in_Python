#include "simple.h"

simple::simple(/* args */)
{
}

simple::~simple()
{
}

int simple::add(int a, int b){
    printf("called add\n");
    return a+b;
}

void simple::sub(double a, double b, double* ret){
    printf("called sub\n");
    *ret=a-b;
}

int simple::sum(int* arr, int sz){
    printf("called sum\n");
    int s=0;
    for (int i=0; i<sz; i++)
        s += i;
    return s;
}

extern "C"{
    simple* sm(){
        return new simple();
    }

    int C_Add(simple * f, int a, int b){
        return f->add(a, b);
    }

    void C_Sub(simple * f, double a, double b, double* ret){
        return f->sub(a, b, ret);
    }

    int C_Sum(simple * f, int* a, int b){
        return f->sum(a, b);
    }
}