// Created By: Vineeth Yeevani
// Date: 10/10/2018
// Description: program that calls reverse

#include <stdio.h>
#include <reverse.h>

int main()
{
    char in[] = "testtest";
    reverse(in, in, sizeof(in) - 1);
    puts(in);
    return 0;
}
