#include "fibonacci_dynamic.h"

Fibonacci_dynamic::Fibonacci_dynamic()
{
}

unsigned long long Fibonacci_dynamic::solve(short n)
{
    if(n>=v.size())
        get_new(n);

    return v[n];
}

void Fibonacci_dynamic::clear()
{
    v.clear();
    v.push_back(0);
    v.push_back(1);
}

void Fibonacci_dynamic::get_new(unsigned long long n)
{
    for(unsigned long long i = v.size(); i<=n; i++)
        v.push_back(v[i-2]+v[i-1]);
}

unsigned long long Fibonacci_dynamic::get_result(short n)
{
    clear();

    auto start_time =std::chrono::steady_clock::now();
    r = solve(n);
    auto end_time = std::chrono::steady_clock::now();
    op_time = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time).count();

    return r;
}

long double Fibonacci_dynamic::get_time()
{
    return op_time;
}
