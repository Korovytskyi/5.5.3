
#pragma once
#include<iostream>
#include <string>

using namespace std;

class Vector3D
{
private:
	double x, y, z;

public:
	Vector3D();
	Vector3D(double x, double y, double z);
	Vector3D(const Vector3D&);

	double getX() const { return x; }
	double getY() const { return y; }
	double getZ() const { return z; }
	void setX(double value) { x = value; }
	void setY(double value) { y = value; }
	void setZ(double value) { z = value; }
	friend istream& operator >> (istream& in, Vector3D& a);
	friend ostream& operator << (ostream& in, Vector3D& a);
	Vector3D& operator ++();
	Vector3D& operator --();

	operator string() const;
};

