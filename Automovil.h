#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H
#include <string>
using namespace std;
class Automovil {
public:
	Automovil();
	Automovil (string mar, string mod, int anio, string col, float pre);
	string getMarca ();
	string getModelo ();
	int getAnio ();
	string getColor ();
	float getPrecio ();
	void setMarca (string mar);
	void setModelo (string mod);
	void setAnio (int anio);
	void setColor (string col);
	void setPrecio (float pre);
private:
	string Marca; 
	string Modelo;
	int Anio;
	string Color;
	float Precio;
};

#endif

