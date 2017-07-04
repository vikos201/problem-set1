#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
    printf("What hight do you need?, \n"); //We are asking users about input//
    
    height = GetInt();
    }
    while (height <= 0 || height > 23); //Do program run only while height less than 23. If not stop program//
    printf("Good boy:) \n");
}