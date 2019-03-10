
#include <iostream>
#include <string>

using namespace std;
class Data
{
private:

	int day;
	int month;
	int year;

public:

	Data() {}
	~Data() {}
	void InPut();
	void OutPut1();
	void OutPut2();
};
void Data::InPut()
{
	cout << "Input a day - ";
	cin >> this->day;
	if (this->day<0 || this->day>31)
	{
		throw "Incorrect data";
	}
	cout << "\nInput a month - ";
	cin >> this->month;
	if (this->month<0 || this->month>12)
	{
		throw "Incorrect data";
	}
	cout << "\nInput a year - ";
	cin >> this->year;
	if (this->year<0)
	{
		throw "Incorrect data";
	}
}
void Data::OutPut1()
{
	if (this->month <= 9)
		cout << this->day << ".0" << this->month << "." << this->year << endl;
	else
	{
		cout << this->day << "." << this->month << "." << this->year << endl;
	}
}
void Data::OutPut2()
{
	int i;
	string m;
	string mnth[12] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
	i = this->month;
	m = mnth[i - 1];
	cout << m << " " << this->day << ", " << this->year << endl;

}


int main()
{
	Data data;
	data.InPut();
	data.OutPut1();
	data.OutPut2();
	system("pause");
	return 0;
}