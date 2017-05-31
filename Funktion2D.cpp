#include "Funktion2D.h"
#include "math.h"
#include "Vektor2D.h"
#include <iostream>


Funktion2D::Funktion2D()
{
}
float Funktion2D::operator()(Vektor2D v) {
	Vektor2D x(1, 0);
	x += v;

	return-((sin(x.betrag())) / x.betrag());

}


Funktion2D::~Funktion2D()
{
}
Vektor2D gradient2D(Funktion2D f, Vektor2D v){
	float h = 0.1;
	Vektor2D tmpRight, tmpLeft;
	v.kopiereIn(&tmpRight);
	v.kopiereIn(&tmpLeft);
	tmpRight.m_Element[0] += h;
	tmpLeft.m_Element[0] -= h;
	float v1 = (f(tmpRight) - f(tmpLeft)) / (tmpRight.m_Element[0] - tmpLeft.m_Element[0]);
	v.kopiereIn(&tmpRight);
	v.kopiereIn(&tmpLeft);
	tmpRight.m_Element[1] += h;
	tmpLeft.m_Element[1] -= h;
	float v2 = (f(tmpRight) - f(tmpLeft)) / (tmpRight.m_Element[1] - tmpLeft.m_Element[1]);
	Vektor2D result(v1, v2);
	return result;

}
Vektor2D minimieren2D(Funktion2D f, Vektor2D v, double stepLength, int maxIteration, double ftol, double tol) {
	int iteration = 0;
	Vektor2D gradient = gradient2D(f, v);
	Vektor2D step = gradient * -(stepLength);
	double variation = 1;
	while (ftol < variation && iteration < maxIteration && tol < step.betrag()) {
		double startingValue = f(v);
		v += step;
		variation = startingValue - f(v);
		gradient = gradient2D(f,v);
		step = gradient * -(stepLength);
		iteration++;
		//std::cout << " x-coordinate: " << v.m_Element[0] << " y-coordinate: " << v.m_Element[1] <<  " function value: " << f(v)<< " iteration NO " <<iteration<< std::endl;
	}
	return v;

}
