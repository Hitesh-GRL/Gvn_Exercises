// Program to enable a particular bit in a 32-bit number using bitset

#include <iostream>
#include <bitset>

int main() {
    
    int bit_position;
    std::cout << "Enter bit position \n";
    std::cin >> bit_position;

    std::bitset<32> bits(0);  // Initialize bitset with the 32-bit number
    bits.set(bit_position);  // setting the bit at the specified position
    
    std::cout << "enabled word: " << bits << std::endl;
   
    return 0;
}
