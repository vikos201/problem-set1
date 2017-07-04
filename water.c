#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("minutes: \n");
    int minutes = GetInt();
    int bottles = (12 * minutes);
    printf("bottles: %d\n", bottles);
}

