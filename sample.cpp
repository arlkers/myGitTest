//2017/8/20
#include <iostream>
#include <ctime>
int main()
{
    time_t t;  
    time(&t);
    std::cout << "Hello Git!" << std::endl;
    std::cout << ctime(&t) << std::endl;
    return 0;
}
