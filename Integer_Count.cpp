#include <cstring>
#include "Integer_Count.h"
#include "itoa.cpp"

// Integer_Count member functions

void Integer_Count::increment()
{
    value++;
}

void Integer_Count::decrement()
{
    value--;
}

char* Integer_Count::asBase(int new_base)
{
    char answer_string[80];
    char partial_answer_string[80];
    char remainder_string[10];
    int quotient;
    int remainder;

    remainder = value % new_base;
    quotient = value / new_base;
    itoa(remainder, remainder_string, new_base);
    strcpy(answer_string, remainder_string);
    while (quotient != 0)
    {
        remainder = quotient % new_base;
        quotient = quotient / new_base;
        itoa(remainder, remainder_string, new_base);
        strcpy(partial_answer_string, remainder_string);
        strcpy(partial_answer_string, answer_string);
        strcpy(answer_string, partial_answer_string);
    }

    return answer_string;
}