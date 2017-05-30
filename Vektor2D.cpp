#include "Vektor2D.h"
#include <stdio.h>
#include <iostream>

Vektor2D::Vektor2D() : Vektor(2){
	//printf("Vektor2D Standardkonstruktor aufgerufen \n");

}
Vektor2D::Vektor2D(double a, double b) :Vektor(2) {
	m_Element[0]= a;
	m_Element[1]= b;
	//printf("Vektor2D ParameterKonstruktor aufgerufen\n");
}

void Vektor2D::addiere(Vektor2D v) {
	 m_Element[0] += v.m_Element[0];
	 m_Element[1] += v.m_Element[1];
}
void Vektor2D::kopiereIn(Vektor2D* zielvar) {
	zielvar->m_Element[0] = m_Element[0];
	zielvar->m_Element[1] = m_Element[1];
}
void Vektor2D::tausche(Vektor2D* a,Vektor2D* b){
	Vektor2D temp;
	b->kopiereIn(&temp);
	a->kopiereIn(b);
	temp.kopiereIn(a);
}
void Vektor2D::ausgabe() {
	//std::cout << "Vektor2D:";
	//Matrix::ausgabe();
}
Vektor2D Vektor2D::operator *(double a) {
	Vektor2D copy;
	this->kopiereIn(&copy);
	copy.m_Element[0] *= a;
	copy.m_Element[1] *= a;
	return copy;
}
void Vektor2D::operator +=(Vektor2D b) {
	this->m_Element[0] += b.m_Element[0];
	this->m_Element[1] += b.m_Element[1];
}

		