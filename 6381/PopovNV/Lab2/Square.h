#pragma once
#include "Shape.h"

class Square: public Shape{
	double side;
public:
	Square(double, double, double);
	Square(double, double, double, std::string);
	~Square();
	void scaling(double);
	void print(std::ostream &) const;
};