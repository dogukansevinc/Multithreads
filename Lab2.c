#include <stdio.h>

/* sort function */
void sort_numbers(int numbers[], int counter)
{
    int temporary, i, j, k;
    for (j = 0; j < counter; ++j)
    {
        for (k = j + 1; k < counter; ++k)
        {
            if (numbers[j] > numbers[k])
            {
                temporary = numbers[j];
                numbers[j] = numbers[k];
                numbers[k] = temporary;
            }
        }
    }

    printf("Sorted Numbers:\n");

    for (i = 0; i < counter; ++i)
        printf("%d\n", numbers[i]);
}

/* Main function to define and get the values */
void main()
{
    int i, counter, number[20];
    /* Display to comment to get the count of numbers from the user */
    printf("Enter the count of number to sort:");
    /*get the count from the user */
    scanf("%d", &counter);

    /*Display to comment to get the count of numbers from the user */
    printf("\nEnter the numbers to Sort one bye one:");

    /* get the values from the user one by one */
    for (i = 0; i < counter; ++i)
        scanf("%d", &number[i]);

    /* calling the sort function */
    sort_numbers(number, counter);
}