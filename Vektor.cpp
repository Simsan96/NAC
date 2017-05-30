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
	int a_l�nge = a.m_Spalten * a.m_Zeilen;
	int l�nge = this->m_Spalten * this->m_Zeilen;
	double sum = 0;
	if (a_l�nge != l�nge) {
		return std::numeric_limits<float>::quiet_NaN();
	}
	else {
		for (int i = 0; i < a_l�nge; i++) {
			sum += a.m_Element[i] * this->m_Element[i];
		}
		return sum;
	}
}
double Vektor::winkel(Vektor a) {
	int a_l�nge = a.m_Spalten * a.m_Zeilen;
	int l�nge = this->m_Spalten * this->m_Zeilen;
	if (a_l�nge != l�nge) {
		return std::numeric_limits<float>::quiet_NaN();
	}
	else{
		return acos(skalarprodukt(a) / (betrag()*a.betrag()))/PI *180;
	}
}