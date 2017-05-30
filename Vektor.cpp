#include "Vektor.h"
#include <math.h>
#include <limits>
#define PI 3.14159265

Vektor::Vektor(int a) : Matrix(a,1) {
}
double Vektor::betrag() {
	return sqrt(skalarprodukt(*this));
}
double Vektor::skalarprodukt(Vektor a){
	int a_länge = a.m_Spalten * a.m_Zeilen;
	int länge = this->m_Spalten * this->m_Zeilen;
	double sum = 0;
	if (a_länge != länge) {
		return std::numeric_limits<float>::quiet_NaN();
	}
	else {
		for (int i = 0; i < a_länge; i++) {
			sum += a.m_Element[i] * this->m_Element[i];
		}
		return sum;
	}
}
double Vektor::winkel(Vektor a) {
	int a_länge = a.m_Spalten * a.m_Zeilen;
	int länge = this->m_Spalten * this->m_Zeilen;
	if (a_länge != länge) {
		return std::numeric_limits<float>::quiet_NaN();
	}
	else{
		return acos(skalarprodukt(a) / (betrag()*a.betrag()))/PI *180;
	}
}