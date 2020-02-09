#ifndef FIBONACCI_H
#define FIBONACCI_H
#include <chrono>

class fibonacci
{

public:
    fibonacci();
    long long get_result(short n);
    long double get_time();

private:
    long double op_time = 0;
    long long r;
    bool if_error = false;

    long long solve(short n, std::chrono::time_point<std::chrono::steady_clock> x);
};

#endif // FIBONACCI_H
