#include <iostream>
#include <Windows.h>


int main()
{
    std::cout << "You have no controll" << std::endl;
    BlockInput(true);
    Sleep(5000);
    BlockInput(false);
    std::cout << "Blast I lost my controll\n";
    Sleep(5000);
}