#include "CRectangulo.h"
#include <sstream>
#include <cmath>

///=== Defifinición de Contructores y destructor

CRectangulo::CRectangulo() {
	base=0.0;
	altura=0.0;
}

CRectangulo::CRectangulo(double bas_in, double alt_in) {
	base=bas_in;
	altura=alt_in;
}

CRectangulo::CRectangulo(const CRectangulo & r) {
	base=r.base;
	altura=r.altura;
}

CRectangulo::~CRectangulo(){
	// Esto se utiliza con memoria dinámica
}

/// Definición de los métodos de seteo y lectura

void CRectangulo::setBase(double bas_in){
	base=bas_in;
}

void CRectangulo::setAltura(double alt_in) {
	altura=alt_in;
}
double CRectangulo::getBase() const {
	return base;
}
double CRectangulo::getAltura() const {
	return altura;
}

///=== Definición de los otros métodos derivados 
/// de cálculos

double CRectangulo::perimetro() const {
	return 2*(base+altura);
}

double CRectangulo::area() const {
	return base*altura;
}

double CRectangulo::diagonal() const {
	return sqrt(base*base+altura*altura);
}

///=== Definición del método de representacón textual

std::string CRectangulo::toString() const {
	std::stringstream s;
	s << "\n\tDatos del Rectángulo" << std::endl;
	s << "\t------------------" << std::endl;
	s << "\tBase: " << getBase() << "\n";
	s << "\tAltura: " << getAltura() << "\n";
	s << "\tPerímetro: " << perimetro() << "\n";
	s << "\tÁrea: " << area() << "\n";
	s << "\tDiagonal: " << diagonal() << "\n";
	return s.str();
}
