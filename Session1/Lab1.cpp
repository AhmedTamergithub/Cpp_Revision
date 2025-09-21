#include <iostream>
#include <stdio.h>

/*
This file contains the task (C Basics) of session1, found in Slide 20

*/

int main() {
    /*
    Code1:
    unsigned char x=-1;
    printf("%d",x);
    
    Answer = 255
    Explanation: In C++, an unsigned char can hold values from 0 to 255. When you assign -1 to an unsigned char, it wraps around to the maximum value, which is 255.
    255 in binary is 11111111, which is the two's complement representation of -1 in an 8-bit system.
    */

    //-------------------------------------------------------------------------------------------
    /*
    Code2:
    char x=255;
    printf("%d",x);
     
    Original number:11111111
    2's Complement:
    Firstly,It is negative number as MSB is -1, so we take 2's complement to get its magnitude.
    Step1: Invert all bits: 00000000
    Step2: Add 1 to the inverted bits: 00000001
    Answer=-1
    Explanation: In C++, a char is typically a signed type by default, meaning it can hold values from -128 to 127. When you assign 255 to a signed char, it exceeds the maximum value of 127 and wraps around to -1.
    */
    //-------------------------------------------------------------------------------------------
    /*
    Code3:
    char x=128;

    print("%d",x);

    10000000
        1-It is a negative number as the MSB is 1, indicating a signed value. 
        In Two's Complement representation, 10000000 corresponds to -128.
    */
    /*
    Code 4:
    char x=258;
    printf("%d",x);
    binary representation=100000010
    When taking only the 8 least significant bits, we get 00000010
    since char is 8-bit signed data type by default, then this is a positive number as MSB =0, which its value=2
    */
 


    return 0;
}



