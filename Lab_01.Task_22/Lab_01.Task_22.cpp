#include <iostream>
#include <cmath>

using namespace std;

class Polinom
{
private:
	int x;
	int k = 4;
	int k1 = 3;
	double sum;
	double c1[6];

public:

	Polinom()
	{
	}
	~Polinom()
	{
	}
	void inKoef();
	void OutPut();
	void InputPutX();
	void CalculationA();
	void PlussMinus();
};

void  Polinom::inKoef()
{
	cout << "Input coefficients\n";
	for (int i = 0; i<6; i++)
	{
		cout << "C" << i + 1 << " = ";
		cin >> this->c1[i];
	}
}
void Polinom::OutPut()
{
	for (int i = 0; i<6; i++)
	{
		cout << this->c1[i] << "\t";
	}
}
void Polinom::InputPutX()
{
	cout << "\nInput X = ";
	cin >> this->x;
}
void Polinom::CalculationA()
{
	int a = 0;
	int b = this->k;

	for (int i = 0; b>0, i<6; b--, i++)
	{
		a += (this->c1[i])*pow(this->x, b);

	}
	this->sum = a;
	cout << "Polinom1 = " << a << "\n";
}
void Polinom::PlussMinus()
{
	char pm;
	int a = this->k1;
	int b = 0;
	int x;
	cout << "X = ";
	cin >> x;
	cout << "\nchose operation + or -\n";
	cin >> pm;
	for (int i = 0; a>0; a--, i++)
	{
		b += (this->c1[i])*pow(x, a);
	}

	if (pm == '+')
	{
		this->sum = b + this->sum;
	}
	else
	{
		this->sum = b - this->sum;
	}

	cout << "\nPolinom2 = " << b << "\nResult = " << abs(this->sum);

}


int main()
{
	Polinom poll;
	poll.inKoef();
	poll.OutPut();
	poll.InputPutX();
	poll.CalculationA();
	poll.PlussMinus();
	system("pause");
	return 0;
}
