#include <iostream>

void bubbleSort(int array[], int n);
void printArray(int array[], int n);
void swap(int& a, int& b);

int main()
{
    const int array_size = 50;
    int array_to_be_sorted[array_size] = {14,65,63,1,54,89,84,9,98,57,71,18,21,84,69,28,11,83,13,42,64,58,78,82,13,9,96,14,39,89,40,32,51,85,48,40,23,15,94,93,35,81,1,9,43,39,15,17,97,52};
    std::cout << "Unsorted" << std::endl;
    printArray(array_to_be_sorted, array_size);
    bubbleSort(array_to_be_sorted, array_size);
    std::cout << "Bubble Sort" << std::endl;
    printArray(array_to_be_sorted, array_size);
    system("pause");
    return 0;
}

void bubbleSort(int array[], int n)
{
    //Bail for single element or invalid indices
    if (n < 2) { return; }
    //Track if list is sorted
    bool sorted = false; // Set to false to ensure the while loop starts up
    while (!sorted)
    {
        sorted = true;
        for (int i = 0; i < n - 1; ++i)
        {
            if (array[i] < array[i + 1])
            {
                swap(array[i], array[i + 1]);
                sorted = false;
            }
        }
    }
}

void printArray(int array[], int n)
{
    int count = 0;
    for (int i = 0; i < n/5; i++)
    {
        for (int j = 0; j < n / 10; j++)
        {
            std::cout << array[count] << " ";
            count++;
        }
        std::cout << std::endl;
    }
}
void swap(int& a, int& b)
{

}