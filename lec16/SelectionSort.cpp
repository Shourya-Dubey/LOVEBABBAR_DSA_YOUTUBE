#include <iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minElement = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minElement])
            {
                minElement = j;
            }
        }
        swap(arr[minElement], arr[i]);
    }
}
main()
{
    int arr[5] = {7, 5, 4, 1, 2};
    selectionSort(arr, 5);
    return 0;
}