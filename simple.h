#ifndef __SIMPLE_H__
#define __SIMPLE_H__

#include <stdio.h>


class simple
{
private:
    /* data */
public:
    simple(/* args */);
    ~simple();

    int add(int a, int b);
    void sub(double a, double b, double *ret);
    int sum(int *arr, int sz);
};

#endif // __SIMPLE_H__