#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"amir", "setareh", "mark", "amoo esi", "vancouver", "foxbar", "marlowe"};

    for (int i = 0; i < 7; i++)
    {
        if (strcmp(names[i], "ron") == 0)
        {
            printf("found %s\n", names[i]);
            return 0;
        }
    }
    printf("not found...\n");
    return 1;
}