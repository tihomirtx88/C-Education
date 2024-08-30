void reverse_array(int *arr, int size)
{
    int *start = arr;
    // [1,2,3,4]
    int *end = arr + size - 1;
    while (start < end)
    {
        // swap elements pointed to by start and end pointers
        int temp = *start;
        *start = *end;
        *end = temp;

        // Move the pointers towards the center
        start++;
        end--;
    }
}

