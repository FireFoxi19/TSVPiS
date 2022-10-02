#include <iostream>

using namespace std;


void swapping(int &a, int &b) 
{ //меняем местами а и b
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void display(int *array, int size) {
	for(int i = 0; i<size; i++)
		cout << array[i] << " ";
	cout << endl;
}
void selectionSort(int *array, int size) 
{
	int i, j, imin;
	for(i = 0; i<size-1; i++) 
	{
		imin = i; //индекс минимального элемента
	for(j = i+1; j<size; j++)
		if(array[j] < array[imin])
			imin = j;
//меняю местами
	swap(array[i], array[imin]);
}
}
void direct_selection(int *array, int size)
{
    int C = 0;
    int M = 0;
    int min; int tmp;
    for (int i = 0; i < size-1; i++)
    {
        min = i;
        for (int j = i + 1; j < size; j++)
        {
            C++;
            if (array[j] < array[min])
            {
                min = j;
            }
        }
        M+=3;
        tmp = array[i];
        array[i] = array[min];
        array[min] = tmp;
    }
    cout << "\n Количество сравнений: "<< C;
    cout << "\n Количество присваивания: " << M;
    cout << "\n Сумма сравнений и присваиваний: "<< C + M;
}
int main() 
{
	setlocale(LC_ALL, "russian");
	int n;
	cout << "Количество элементов в массиве: ";
	cin >> n;
	int arr[n];
	cout << "Введите массив:" << endl;
	for(int i = 0; i<n; i++) 
	{
		cin >> arr[i];
	}
	cout << "Неотсортированный массив: ";
	display(arr, n);
	selectionSort(arr, n);
	cout << "Отсортированный массив: ";
	display(arr, n);
	direct_selection(arr, n);
}
