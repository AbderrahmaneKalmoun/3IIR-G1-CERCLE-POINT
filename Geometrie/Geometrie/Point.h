#pragma once
namespace geom {

class Point
{
private:
	int x, y;

public:
	Point();
	Point(double x, double y);

	void afficher() const;

	double distance( Point b) const;






};
};