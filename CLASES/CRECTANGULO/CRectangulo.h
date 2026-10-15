#ifndef CRECTANGULO_H
#define CRECTANGULO_H

#include <iostream>

class CRectangulo {
	private:
		double base;
		double altura;
		
	public:

///=== Constructores

		CRectangulo(); // Con valores por defecto
		CRectangulo(double bas_in, double alt_in); // General
		CRectangulo(const CRectangulo & r); // de Copia
		~CRectangulo(); // Destructor
		
///=== Métodos de Asignación y lectura (setters y getters)

		void setBase(double bas_in);
		void setAltura(double alt_in);
		double getBase() const;
		double getAltura() const;
		
///=== Otros métodos

		double perimetro() const;
		double area() const;
		double diagonal() const;
		
///=== Método de representación textual de un retangulo
		
		std::string toString() const;
		
};

#endif // CRECTANGULO_H		
		
