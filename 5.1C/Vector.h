
#pragma once
#include "Vector3D.h"

class Vector :public Vector3D
{

public:
	Vector();
	Vector(double x, double y, double z);
	Vector(const Vector&);
	friend	double operator *(Vector g, Vector f);
	void scalar() const;
	void Distance() const { cout << "dov. vectora  " << sqrt((getX() * getX()) + (getY() * getY()) + (getZ() * getZ())) << endl; };
	void isEqual() const;
	void isEqual2() const;
	Vector& operator ++();
	Vector& operator --();
	Vector operator ++(int);
	Vector operator --(int);

};

