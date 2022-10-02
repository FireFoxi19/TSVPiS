#include <iostream>

using namespace std;


void swapping(int &a, int &b) 
{ //������ ������� � � b
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
		imin = i; //������ ������������ ��������
	for(j = i+1; j<size; j++)
		if(array[j] < array[imin])
			imin = j;
//����� �������
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
	selectionSort(arr, n);
	cout << "��������������� ������: ";
	display(arr, n);
	direct_selection(arr, n);
}
