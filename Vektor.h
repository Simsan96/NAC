#include "Matrix.h"
class Vektor : public Matrix{
	public: 
		Vektor(int dimension);
		double betrag();
		double skalarprodukt(Vektor a);
		double winkel(Vektor a);
};