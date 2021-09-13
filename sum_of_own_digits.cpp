// Use C++17 standard

#include <iostream>
#include <iterator> // for std::size()
#include <vector>

std::vector<int> splitInteger(int integer)
{   // will take an integer as input, will return vector as output
    // each element of vector is one digit of the integer

    // What this loop does is to take the ones place digit using % 10, then divide the 
    // integer by 10. the decimals get truncated and new ones' place digit is formed
    // we repeat this procedure until the integer becomes zero.
    
    std::vector<int> vector;
    do
    {
        int element{ integer % 10 };
        vector.push_back(element); // add element at the end of components

        integer = integer / 10;
    }
    while(integer != 0);

    return vector;
}

int sumOfVectorElements(std::vector<int> vector)
{
    // calulates the sum of elements of a vector
    int sum{ 0 };

    for (int count{0}; count < std::size(vector); ++count)
    {
        sum += vector[count];
    }

    return sum;
}

int main()
{
    int num_inputs{};
    std::cin >> num_inputs;

    std::vector<int> output; // this vector contains the elements as sum of digits of integers

    for (int count{0}; count < num_inputs; ++count)
    {
        int num{};
        std::cin >> num;

        output.push_back(sumOfVectorElements(splitInteger(num)));
    }

    for (int count{0}; count < std::size(output); ++count)
    {
        std::cout << output[count] <<'\n';
    }

    return 0;
}