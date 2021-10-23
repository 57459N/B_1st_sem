#include <cmath>
#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std;

int m_2d_to_upper(int i, int j, int n){
    return i * n - i * (i - 1) / 2 + (j - i);
}

int m_2d_to_lower(int i, int j){
    return i * (i+1)/2+j;
}

void print_matrix_triag_upper(int* arr, int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < i)
            {
                cout << "     0  ";
                continue;
            }

            int address = m_2d_to_upper(i,j,n);
            cout << setw(6) << arr[address] << "  ";
        }
        cout << endl;
    }
    cout << endl;
}

void print_matrix_triag_lower(int* arr, int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j <= i)
            {
                int address = m_2d_to_lower(i,j);
                cout << setw(6) << arr[address] << "  ";
                continue;
            }
            else {
                cout << "     0  ";
                continue;
            }


        }
        cout << endl;
    }
    cout << endl;
}

void print_matrix_2d(int** arr, int res) {
    for (int i = 0; i < res; i++) {
        for (int j = 0; j < res; j++) {
            cout << setw(6) << arr[i][j] << "  ";
        }
        cout << endl;
    }
}

int main19()
{
	int res = 0;
	cout << "Enter resolution of matrix NxN: ";
	cin >> res;

	srand(time(nullptr));

	int len = (res + 1) * res / 2;

	int* arrA = new int[len];
	int* arrB = new int[len];
	int* arrC = new int[len]{};

	for (int i = 0; i < len; i++) {
        arrA[i] = rand() % 100;
        arrB[i] = rand() % 100;
    }

    cout << "1. Input:" << endl;


    cout << "A:" << endl;
    print_matrix_triag_upper(arrA, res);

    cout << endl << "B:" << endl;
    print_matrix_triag_upper(arrB, res);

    cout << endl << "C:" << endl;
    print_matrix_triag_upper(arrC, res);


    //
    // 2. Multiplication
    //

    for (int i = 0; i < res; i++)
	{
		for (int j = i; j < res; j++)
		{
			int sum = 0;

            int addIJ = m_2d_to_upper(i,j,res);

            for (int l = 0; l < res; l++)
			{
				if (l >= i && j >= l)
				{
					int addA = m_2d_to_upper(i,l,res);
                    int addB = m_2d_to_upper(l,j,res);
					sum += arrA[addA] * arrB[addB];
				}
			}

			arrC[addIJ] = sum;
		}
	}

    cout << "2. Multiplication:" << endl;
    cout << "C:" << endl;

    print_matrix_triag_upper(arrC, res);


    //
    // 3.2 Transpose Naive
    //

	int** arrCTrans = new int*[res]{};
	for (int i = 0; i < res; i++)
	{
		arrCTrans[i] = new int[res]{};
	}

	for (int i = 0; i < res; i++)
	{
		for (int j = i; j < res; j++)
		{
			int add = m_2d_to_upper(i,j,res);
			arrCTrans[j][i] = arrC[add];
		}
	}

    cout << "TRANSPOSE-NAIVE:" << endl;
    print_matrix_2d(arrCTrans, res);

    //
    // 3.2 Transpose Compact
    //

    int* arrCT = new int[len]{};

    for (int i = 0; i < res; i++)
    {
        for (int j = i; j < res; j++)
        {
            int add_u = m_2d_to_upper(i,j,res);
            int add_l = m_2d_to_lower(j,i);

            arrCT[add_l] = arrC[add_u];
        }
    }

    cout << "TRANSPOSE-COMPACT:" << endl;
    print_matrix_triag_lower(arrCT, res);

    //
    // 4. Cleanup
    //

    delete[] arrA;
    delete[] arrB;
    delete[] arrC;

	return 0;
}
