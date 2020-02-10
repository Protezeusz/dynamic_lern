#include "fibonacci.h"

Fibonacci::Fibonacci()
{
}

long long Fibonacci::solve(short n, std::chrono::time_point<std::chrono::steady_clock> x)
{
    auto x_time = std::chrono::steady_clock::now();
    if(std::chrono::duration_cast<std::chrono::seconds>(x_time - x).count()<10)
        if(n<=1)
            return n;
        else
            return solve(n-2,x)+solve(n-1,x);
    else
        Timed_out = true;

    return 0;
}

long long Fibonacci::get_result(short n)
{
    Timed_out = false;

    auto start_time = std::chrono::steady_clock::now();
    r = solve(n, start_time);
    auto end_time = std::chrono::steady_clock::now();
    op_time = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time).count();

    if(Timed_out)
    {
        op_time = -1;
        return -1;
    }

    return r;
}

long double Fibonacci::get_time()
{
    return op_time;
}
