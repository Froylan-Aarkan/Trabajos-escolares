#include "Automovil.h"
#include <string>
Automovil::Automovil(){
	
}
Automovil::Automovil(string mar, string mod, int anio, string col, float pre){
	this -> Marca = mar;
	this -> Modelo = mod;
	this -> Anio = anio;
	this -> Color = col;
	this -> Precio = pre;
}
void Automovil::setMarca(string mar){
	this -> Marca = mar;
}
void Automovil::setModelo(string mod){
	this -> Modelo = mod;
}
void Automovil::setAnio(int anio){
	this -> Anio = anio;
}
void Automovil::setColor(string col){
	this -> Color = col;
}
void Automovil::setPrecio(float pre){
	this -> Precio = pre;
}

string Automovil::getMarca(){
	return this -> Marca;
}
string Automovil::getModelo(){
	return this -> Modelo;
}
int Automovil::getAnio(){
	return this -> Anio;
}
string Automovil::getColor(){
	return this -> Color;
}
float Automovil::getPrecio(){
	return this -> Precio;
}
