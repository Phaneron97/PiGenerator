#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool plus = false;                      //determines add (+) or substract (-)
    double pi = 1;                          //to use Leibniz's formula, start formula with 1
    int piIncrement = 3;                    //3-5-7-9 (Leibniz's formula)
    int terms;                              //times to calculate Pi, the more terms, the more accurate Pi is calculated

    printf("Enter amount of terms to calculate: ");
    scanf("%d", &terms);                    //using %d to get integer, other values like strings are still allowed and will still work (no clue why)

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
        plus = !plus;                       //set bool 'plus' to value that is not the existing value
        piIncrement += 2;                   //3-5-7-9-etc
    }

    printf("%f * 4 =\n%f\n", pi, pi * 4);   //using %f to display double
}
