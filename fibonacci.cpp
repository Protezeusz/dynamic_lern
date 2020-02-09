#include "fibonacci.h"

fibonacci::fibonacci()
{

}

unsigned long long fibonacci::solve(short n)
{

    if(n<=1)
        return n;
    else
        return solve(n-2)+solve(n-1);


}

unsigned long long fibonacci::get_result(short n)
{
    auto start_time = std::chrono::steady_clock::now();
    r = solve(n);
    auto end_time = std::chrono::steady_clock::now();
    op_time = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time).count();

    return r;
}

double fibonacci::get_time()
{
    return op_time;
}
