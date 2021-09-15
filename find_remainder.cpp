#include <iostream>
#include <vector>

int giveRemainder(int num1, int num2)
{
    return num1 % num2;
}

int main()
{
    int num_inputs{};
    std::cin >> num_inputs;

    std::vector<int> output;
    for (int count{0}; count < num_inputs; ++count)
    {
        int num1{}, num2{};
        std::cin >> num1 >> num2;

        output.push_back(giveRemainder(num1, num2));
    }

    for (auto & elem : output)
    {
        std::cout << elem << '\n';
    }

    return 0;
}