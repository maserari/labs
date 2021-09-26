#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	//Вариант 12
	
	srand(time(NULL));
	int size;
	int selection;

	cout << "Enter size of arr: ";
	cin >> size;

	int* arr = new int[size];

	cout << "1.Enter from the keyboard" << endl;
	cout << "2.Random values" << endl;

	cin >> selection;

	if (selection == 1)
	{
		cout << "Enter values" << endl;
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
	}

	else if (selection == 2)
	{
		int BeginRange;
		int EndRange;

		cout << "Enter range of numbers" << endl;
		cout << "from: ";
		cin >> BeginRange;
		cout << "to: ";
		cin >> EndRange;

		for (int i = 0; i < size; i++)
		{
			arr[i] = rand() % EndRange + BeginRange;
		}
	}

	cout << "Array: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	//найти все локальные минимумы и вывести их

	cout << "Local min: ";
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
		{
			cout << arr[i] << " ";
		}
	}
	cout << endl;


	//вычислить сумму элементов массива, расположенных после первого минимального элемента

	//находим индекс минимального элемнта
	int min;
	min = arr[0];
	int position = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			position = i;
			min = arr[i];
		}
	}

	//вычисляем сумму
	int sum = 0;

	for (int i = (position + 1); i < size; i++)
	{
		sum = sum + arr[i];
	}
	cout << "sum is: " << sum << endl;


	//Упорядочить элементы массива по возрастанию модулей элементов

	int tmp;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (fabs(arr[j]) > fabs(arr[j + 1]))
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	delete[] arr;
}
