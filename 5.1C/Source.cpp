#include <iostream>
#include "Vector3D.h"
#include "Vector2.h"
#include "Vector.h"
#include "Exception.h"
using namespace std;

int main()
{
	try
	{
	Vector3D q(1, 1, 1);
	cout << q;
	cout << ++q;
	cout << --q;
	}
	catch (invalid_argument e)
	{
		cout << e.what() << endl;
	}
	catch (bad_exception e)
	{
		cout << e.what() << endl;
	}
	catch (Exception& e)
	{
		cout << e.what() << endl;
	}
	catch (const char* e)
	{
		cerr << e << endl;
	}

	Vector2 a;
	cout << "A  " << endl; cin >> a;
	cout << "A = " << a << endl;
	a.Distance();
	a.scalar();
	a.isEqual();
	a.isEqual2();
	cout << ++a;
	cout << --a;
	a++;
	a--;
}


