#include <iostream>

int main()
{
    int num1{};
    std::cin >> num1;

    int max_divisor{ 10 };
    int min_divisor{ 1 };
    
    int divisor{max_divisor};
    
    while (divisor >= min_divisor)
    {
        if (num1 % divisor == 0)
        {
            std::cout << divisor << '\n';
            return 0;
        }
        --divisor;
    }

    return 0;
}