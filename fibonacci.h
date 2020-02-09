#ifndef FIBONACCI_H
#define FIBONACCI_H
#include <chrono>

class fibonacci
{

public:
    fibonacci();
    unsigned long long get_result(short n);
    double get_time();

private:
    double op_time = 0;
    unsigned long long r;

    unsigned long long solve(short n);
};

#endif // FIBONACCI_H
