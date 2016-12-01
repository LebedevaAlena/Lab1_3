#ifndef TASK_H
#define TASK_H


class Task
{
public:
    Task();
    Task(double x, double y, double z);
    virtual ~Task();

    double Set_d(double x, double y, double z);
    void Result1();
protected:

private:
    double x, y, z, h;
    friend void printRes(Task &res);
};

#endif // TASK_H
