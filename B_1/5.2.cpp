#include <iostream>
#include <iomanip>

using namespace std;

int quick_cmp = 0;
int quick_swp = 0;
 
int select_cmp = 0;
int select_swp = 0;

template <typename T>
void printArr(T* arr, int len)
{
    for (int i = 0; i < len; i++)
        cout << arr[i] << " ";
}

template <typename T>
void mintomax(T* arr, int len)
{
    for (int i = 0; i < len; i++)
        arr[i] = i;
}

template <typename T>
void maxtomin(T* arr, int len)
{
    for (int i = len-1; i >= 0; i--)
        arr[i] = i;
}

template <typename T>
void randArr(T* arr, int len)
{
    for (int i = 0; i < len; i++)
        arr[i] = rand() % 1000;
}

template <typename T>
void quickSort(T* a, long N) {

    long i = 0, j = N;\
    int temp, p;
    p = a[N / 2];

    do {
        quick_cmp++;
        while (a[i] < p)
        {
            i++;
            quick_cmp++;
        }

        quick_cmp++;
        while (a[j] > p)
        {
            j--;
            quick_cmp++;
        }

        quick_cmp++;
        if (i <= j) 
        {
            swap(a[i], a[j]);
            i++;
            j--;
            quick_cmp++;
            quick_swp++;
        }

        quick_cmp++;
    } while (i <= j);

    quick_cmp++;
    if (j > 0)
        quickSort(a, j);
    quick_cmp++;
    if (N > i)
        quickSort(a + i, N - i);
}

template <typename T>
void selectSort(T* arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        select_cmp++;
        int min_pos = i;

        for (int j = i; j < len; j++)
        {
            if (arr[j] < arr[min_pos])
                min_pos = j;
            select_cmp += 2;
        }
        select_swp++;
        swap(arr[i], arr[min_pos]);
    }
}

int main24()
{
    int power = 100;
    for (int i = 1; i < 6; i++)
    {
        int len = (int)pow(100, i);
        int* array = new int[len];

        cout << len << " :" << endl;
        cout << "Min to max:\n";
        mintomax(array, len);
        selectSort(array, len);
        printArr(array, len);
        cout << setw(3) << "s_swap: " << select_swp << " " << setw(3) << "s_comp: " << select_cmp;

        cout << endl;

        mintomax(array, len);
        quickSort(array, len - 1);
        printArr(array, len);
        cout << setw(3) << "q_swap: " << quick_swp << " " << setw(3) << "q_comp: " << quick_cmp;

        cout << "\n\n\n";

    }
    
	return 0;
}