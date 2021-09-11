#include <iostream>

int main()
{
    int x{}; //amount of cash pooja wishes to withdraw, USD
    double y{}; //pooja's initial account balance, USD

    std::cin >> x >> y;

    double bank_charges{ 0.5 }; // in US dollars

    double total_transaction{ x + bank_charges };

    if ( x%5 == 0 && total_transaction <= y )
    {        
        std::cout << y - total_transaction << '\n';           
    }
    else if ( x%5 != 0 && total_transaction <= y ) 
    {
        std::cout << y << '\n';
    }
    else
    {
        std::cout << y << '\n';
    }

    return 0;
}