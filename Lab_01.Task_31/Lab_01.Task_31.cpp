#include <iostream>

using namespace std;

class Mass
{
private:

	int m[13] = { 2,3,4,1,5,6,9,8,10,7,11,12 };

public:
	Mass()
	{
	}
	~Mass()
	{
	}
	void Plas();
	void Sort();
	void OutPut();
	void Delete();
};
void Mass::Plas()
{
	int a;
	cout << "Add an element\n";
	cout << "enter element value\n";
	cin >> a;
	m[12] = a;

}
void Mass::Sort()
{
	int temp;
	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			if (m[j] > m[j + 1])
			{
				temp = m[j];
				m[j] = m[j + 1];
				m[j + 1] = temp;
			}

		}
	}
}
void Mass::OutPut()
{
	cout << "Output elements";
	for (int i = 0; i<13; i++)
	{
		cout << m[i] << "-" << i << " element of an array\n";
	}
}
void Mass::Delete()
{
	int n[12];
	int a;
	int j = 0;
	cout << "input the number of element to delete it\n";
	cin >> a;
	if (a>0 || a<12)
	{
		for (int i = 0; i<13; i++)
		{
			if (i == a) continue;
			n[j] = m[i];
			j++;
		}
	}


	for (int i = 0; i<12; i++)
	{
		cout << n[i] << "\n";
	}
	getchar();
}


int main()
{
	Mass mas;
	mas.Plas();
	mas.Sort();
	mas.OutPut();
	mas.Delete();


	system("pause");
	return 0;
}
