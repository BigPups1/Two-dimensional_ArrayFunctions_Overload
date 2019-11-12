#include<iostream>
using std::cout;
using std::cin;
using std::endl;

const int ROWS = 4;
const int COLS = 5;
const int NUM = 3;

void FillRand(int Arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double Arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char Arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int Arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double Arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(char Arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int Arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(double Arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(char Arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int Arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double Arr[ROWS][COLS], const int ROWS, const int COLS);
char Sum(char Arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int Arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double Arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(char Arr[ROWS][COLS], const int ROWS, const int COLS);

int  minValueIn(int Arr[ROWS][COLS], const int ROWS, const int COLS);
double minValueIn(double Arr[ROWS][COLS], const int ROWS, const int COLS);
char minValueIn(char Arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(int Arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValueIn(double Arr[ROWS][COLS], const int ROWS, const int COLS);
char maxValueIn(char Arr[ROWS][COLS], const int ROWS, const int COLS);

void main()
{
	setlocale(LC_ALL, "");

	//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

	int Arr[ROWS][COLS];

	FillRand(Arr, ROWS, COLS);
	Sort(Arr, ROWS, COLS);
	Print(Arr, ROWS, COLS);
	cout << endl;
	cout << "Сумма элементов массива: " << Sum(Arr, ROWS, COLS) << endl;
	cout << "Среднее арифметическое : " << Avg(Arr, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(Arr, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(Arr, ROWS, COLS) << endl;

	cout << endl << endl << endl;

	//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

	double Brr[ROWS][COLS];

	FillRand(Brr, ROWS, COLS);
	Sort(Brr, ROWS, COLS);
	Print(Brr, ROWS, COLS);
	cout << endl;
	cout << "Сумма элементов массива: " << Sum(Brr, ROWS, COLS) << endl;
	cout << "Среднее арифметическое : " << Avg(Brr, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(Brr, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(Brr, ROWS, COLS) << endl;
	cout << endl << endl << endl;

	//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

	char Crr[ROWS][COLS];

	FillRand(Crr, ROWS, COLS);
	Sort(Crr, ROWS, COLS);
	Print(Crr, ROWS, COLS);
	cout << endl;
	cout << "Сумма элементов массива: " << Sum(Crr, ROWS, COLS) << endl;
	cout << "Среднее арифметическое : " << Avg(Crr, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(Crr, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(Crr, ROWS, COLS) << endl;
	cout << endl << endl << endl;
}

///////////////////////////////////////////////////////////////////////////////////////////
void FillRand(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = rand() % 100;
		}
	}
}

void FillRand(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = rand() % 100;
		}
	}
}

void FillRand(char Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Arr[i][j] = rand() % 100;
		}
	}
}

/////////////////////////////////////////////////////////////////////////////////////////

void Print(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void Print(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void Print(char Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << Arr[i][j] << "\t";
		}
		cout << endl;
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////

void Sort(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (Arr[k][l] < Arr[i][j])
					{
						int buffer = Arr[i][j];
						Arr[i][j] = Arr[k][l];
						Arr[k][l] = buffer;
					}
				}
			}
		}
	}
}

void Sort(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (Arr[k][l] < Arr[i][j])
					{
						double buffer = Arr[i][j];
						Arr[i][j] = Arr[k][l];
						Arr[k][l] = buffer;
					}
				}
			}
		}
	}
}

void Sort(char Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (Arr[k][l] < Arr[i][j])
					{
						char buffer = Arr[i][j];
						Arr[i][j] = Arr[k][l];
						Arr[k][l] = buffer;
					}
				}
			}
		}
	}
}

/////////////////////////////////////////////////////////////////////////////////////////

int Sum(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int Sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Sum += Arr[i][j];
		}
	}
	return Sum;
}

double Sum(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double Sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Sum += Arr[i][j];
		}
	}
	return Sum;
}

char Sum(char Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char Sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			Sum += Arr[i][j];
		}
	}
	return Sum;
}

/////////////////////////////////////////////////////////////////////////////////////////

double Avg(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(Arr, ROWS,COLS) / (ROWS*COLS);
}

double Avg(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return Sum(Arr, ROWS,COLS) / (ROWS*COLS);
}

double Avg(char Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(Arr, ROWS, COLS) / (ROWS*COLS);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

int  minValueIn(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] < min)min = Arr[i][j];
		}
	}
	return min;
}

double minValueIn(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] < min)min = Arr[i][j];
		}
	}
	return min;
}

char minValueIn(char Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char min = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] < min)min = Arr[i][j];
		}
	}
	return min;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

int maxValueIn(int Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] > max)max = Arr[i][j];
		}
	}
	return max;
}

double maxValueIn(double Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] > max)max = Arr[i][j];
		}
	}
	return max;
}

char maxValueIn(char Arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char max = Arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (Arr[i][j] > max)max = Arr[i][j];
		}
	}
	return max;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
