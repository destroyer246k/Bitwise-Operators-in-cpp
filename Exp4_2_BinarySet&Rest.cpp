// Patel Vishwas
// 24070123072
// A3
#include <iostream>
using namespace std;
int main()
{
    int a = 345; //101011001
    int bit_set,bit_reset,set_bit,reset_bit;
    cout << "Enter Bit to be set:";
    cin >> bit_set;
    cout << "Enter Bit to be reset";
    cin >> bit_reset;
    set_bit = a|(1 << bit_set);
    reset_bit = a&(~(1<< bit_reset));
    cout << "Set bit "<<set_bit<<endl;
    cout << "reset bit "<< reset_bit<<endl;
   
    return 0;
}
/*
output:
Enter Bit to be set:1
Enter Bit to be reset:8
Set bit 347
reset bit 89
*/