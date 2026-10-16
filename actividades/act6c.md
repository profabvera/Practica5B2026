# Actividad 6c - Desarrollo de la Clase CMascota

### Consigna

Desarrolla la clase CMascota que figura en el siguiente diagrama y realiza una pequeña apliación de prueba de la clase

```mermaid
classDiagram 
    class CMascota {
        - int id_mas
        - std::string nombre
        - std::string especie
        - std::string raza
        - std::string fechaDeNac
        - double peso

        + CMascota() : 
        + CMascota(std::string nom_in, std::string esp_in, std::string raz_in, std::string fdn_in,double pes_in): 
        + CMascota(const CMascota & m):
        + ~CMascota():
        + setIdMas(int id_in) : void
        + setNombre(std::string nom_in): void
        + setEspecie(std::string esp_in): void
        + setRaza(std::string raz_in): void
        + setFechaDeNac(std::string fdn_in): void
        + setPeso(double pes_in): void
        + getIdMas() const : int
        + getNombre() const: std::string
        + getEspecie() const : std::string
        + getRaza() const : std::string
        + getFechaDeNac() const : std::string
        + getPeso() const : double 
        + toString() const: std::string
}

note for CMascota "Resondabilidad:
Representar una mascota mediante sus
 atributos y proporcionar operaciones
  para consultar, modificar y obtener
  una descripción textual de su estado."
```

Crea la Carpeta CMASCOTA dentro de la carpeta CLASES. Dentro de la carpeta CMASCOTA escribe el achivo de definción de clase, **CMascota.h** también conocido como archivo de cabecera. Escribe también el archivo donde se definen los métodos de la clase, es decir el archivo **CMascota.cpp**, conocido también como archivo de implementación. Genera el archivo objeto CMascota.o desde el terminal utilizando un comando similar al usado de la clase CRectangulo.

Desarrolla una aplicación que permita comprobar el funcionamiento de la clase `CMascota`. Para ello:

1. Crea un objeto utilizando el constructor predeterminado. El constructor con valores por defecto.

2. Crea otro objeto utilizando el constructor parametrizado. El constructor general

3. Modifica algunos atributos mediante los métodos setters.

4. Consulta los atributos mediante los métodos getters.

5. Utiliza `toString()` para mostrar los datos de una mascota.

6. Crea una nueva mascota utilizando el constructor de copia.

Al archivo fuente de esta apliación de prueba llámalo **testClaseCMascota.cpp**

Observacions: En el punto 6 se pide utilizar el constructor de copia. Este es el que tiene la firma **CMascota(const CMascota & m)**. En concreto, mira la siguente porción de código:

```cpp
...
CMascota m(1, "Toby", "Canino", "Boxer","11/12/2025", 23.4);
CMascota m2=m; // m2 es una copia de m1. tienen los mismos datos
```

En el programa de prueba puedes utilizar el método **toString()**  para comprobar que ambos objetos tienen los mismos datos.

### Para reflexionar

¿Cuál es la responsabilidad de la clase `CMascota` y cómo contribuyen sus atributos y métodos a cumplirla?
