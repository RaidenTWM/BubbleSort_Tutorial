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
}
void printArray(int array[], int n)
{
}
void swap(int& a, int& b)
{

}