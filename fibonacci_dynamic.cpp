#include "fibonacci_dynamic.h"

fibonacci_dynamic::fibonacci_dynamic()
{
}

unsigned long long fibonacci_dynamic::solve(short n)
{
    if(n>=v.size())
        get_new(n);

    return v[n];
}

void fibonacci_dynamic::clear()
{
    v.clear();
    v.push_back(0);
    v.push_back(1);
}

void fibonacci_dynamic::get_new(unsigned long long n)
{
    for(unsigned long long i = v.size(); i<=n; i++)
        v.push_back(v[i-2]+v[i-1]);
}

unsigned long long fibonacci_dynamic::get_result(short n)
{
    clear();

    auto start_time =std::chrono::steady_clock::now();
    r = solve(n);
    auto end_time = std::chrono::steady_clock::now();
    op_time = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time).count();

    return r;
}

long double fibonacci_dynamic::get_time()
{
    return op_time;
}
