#include "Vector.h"

int main()
{
	Vector a(4);
	cin >> a;
	cout << "a: " << a;
	Vector b(4);
	cin >> b;
	cout << "b: " << b;
	Sum(a, b);
	cout << "porivniannia vektoriv: " << endl;
	if (a == b)
		cout << "a=b" << endl;
	else
		cout << "a!=b" << endl;
	cout << "norma vectora a: " << a.NormVec() << endl;
	cout << "norma vectora b: " << b.NormVec() << endl;
	return 0;
}