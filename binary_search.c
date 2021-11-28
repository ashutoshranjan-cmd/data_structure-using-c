// this is the binary search program using c language
#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Enter the size of the array \n");
    scanf("%d", &a);
    int array[a];
    printf("Enter the elements inside the array \n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("The entered elements are given below \n");
    for (int i = 0; i < a; i++)
    {
        printf("%d\n", array[i]);
    }
    // commands for the binary search
    int first, last, mid, num;
    printf("Enter the elements which you want to search \n");
    scanf("%d", &num);
    first = 0;
    last = (a - 1);
    while (first <= last)
    {
        mid = first + last / 2;

        if (array[mid] == num)
        {
            printf("The number is founded successfully\n");
            break;
        }
        else if (array[mid] < num)
        {
            first = mid + 1;
        }
        else
        {
            last = mid -1;
        }
    }
    getch();
    return 0;
}