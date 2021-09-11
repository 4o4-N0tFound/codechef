// Program that takes many integers as input and check their divisibility with another integer

#include <iostream>

int main()
{
    int num_input{}, divisor{};         // num_input is the number of integers we want
    std::cin >> num_input >> divisor;   

    int num_divisible{ 0 };             // variable storing the number of integers divisible by divisor

    for (int count{ 1 }; count <= num_input; ++count)
    {
        int temp_input{};             // temporary variable for input and checking divisibility by divisor
        std::cin >>temp_input;
        
        if (temp_input % divisor == 0)      // divisibility checker
        {
            num_divisible++;
        }
    }

    std::cout << num_divisible << '\n';

    return 0;
}