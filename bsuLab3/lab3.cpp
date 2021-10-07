#include <iostream>
#include <vector>
using namespace std;

void showVect(int rows, vector<vector<int>>& arr);			//функция выводит матрицу
void funcVect(int rows, int cols, vector<vector<int>>& arr);		//arr[i][j] = arr[j][i]
void enterMatrix(int rows, int cols, vector<vector<int>>& arr);		//функция для ввода матрицы
void delRowsCols(int rows, vector<vector<int>>& arr);			//Уплотнить эту матрицу, удаляя из нее строки и столбцы, состоящие только из нулей.
void zeros(int rows, vector<vector<int>>& arr);				//найти в ней номер первой из строк, содержащих хотя бы один ноль.



int main()
{
	//Вариант 12
	
	int cols;
	int rows;

	cout << "enter matrix size" << endl;

	cin >> cols;
	cin >> rows;

	vector<vector<int>> arr(cols, vector <int>(rows));

	enterMatrix(rows, cols, arr);
	funcVect(rows, cols, arr);
	showVect(rows, arr);
	delRowsCols(rows, arr);
	showVect(rows, arr);
	zeros(rows, arr);
}

void enterMatrix(int rows, int cols, vector<vector<int>>& arr)
{
	cout << "Enter values" << endl;
	for (int i = 0; i < cols; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			cin >> arr[i][j];
		}
	}
}

void funcVect(int rows, int cols, vector<vector<int>>& arr)
{
	for (int i = 0; i < cols; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			arr[i][j] = arr[j][i];
		}

	}
}

void showVect(int rows, vector<vector<int>>& arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		for (int j = 0; j < rows; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void delRowsCols(int rows, vector<vector<int>>& arr)
{
	int count = 0;
	for (int i = 0, k = 0; k < arr.size(); k++)
	{
		for (int j = 0; j < rows; j++)
		{
			if (arr[i][j] == 0)
			{
				count++;
			}
		}

		if (count == rows)
		{
			arr.erase(arr.begin());
		}
		count = 0;
	}
}
	void zeros(int rows, vector<vector<int>>&arr)
	{

		for (int i = 0; i < arr.size(); i++)
		{
			for (int j = 0; j < rows; j++)
			{
				if (arr[i][j] == 0)
				{
					cout << (i + 1) << " string" << endl;
					j = rows;
				}
				i = arr.size();
			}
			
		}
	}
