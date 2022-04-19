#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("what is your name? \n");
    string age = get_string("what is your age? \n");
    printf("hello %s, you are %s\n", answer, age);
}