#include "Vektor2D.h"
#include <iostream>
#include "Funktion2D.h"

int main(int argv,char* argc[]) {
		Funktion2D f;
		Vektor2D v(3.0, 1.0);
		Vektor2D result;
		result = minimieren2D(f, v, 0.2, 10000,0.000035,0.000035);
		std::cout <<" x-coordinate: "  << result.m_Element[0] << " y-coordinate: " << result.m_Element[1] << " function value:  " << f(result) <<std::endl;
		system("PAUSE");
		
		 
	
	
}