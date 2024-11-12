// static casting
#include <iostream>

int main() {
    double a = 10.01;
    std::cout << "casted_a : " << static_cast<int>(a) << std::endl;  // casted to int type
    std::cout << "a        : " << a << std::endl;                    // double type
    return 0;
}
