#ifndef __Gerade2D_h__
#define __Gerade2D_h__

#include "Vektor2D.h"

class Gerade2D
{

	Vektor2D m_Normale;
	Vektor2D m_Aufpunkt;
public:
	Gerade2D(Vektor2D normale, Vektor2D aufpunkt);
	~Gerade2D();
	double gerichteterAbstand(Vektor2D x);
};
#endif __Gerade2D_h__
