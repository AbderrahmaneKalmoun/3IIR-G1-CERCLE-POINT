#pragma once
#include"point.h"
namespace geom {


    class Cercle
    {
    private:
        double rayon;
        Point centre;


    public:
        Cercle();
        Cercle(double rayon, Point centre);
        void afficher();
        double surface();
        double perimetre();
        void changement_rayon(double r);
        void translation(Point d);
        bool test_egalite(Cercle* C2);
        bool verifier_appart(Point C3);

    };
};
