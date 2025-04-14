//A simple command line calculator using C
#include<stdio.h>
int main()
{
    //declaring variables
    int n1, n2, choice, result;

    //prompting user for input of 2 variables to perform calculation on 
    printf("Enter the first number:\n");
    scanf("%d",&n1);

    printf("Enter the second number:\n");
    scanf("%d",&n2);

    //asking user to select an operator of choice
    printf("Select Operation:\n");
    printf("1. Addition(+)\n");
    printf("2. Subtraction(-)\n");
    printf("3. Multiplication(*)\n");
    printf("4. Division(/)\n");
    label: //label in case of invalid input
    printf("Enter Choice (1/2/3/4) : ");
    scanf("%d",&choice);

    //switch case for choosing the operator 
        switch (choice)
        {
        case 1: //addition
            result = n1 + n2;
            printf("Result: %d",result); 
            break;
        case 2: //subtraction
            result = n1 - n2;
            printf("Result: %d",result);
            break;
        case 3: //multiplication
            result = n1 * n2;
            printf("Result: %d",result);
            break;
        case 4: //division
                if(n2 == 0)
                    printf("Divide by ZERO Error\n");
                else
                {
                    result = n1 / n2;
                    printf("Result: %d",result);
                }
            break;
        
        default: //default case for invalid operator case
            printf("Enter a valid operator!!!");
            goto label;
            break;
        }
    return 0; //end
}