#include "fibonacci.h"
#include "fibonacci_dynamic.h"
#include <iostream>

int main()
{
    short x=1, n;
    fibonacci f;
    fibonacci_dynamic fd;

    while(x)
    {
        std:: cout << "Fibonacci ";
        std::cin >> n;
        if(n>93)
        {
            n=93;
        }

        system("CLS");

        std:: cout << "Fibonacci " << n;

        std:: cout << "\nrecursion result: " << f.get_result(n);
        std:: cout << "\ntime: " << f.get_time() << "ns";

        std:: cout << "\ndynamic result: " << fd.get_result(n);
        std:: cout << "\ntime: " << fd.get_time() << "ns";
        std:: cout << "\n";
    }

    return 0;
}
