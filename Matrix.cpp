#include "Matrix.h"
#include <stdio.h>
#include <iostream>

int Matrix::m_instanceCounter = 0;
Matrix::Matrix(int m,int n)
	: m_Zeilen(m), m_Spalten(n)
	{
	m_Element = new float[n*m];
	m_instanceCounter++;
	
	 //printf("Standardkonstruktor von Matrix wurde aufgerufen \n");
	}
Matrix::~Matrix(){
	m_instanceCounter--;
	//std::cout << "Matrix( ";
	//ausgabe();

	//std::cout << ") wurde zerstört!"<< "\n";
	//delete[] m_Element;
}

void Matrix::ausgabe() {
	for (int i = 0; i < m_Zeilen; i++)
		std::cout << m_Element[i] << " ";
}
int Matrix::getCounter(){
	return m_instanceCounter;
}