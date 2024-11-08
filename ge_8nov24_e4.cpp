#include <iostream>
#include <bitset>

/**
 * 
 * 
 * This program initializes a 32-bit bitset with all bits set to 0.
 * It then prompts the user to enter a bit position, sets the bit at 
 * the specified position, and prints the resulting bitset.
 * 
 * 
 */

int main() {
    
    int bit_position;  // Variable to store the user input for bit position
    
    // Prompt the user to enter the bit position
    std::cout << "Enter bit position \n";
    std::cin >> bit_position;  // Read the bit position from standard input

    // Initialize a 32-bit bitset with all bits set to 0
    std::bitset<32> bits(0);

    // Set the bit at the specified position
    bits.set(bit_position);

    // Output the modified bitset
    std::cout << "BitEnabled word: " << bits << std::endl;
   
    return 0;  
}
