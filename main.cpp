#include <iostream>
#include <math.h>
#include "Task.h"
using namespace std;

int main()
{
    Task a(2.444, 0.869 * pow(10, -2), -0.13 * pow(10, 3));
    a.Result1();
    printRes(a);
    return 0;
}
