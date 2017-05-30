#pragma once
#include "Vektor.h"
class Vektor2D : public Vektor{
	public: 
		Vektor2D(double a,double b);
		Vektor2D operator *(double a);
		void operator +=(Vektor2D b);
		Vektor2D();
		void addiere(Vektor2D v);
		void kopiereIn(Vektor2D* zielvar);
		static void tausche(Vektor2D* a, Vektor2D* b);
		void ausgabe();
		//Vektor2D operator +(float b);
		
};