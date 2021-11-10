#include "Cercle.h"
#include "Point.h"
#include <iostream>
#include<math.h>

using namespace std;
using namespace geom;

Cercle::Cercle()
{
}

geom::Cercle::Cercle(double rayon, Point centre)
{
	this->rayon = rayon;
	this->centre = centre;
}

void Cercle::afficher()
	{
	cout << "\t\tLe rayon :" << this->rayon << "\t, Le centre est :  ";this->centre.afficher();
	}

double Cercle::surface()
{ 
	double S = this->rayon * this->rayon * 3.14;
	return S;
}

double geom::Cercle::perimetre()
{	double P = this->rayon *2 * 3.14;
	return P;
}

void Cercle::changement_rayon(double r)
{ 
	this->rayon = r;
}

void Cercle::translation(Point c2)
{  
	this->centre = c2;

}

bool Cercle::test_egalite(Cercle *C2)
{
	if (this->centre.distance(C2->centre)!=0 || this->rayon!=C2->rayon)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool Cercle::verifier_appart(Point C3)
{
	if (this->centre.distance(C3)> this->rayon)
	{
		return false;

	}
	else
	{
		return true;
	}
}





