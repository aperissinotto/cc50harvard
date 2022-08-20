#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int altura = 0;
    while ((altura < 1) || (altura > 8))
    {
        altura = get_int("Altura da pirame? \n");
    }

    for (int i = 1 ; i <= altura ; i++)
    {
        for (int j = 1 ; j <= altura ; j++)
        {
            if (j + i > altura)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }
}
