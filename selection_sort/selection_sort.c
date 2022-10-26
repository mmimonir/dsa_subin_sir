// Selection Sort Code in C

#include <stdio.h>

int selection_sort(int A[], int size)
{
    int i, j, min, temp;
    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (A[j] < A[min])
            {
                min = j;
            }
        }
        temp = A[i];
        A[i] = A[min];
        A[min] = temp;
    }
    return 0;
}

// function to print an array
void printArray(int array[], int size)
{
    // for (int i = size - 1; i > 0; i--) decreasing order
    for (int i = 0; i < size; ++i) // acending order
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

int main(void)
{
    int A[] = {3, 4, 5, 6, 7, 8, 9, 100, 99, 90, 80, 65, 70, 95, 85, 75, 60, 55, 50, 45, 40, 35, 30, 25, 20, 15, 10, 1, 2};
    int size = sizeof(A) / sizeof(A[0]);
    selection_sort(A, size);
    printf("Sorted array in Acsending Order:\n");
    printArray(A, size);
    return 0;
}