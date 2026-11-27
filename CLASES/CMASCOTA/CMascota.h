#ifndef CMASCOTA_H
#define CMASCOTA_H

#include <string>


class CMascota {
private:	
	int id_mas;
	std::string nombre;
	std::string especie;
	std::string raza;
	std::string fechaDeNac;
	double peso;
	
public:
	CMascota();
	CMascota(int id_in, std::string nom_in, std::string esp_in,
				std::string raz_in, std::string fdn_in, double pes_in);
	CMascota(const CMascota& m);
	~CMascota();
	
// Métodos de Asignación o setters

	void setIdMas(int id_in);
	void setNombre(std::string nom_in);
	void setEspecie(std::string esp_in);
	void setRaza(std::string raz_in);
	void setFDNac(std::string fdn_in);
	void setPeso(double pes_in);
	
// Métodos de Lectura o getters

	int getIdMas() const;
	std::string getNombre() const;
	std::string getEspecie() const;
	std::string getRaza() const;
	std::string getFDNac()const;
	double getPeso() const;
	
// Método de repesentación 

	std::string toString() const;
	
};

#endif // CMASCOTA_H

