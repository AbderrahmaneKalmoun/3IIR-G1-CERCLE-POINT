#include "point.h"
#include <iostream>
#include<math.h>

using namespace std;
using namespace geom; 

	Point::Point(double x, double y)
	{
		this->x = x;
		this->y = y;
	}

	void Point::afficher() const
	{
		cout << "x= " << this->x;
		cout << "y= " << this->y;
	}

	double Point::distance( Point b) const
	{
		double res;
		res = sqrt(pow((b.x - this->x), 2) + pow((b.y - this->y), 2));
		return res;
	}

