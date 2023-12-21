
// Function to find the maximum number in an array
#include <stdio.h>
int find_max(int arr[], int size)
{
    // Check if the array is empty
    if (size <= 0) 
    {
        printf("Array is empty\n");
        return -1; // Assuming -1 as an indication of error or an invalid result
    }

    // Initialize max_num with the first element of the array
    int max_num = arr[0];

    // Iterate through the array to find the maximum number
    for (int i = 1; i < size; i++) 
    {
        if (arr[i] > max_num)
        {
            max_num = arr[i];
        }
    }

    return max_num;
}

int main() 
{
    // Example usage
    int input_array[] = {12, 45, 78, 23, 56, 89, 34};
    int size = sizeof(input_array) / sizeof(input_array[0]);

    int result = find_max(input_array, size);

    if (result != -1)
    {
        printf("The maximum number in the array is: %d\n", result);
    }

    return 0;
}
