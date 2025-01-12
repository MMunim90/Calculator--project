#include<stdio.h>
#include<math.h>

double modulus(int, int);
double modulus(int a, int b)
{
    if(b == 0)
    {
        fprintf(stderr, "\nInvalid Argument for Modulus");
        return NAN;
    }
    else
    {
        return a % b;
    }
}


double division(double, double);
double division(double x, double y)
{
    if(y == 0)
    {
        fprintf(stderr, "\nInvalid Argument for Division");
        return NAN;
    }
    else
    {
        return x / y;
    }
}


void menu();

void menu()
{
    printf("\n\n<|==============---------------------=============|>\n");
    printf("\nWelcome to Simple Calculator (Develop by MMunim)\n");
    printf("\nChoose one of the following options: ");

    printf("\n1. Add");
    printf("\n2. Subtract");
    printf("\n3. Multiply");
    printf("\n4. Divide");
    printf("\n5. Modulus");
    printf("\n6. Power");
    printf("\n7. Exit");
    printf("\n\nNow, enter your choice: ");
}


int main()
{
    int choice;
    double first, second, result;

    while(1)
    {
        menu();
        scanf("%d", &choice);

        if(choice == 7)
        {
            break;
        }

        if(choice<1 || choice>7){
            fprintf(stderr, "Invalid Menu Choice");
            continue;
        }

        printf("\nPlease enter the first number: ");
        scanf("%lf", &first);

        printf("\nNow enter the second number: ");
        scanf("%lf", &second);


        switch(choice)
        {
        case 1:
            result = first + second;
            break;
        case 2:
            result = first - second;
            break;
        case 3:
            result = first * second;
            break;
        case 4:
            result = division(first, second);
            break;
        case 5:
            result = modulus((int)first, (int)second);
            break;
        case 6:
            result = pow(first, second);
            break;
        }

        if(!isnan(result))
        {
            printf("\nResult of operation is: %.3lf", result);
        }
    };


    return 0;
}
