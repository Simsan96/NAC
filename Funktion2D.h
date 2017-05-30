#pragma once
#include "Vektor2D.h"
#include "Funktion2D.h"

class Funktion2D
{
public:
	Funktion2D();
	
	float operator()(Vektor2D v);
	~Funktion2D();
};
Vektor2D gradient2D(Funktion2D f, Vektor2D v);
Vektor2D minimieren2D(Funktion2D f, Vektor2D v, double stepLength,int maxIteration,double ftol = 0.001,double tol = 0.001);

