#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool plus = false;
    double pi = 1;
    int piIncrement = 3;
    int terms;

    printf("Enter amount of terms to calculate: ");
    scanf("%d", &terms);

    for (int i = 1; i <= terms; i += 1)
    {
        switch(plus)
        {
            case false:
                pi -= (double)1/piIncrement;
                printf("- 1 / %d = %f \n", piIncrement, pi);
                break;
            case true:
                pi += (double)1/piIncrement;
                printf("+ 1 / %d = %f \n", piIncrement, pi);
                break;
        }
        plus = !plus;
        piIncrement += 2;
    }

    printf("%f * 4 =\n%f\n", pi, pi * 4);
}
