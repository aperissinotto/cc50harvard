#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int altura = 0;
    while ((altura < 1) || (altura > 8))
    {
        altura = get_int("Altura da pirame? \n");
    }

    int alturax = (altura * 2) + 1;

    printf("%i %i\n", altura, alturax);

    for (int i = 1 ; i <= altura ; i++)
    {
        for (int j = 1 ; j <= alturax ; j++)
        {
            if (j <= altura && i + j > altura)
            {
                printf("#");
            }
            else if (j > altura + 1 && j - i <= alturax - altura)
            {
                printf("@");
            }
            else
            {
                printf("!");
            }

        }
        printf("\n");
    }
}
