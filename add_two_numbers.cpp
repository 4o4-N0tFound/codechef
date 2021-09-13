#include <iostream>

int main()
{
    int num_inputs{};
    std::cin >> num_inputs;

    int outputs[num_inputs]{};

    for (int count{0}; count < num_inputs; ++count)
    {
        int input_1{}, input_2{};
        std::cin >> input_1 >> input_2;

        outputs[count] = input_1 + input_2;
    }

    for (int count{0}; count < num_inputs; ++count)
    {
        std::cout << outputs[count] << '\n';
    }
    return 0;
}