#include <iostream>

int main(){
    int a = 1;
    int b = 2;
    // std::cout << "Hello World";

    // Swap 2 variables values without numbers
    int temp = a;
    a = b;
    b = temp;

    std::cout << a;
    std::cout << b;
    return 0;
}