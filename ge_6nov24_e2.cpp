// Program to enable a particular bit in a 32-bit number
 
/* LOGIC 

    -> bitwise left shift 1 by the value of position of the bit to be enabled
    -> perform OR logic operation with the number whose bit position is to be enabled

*/

# include<iostream>
using namespace std;

int main()
{
    int bit_position, value, bit_enabled_value;

    cout << "Enter bit position \n";
    cin >> bit_position;
    cout << "Enter value \n";
    cin >> value;

    bit_enabled_value = ( 1<< (bit_position-1) ) | value ;
    cout << bit_enabled_value;

    return 0;
}