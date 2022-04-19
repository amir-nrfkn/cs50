#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long x = get_long("x: ");
    long y = get_long("y: ");
    if (x > y)
    {
        printf("x is bigger than y and sum is: %li\n", x + y);
    }

    else if (x < y)
    {
        printf("x is smaller than y and sum is: %li\n", x + y);
    }
    else
    {
        printf("x is equal to y and sum is: %li\n", x + y);
    }
}