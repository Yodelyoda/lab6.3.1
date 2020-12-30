#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime> 
#include <iomanip> 
using namespace std;
int max_even_elem(int*, size_t, int*);

int main(void)
{

	int n = 0;
	int elem;
	cout << " Vvedit rozmir masiva "; cin >> n;
	int* arr = new int[n];


	for (int i = 0; i <= n - 1; i++)
	{
		cout << " Vvedit " << i << " Element masiva : ";
		cin >> arr[i];
	}


	if (max_even_elem(arr, n, &elem) == 1)
		printf("max even elem = %d\n", elem);

	return 0;
}

int max_even_elem(int* arr, size_t size, int* elem)
{
	*elem = arr[0];
	int key = 0;

	for (size_t i = 1; i < size; ++i)
	{
		if (arr[i] % 2 == 0 && arr[i] > * elem)
		{
			*elem = arr[i];
			key = 1;
		}
	}

	return key;
}