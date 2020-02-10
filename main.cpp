#include "fibonacci.h"
#include "fibonacci_dynamic.h"
#include <iostream>

int main()
{
    short x=1, n;
    Fibonacci f;
    Fibonacci_dynamic fd;

    while(x)
    {
        std:: cout << "Fibonacci ";
        std::cin >> n;

        if(n>93)
        {
            n=93;
            std:: cout << "Max is " << n << "\n";
        }

        std:: cout << "Recursion result: " << f.get_result(n);
        long double t =f.get_time();

        if(t == -1)
            std:: cout << "\nTimed out";
        else
            std:: cout << "\nTime: " << f.get_time() << " ns";

        std:: cout << "\nDynamic result: " << fd.get_result(n);
        std:: cout << "\nTime: " << fd.get_time() << " ns";
        std:: cout << "\n\n";
    }

    return 0;
}
