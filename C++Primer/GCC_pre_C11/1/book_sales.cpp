// This program was designed for manage book saling 

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total;                              // define a Sales_item class who's name is total
    if (std::cin >> total)                         // determine whether or not EOF and initial a class total
    {
       Sales_item temp;                            // define a temporary  Sale_item class which name is temp 
       while (std::cin >> temp)                    // input class temp
       {
           if(total.isbn() == temp.isbn())         // get class temp's attribution isbn and judge
               total += temp;
           else
           {
               std::cout << total << std::endl;    
               total = temp;
           }

       }
        std::cout << total << std::endl;
    }
    else
    {
        std::cout << "no data!" << std::endl;
        return -1;
    }

    return 0;
}