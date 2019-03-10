#include <iostream>
#include <string.h>

using namespace std;
class Matrix
{
private:
	int mat[4][4]/*={{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}}*/;
	int i = 4;
	int j = 4;

public:

	Matrix() {}
	~Matrix() {}
	void InPut();
	void OutPut();
	void MaxMin();
	void Sum();
};
void Matrix::InPut()
{
	cout << "Input elements in matrix 4x4:\n";
	for (int i = 0; i<this->i; ++i)
	{
		for (int j = 0; j<this->j; ++j)
		{
			cin >> this->mat[i][j];
		}
		cout << "\n";
	}
}
void Matrix::OutPut()
{
	cout << "MATRIX:\n";
	for (int i = 0; i<this->i; ++i)
	{
		for (int j = 0; j<this->j; ++j)
		{
			cout << this->mat[i][j] << " ";
		}
		cout << "\n";
	}
}
void Matrix::MaxMin()
{
	int max = this->mat[0][0];
	int min = this->mat[0][0];
	for (int i = 0; i<this->i; i++)
	{
		for (int j = 0; j<this->j; j++)
		{
			if (max<this->mat[i][j])
			{
				max = this->mat[i][j];
			}
		}
	}
	cout << "MAX element is " << max << endl;
	for (int i = 0; i<this->i; i++)
	{
		for (int j = 0; j<this->j; j++)
		{
			if (min>this->mat[i][j])
			{
				min = this->mat[i][j];
			}
		}
	}
	cout << "MIN element is " << min << endl;
}
void Matrix::Sum()
{
	int sum = 0;
	for (int j = 0; j<this->j; j++)
	{
		for (int i = 0; i<this->i; i++)
		{
			sum += this->mat[i][j];
		}
	}
	cout << "Sum of all matrix elements = " <<sum<<endl;
}




int main()
{
	Matrix m;
	m.InPut();
	m.OutPut();
	m.MaxMin();
	m.Sum();
	system("pause");

	return 0;
}