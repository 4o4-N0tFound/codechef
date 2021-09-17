#include <iostream>
#include <vector>

int sumFirstAndLastDigit(int input)
{
    int num1{ input % 10}; // takes the last digit

    int num2{0};
    do
    {
        num2 = input % 10;
        input /= 10;
    }
    while (input != 0);

    return num1 + num2;
}

int main()
{
    int num_inputs{};
    std::cin >> num_inputs;

    std::vector<int> output{};

    for (int count{0}; count < num_inputs; ++count)
    {
        int input{};
        std::cin >> input;

        output.push_back(sumFirstAndLastDigit(input));
    }

    for (auto & elem : output)
    {
        std::cout << elem << '\n';
    }

    return 0;
}