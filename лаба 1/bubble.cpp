#include <stdlib.h>
#include <iostream>

using namespace std;

void display(int *array, int size) 
{
	for(int i = 0; i<size; i++)
		cout << array[i] << " ";
	cout << endl;
}

void bubbleSort(int *array, int size)
{
	int M = 0;
 	int C = 0;
    for (int i = 0; i < size - 1; i++) 
	{
    	for (int j = size - 1; j > i; j--) 
		{
      		C++;
      		if (array[j] < array[j - 1]) 
			{
        		int temp = array[j];
        		array[j] = array[j - 1];
        		array[j - 1] = temp;
        		M += 3;
      		}
    	}
  	}
  	cout << "\n ���������� ���������: "<< C;
    cout << "\n ���������� ������������: " << M;
    cout << "\n ����� ��������� � ������������: "<< C + M;
}

int main()
{
	setlocale(LC_ALL, "russian");
	int n;
	cout << "���������� ��������� � �������: ";
	cin >> n;
	int arr[n];
	cout << "������� ������:" << endl;
	for(int i = 0; i<n; i++) 
	{
		cin >> arr[i];
	}
	cout << "����������������� ������: ";
	display(arr, n);
	bubbleSort(arr, n);
	cout << "\n ��������������� ������: ";
	display(arr, n);
		
}
