#include "Task.h"
#include <math.h>
#include <iostream>
using namespace std;
Task::Task()
{
    //ctor
}

Task::~Task()
{
    //dtor
}

Task::Task(double x, double y, double z)
:x(x), y(y), z(z)
{
    this->Result1();
}

void Task::Result1()
{
    c = ((pow(x, y + 1) + exp( y -1)) / (1 + x * fabs(y - tan(z)))) * (1 + fabs(y - x))
    + ((fabs(y - x) * fabs(y -x)) / 2) - (pow(fabs(y - x), 3) / 3);
}
