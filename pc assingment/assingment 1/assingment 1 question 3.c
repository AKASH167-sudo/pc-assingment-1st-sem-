#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_SIZE 1000000

// Swap functions
void swap_int(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_float(float *a, float *b)
{
    float temp = *a;
    *a = *b;
    *b = temp;
}

void swap_mem(void* a, void* b, size_t n)
{
    char temp[256];
    if (n > sizeof(temp)) return;
    memcpy(temp, a, n);
    memcpy(a, b, n);
    memcpy(b, temp, n);
}

// Helper function to populate arrays with random values for int type
void populate_int_array(int* arr, size_t n)
{
    for (size_t i = 0; i < n; ++i)
    {
        arr[i] = rand();
    }
}

// Helper function to populate arrays with random values for float type
void populate_float_array(float* arr, size_t n)
{
    for (size_t i = 0; i < n; ++i)
    {
        arr[i] = (float)rand() / RAND_MAX;
    }
}

// Time swap function for int arrays
double time_swap_int(int* arr1, int* arr2, size_t n, void (*swap)(int*, int*))
{
    clock_t start = clock();
    for (size_t i = 0; i < n; ++i)
    {
        swap(&arr1[i], &arr2[i]);
    }
    clock_t end = clock();
    return (double)(end - start) / CLOCKS_PER_SEC;
}

// Time swap function for float arrays
double time_swap_float(float* arr1, float* arr2, size_t n, void (*swap)(float*, float*))
{
    clock_t start = clock();
    for (size_t i = 0; i < n; ++i)
    {
        swap(&arr1[i], &arr2[i]);
    }
    clock_t end = clock();
    return (double)(end - start) / CLOCKS_PER_SEC;
}

int main()
{
    size_t sizes[] = {1000, 10000, 100000, 1000000};
    size_t num_sizes = sizeof(sizes) / sizeof(sizes[0]);

    // Allocating arrays for different data types
    int* int_arr1 = (int*)malloc(MAX_SIZE * sizeof(int));
    int* int_arr2 = (int*)malloc(MAX_SIZE * sizeof(int));

    float* float_arr1 = (float*)malloc(MAX_SIZE * sizeof(float));
    float* float_arr2 = (float*)malloc(MAX_SIZE * sizeof(float));

    // Error checking
    if (!int_arr1 || !int_arr2 || !float_arr1 || !float_arr2)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Populate the arrays with random data
    srand(time(NULL)); // Initialize random seed
    populate_int_array(int_arr1, MAX_SIZE);
    populate_int_array(int_arr2, MAX_SIZE);

    populate_float_array(float_arr1, MAX_SIZE);
    populate_float_array(float_arr2, MAX_SIZE);

    // Run the timing experiment for different array sizes
    for (size_t i = 0; i < num_sizes; ++i)
    {
        size_t n = sizes[i];
        printf("Array size: %zu\n", n);

        // Time the integer swap function
        double time_taken_int = time_swap_int(int_arr1, int_arr2, n, swap_int);
        printf("Time taken for int swap: %.6f seconds\n", time_taken_int);

        // Time the float swap function
        double time_taken_float = time_swap_float(float_arr1, float_arr2, n, swap_float);
        printf("Time taken for float swap: %.6f seconds\n", time_taken_float);
    }

    // Free the memory
    free(int_arr1);
    free(int_arr2);
    free(float_arr1);
    free(float_arr2);

    return 0;
}
