///********* Macota Felíz **********
/* Clase CMascota V-0.1 
 * Programación Orientada a Objetos
 * con C++ - Prof. Armando B. VERA */
/// ================================

#include "CMascota.h"
#include <sstream>

CMascota::CMascota() {
	id_mas = 0;
	nombre ="";
	especie="";
	raza="";
	fechaDeNac="";
	peso = 0.0;
}

CMascota::CMascota(int id_in, std::string nom_in, std::string esp_in,
				std::string raz_in, std::string fdn_in, double pes_in) {
	id_mas= id_in;
	nombre= nom_in;
	especie= esp_in;
	raza=raz_in;
	fechaDeNac=fdn_in;
	peso=pes_in;
}

CMascota::CMascota(const CMascota& m) {
	id_mas=m.id_mas;
	nombre= m.nombre;
	especie= m.especie;
	raza=m.raza;
	fechaDeNac=m.fechaDeNac;
	peso= m.peso;
}

CMascota::~CMascota(){}

void CMascota::setIdMas(int id_in) {
	id_mas=id_in;
}

void CMascota::setNombre(std::string nom_in) {
	nombre=nom_in;
}
void CMascota::setEspecie(std::string esp_in) {
	especie=esp_in;
}
void CMascota::setRaza(std::string raz_in) {
	raza=raz_in;
}
void CMascota::setFDNac(std::string fdn_in) {
	fechaDeNac=fdn_in;
}
void CMascota::setPeso(double pes_in) {
	peso =pes_in;
}

int CMascota::getIdMas() const {
	return id_mas;
}

std::string CMascota::getNombre() const {
	return nombre;
}
std::string CMascota::getEspecie()const {
	return especie;
}
std::string CMascota::getRaza() const {
	return raza;
}
std::string CMascota::getFDNac() const {
	return fechaDeNac;
}

std::string CMascota::toString() const {
	std::stringstream s;
	s << "Datos de la Mascota " << "\n";
	s << "-------------------" << "\n";
	s << "Nombre---------------:" << getNombre() << "\n";
	s << "Especie--------------:" << getEspecie() << "\n";
	s << "Raza ----------------:" << getRaza() << "\n";
	s << "Fecha de Nacimiento--: " << getFDNac() << "\n";
	s << "Peso ----------------: " << getPeso() << "\n";
	return s.str();
}
