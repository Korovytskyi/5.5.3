
#pragma once
#include "Vector3D.h"

class Vector2 :private Vector3D
{

public:
	Vector2();
	Vector2(double x, double y, double z);
	Vector2(const Vector2&);

	operator string () const;

	friend	double operator *(Vector2 g, Vector2 f);


	friend istream& operator >> (istream& in, Vector2& a);
	friend ostream& operator << (ostream& in, Vector2& a);

	Vector2& operator ++();
	Vector2& operator --();
	Vector2 operator ++(int);
	Vector2 operator --(int);
	void scalar() const;
	void Distance() const { cout << "dov. vectora  " << sqrt((getX() * getX()) + (getY() * getY()) + (getZ() * getZ())) << endl; };
	void isEqual() const;
	void isEqual2() const;
};


