#ifndef FIBONACCI_DYNAMIC_H
#define FIBONACCI_DYNAMIC_H
#include <chrono>
#include <vector>

class fibonacci_dynamic
{

public:
    fibonacci_dynamic();
    unsigned long long get_result(short n);
    long double get_time();

private:

    long double op_time = 0;
    unsigned long long r=0;
    std::vector<unsigned long long> v;

    void clear();
    unsigned long long solve(short n);
    void get_new(unsigned long long n);

};

#endif // FIBONACCI_DYNAMIC_H
