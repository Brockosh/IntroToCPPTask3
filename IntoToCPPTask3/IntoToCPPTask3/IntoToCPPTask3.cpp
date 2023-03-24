#include <iostream>
#include"Country.h"

int main()
{
    France* france = new France;

    std::cout << france->priceIncludingTip(100) << std::endl;
    delete france;
}


