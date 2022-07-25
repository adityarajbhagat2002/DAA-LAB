#include <iostream>

using namespace std;

void bubbleSort(int *a, int n)
{
    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
    
    int itr = 0, swaps = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            itr++;
            if (a[i] < a[j])
            {
                swap(a[i], a[j]);
                swaps++;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
    cout << "Iterations: " << itr << "\n";
    cout << "Swaps: " << swaps << "\n";
}

void selectionSort(int *a, int n)
{
    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";

    int itr = 0, swaps = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            itr++;
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
                swaps++;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
    cout << "Iterations: " << itr << "\n";
    cout << "Swaps: " << swaps << "\n";
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int *a = new int[n];
    int *b = new int[n];
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i], b[i] = a[i];
    cout << "\nBubble Sort: \n";
    bubbleSort(a, n);
    cout << "\nSelection Sort: \n";
    selectionSort(b, n);
    return 0;
}
