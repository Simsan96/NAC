#include "Gerade2D.h"


Gerade2D::Gerade2D(Vektor2D normale, Vektor2D aufpunkt)
	: m_Normale(normale), m_Aufpunkt(aufpunkt)
{
}


Gerade2D::~Gerade2D(void)
{
}

double Gerade2D::gerichteterAbstand(Vektor2D x)

{
	Vektor2D diff(x);
	diff.subtrahieren(m_Aufpunkt);
	double skalar = m_Normale.skalarprodukt(diff);
	return 1/m_Normale.betrag() * skalar;
}
