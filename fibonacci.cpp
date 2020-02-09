#include "fibonacci.h"

fibonacci::fibonacci()
{

}

//'std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long long int, std::ratio<1ll, 1000000000ll> > >'
//'std::chrono::time_point<std::chrono::_V2::system_clock, std::chrono::duration<long long int, std::ratio<1ll, 1000000000ll> > >')
//'std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long long int, std::ratio<1ll, 1000000000ll> > >&)'

long long fibonacci::solve(short n, std::chrono::time_point<std::chrono::steady_clock> x)
{

    auto x_time = std::chrono::steady_clock::now();
    if(std::chrono::duration_cast<std::chrono::seconds>(x_time - x).count()<10)
        if(n<=1)
            return n;
        else
            return solve(n-2,x)+solve(n-1,x);
    else
        if_error = true;
        return 0;


}

long long fibonacci::get_result(short n)
{
    if_error = false;

    auto start_time = std::chrono::steady_clock::now();
    r = solve(n, start_time);
    auto end_time = std::chrono::steady_clock::now();
    op_time = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time).count();

    if(if_error)
    {
        op_time = -1;
        return -1;
    }

    return r;
}

long double fibonacci::get_time()
{
    return op_time;
}
