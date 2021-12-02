#include <iostream>
#include <iomanip>
#include <chrono>

using namespace std;

uint64_t quick_cmp = 0;
uint64_t quick_swp = 0;
 
uint64_t select_cmp = 0;
uint64_t select_swp = 0;

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

void amount_reset() 
{
    select_swp = 0;
    select_cmp = 0;
    quick_swp = 0;
    quick_cmp = 0;
}

void amount_print(char choice)
{
    if (choice == 's')
        cout << setw(3) << "s_swap: " << select_swp << " " << setw(3) << "s_comp: " << select_cmp;
    else if (choice == 'q')
        cout << setw(3) << "q_swap: " << quick_swp << " " << setw(3) << "q_comp: " << quick_cmp;
}

uint64_t nanos()
{
    uint64_t ns = std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::high_resolution_clock::
        now().time_since_epoch()).count();
    return ns;
}

int main24()
{
    int power = 1000;
    int time_begin = 0;
    uint64_t start = 0;

    for (int i = 0; i < 5; i++)
    {
        amount_reset();

        int len = power * (int)pow(10, i);
        int* array = new int[len];

        cout << "---------------- " << len << " ----------------" << endl;
        cout << "Quick:\n";
        cout << "Min to max:\n";
            
            mintomax(array, len);
            start = nanos();
            quickSort(array, len - 1);
            //printArr(array, len);
            amount_print('q');
            cout << endl << "\t" << nanos() - start << " ns" << endl;
            amount_reset();
            
        cout << "\n\n\n";

        cout << "Max to min:\n";
            maxtomin(array, len);
            start = nanos();
            quickSort(array, len - 1);
            //printArr(array, len);
            amount_print('q');
            cout << endl << "\t" << nanos() - start << " ns" << endl;
            amount_reset();

        cout << "\n\n\n";

        cout << "Rand:\n";
            randArr(array, len);
            start = nanos();
            quickSort(array, len - 1);
            //printArr(array, len);
            amount_print('q');
            cout << endl << "\t" << nanos() - start << " ns" << endl;
            amount_reset();

        cout << "\n\n\n";
        delete[] array;

    }

    for (int i = 0; i < 5; i++)
    {
        amount_reset();

        int len = power * (int)pow(10, i);
        int* array = new int[len];

        cout << "---------------- " << len << " ----------------" << endl;
        cout << "Select:\n";

        cout << "Min to max:\n";

        mintomax(array, len);
        start = nanos();
        selectSort(array, len);
        //printArr(array, len);
        amount_print('s');
        cout << endl << "\t" << nanos() - start << " ns" << endl;
        amount_reset();

        cout << "\n\n\n";

        cout << "Max to min:\n";
        maxtomin(array, len);
        start = nanos();
        selectSort(array, len);
        //printArr(array, len);
        amount_print('s');
        cout << endl << "\t" << nanos() - start << " ns" << endl;
        amount_reset();

        cout << "\n\n\n";

        cout << "Rand:\n";
        randArr(array, len);
        start = nanos();
        selectSort(array, len);
        //printArr(array, len);
        amount_print('s');
        cout << endl << "\t" << nanos() - start << " ns" << endl;
        amount_reset();

        cout << "\n\n\n";
        delete[] array;

    }
    
	return 0;
}