#include <iostream>
#include <math.h>

int main() {
    char c = 'g';
    int a = 250;
    std::cout<<(c/a)<<std::endl;
    std::cout<<c/float(a)<<std::endl;
    c = c/a;
    std::cout<<c<<std::endl;
    c = c*a;
    std::cout<<c+a<<std::endl;
    std::cout<<c-a<<std::endl;
    std::cout<<c*a<<std::endl;

    return 0;
}