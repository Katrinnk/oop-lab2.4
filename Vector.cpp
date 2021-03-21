#include "Vector.h"
Vector::Vector(const Vector& a)
{
	size = a.size;
	N = new int[size];
	for (int i = 0; i < size; i++)
		N[i] = a.N[i];
}
void Sum(const Vector& a, const Vector& b)
{
	if (a.size != b.size)
		cout << "vykonaty dodavannia nemozhlyvo" << endl;
	else
		cout << "dodavannia a+b: {";
		for (int i = 0; i < a.size; i++)
		{
			cout << a.N[i]+b.N[i];
			if (i + 1 != a.size)
			{
				cout << ",";
			}
			else
				cout << "}" << endl;
		}
}
istream& operator >>(istream& in, Vector& a)
{
	for (int i = 0; i < a.size; i++)
	{
		cout << "vvedit element vektora N[" << i + 1 << "]: "; in >> a.N[i];
	}
	cout << endl;
	return in;
}
ostream& operator <<(ostream& out, const Vector& a)
{
	out << "N[" << a.size << "]: {";
	for (int i = 0; i < a.size; i++)
	{
		out << a.N[i];
		if (i + 1 != a.size)
		{
			out << ",";
		}
		else
			out << "}" << endl;
	}
	return out;
}
bool operator == (const Vector& a, const Vector& b)
{
	if (a.size != b.size)
		return false;
	else
		for (int i = 0; i < a.size; i++)
		{
			if (a.N[i] != b.N[i])
			{
				return false;
			}
		}
	return true;
}

Vector::operator string() const
{
	stringstream ss;
	ss << *this;
	return 	ss.str();
}
Vector& Vector::operator =(const Vector& a)
{
	if (this == &a)
		return *this;
	if (N)
		delete[] N;
	if (a.N)
	{
		size = a.size;
		int* N = new int[size];
		for (int i = 0; i < size; i++)
			N[i] = a.N[i];
	}
	else
		N = 0;
	return *this;
}