#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("missing arguments\n");
        return 1;
    }

    printf("hello, %s\n", argv[1]);
    return 0;
}