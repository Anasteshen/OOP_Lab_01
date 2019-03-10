#include <iostream>
#include <cmath>

using namespace std;

class Kolo
{
private:

	double k1;
	double k2;
	double r;

public:

	Kolo() //konstruktor
	{
	}
	~Kolo()
	{
	} //destruktor
	void inPut();
	double Skr();
	double Dov();
};
void Kolo::inPut()
{
	cout << "input R\n";
	cin >> this->r;
	if (this->r < 0)
	{
		cout << "incorrect, try again";
	}
}

double Kolo::Skr()//площа
{
	double s;
	s = 3.14*this->r*this->r;
	return s;
}
double  Kolo::Dov()//довжина
{
	double d;
	d = 3.14 * 2 * this->r;
	return d;
}
int main()
{
	double s, d;
	Kolo k;
	k.inPut();
	s = k.Skr();
	d = k.Dov();
	cout << "square = " << s << "\nlength= " << d <<endl;
	system("pause");

	return 0;

}