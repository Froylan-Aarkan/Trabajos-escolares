#include<iostream>
#include "Automovil.h"
#include <string>
using namespace std;

Automovil vc[10];
int numProduct=0;
int tamvec=0;
int i=0;
int pos=-1;
int resp;

string Marca;
string Modelo;
int Anio;
float Precio;
string Color;
string MarcaM;
string MarcaE;
string ColorC;
bool ban=false;
int main(){
	while (tamvec<10){
		int opcion;
		cout<<"1. "<<"Agregar vehiculo.\n";
		cout<<"2. "<<"Modificar.\n";
		cout<<"3. "<<"Eliminar.\n";
		cout<<"4. "<<"Consultar vehiculos.\n";
		cout<<"5. "<<"Salir.\n";
		cout<<"�Que desea hacer?\n";
		cin>>opcion;
		switch (opcion){
			//agregar.
		case 1:
			if (numProduct<10){
				cout<<"Marca:\n";
				cin>>Marca;
				cout<<"Modelo:\n";
				cin>>Modelo;
				cout<<"Anio:\n";
				cin>>Anio;
				cout<<"Precio:\n";
				cin>>Precio;
				cout<<"Color:\n";
				cin>>Color;
				vc[numProduct] = Automovil (Marca, Modelo, Anio, Color, Precio);
				numProduct++;
			}
			else {
				cout<<"El inventario esta lleno.\n";
			}	
			break;
		//Modificar.
	    case 2:
			cout<<"Escriba la marca del vehiculo que desea modificar.\n";
			cin>>MarcaM;
			i=0;
			while (i<=numProduct && pos==-1){
				if (vc[i].getMarca()== MarcaM){
					pos = i;
				}
				else{
					i++;
				}
			}
			if (pos!=-1){
				cout<<"1. "<<"Marca: "<<vc[pos].getMarca()<<"\n";
				cout<<"2. "<<"Modelo: "<<vc[pos].getModelo()<<"\n";
				cout<<"3. "<<"Anio: "<<vc[pos].getAnio()<<"\n";
				cout<<"4. "<<"Color: "<<vc[pos].getColor()<<"\n";
				cout<<"5. "<<"Precio: "<<vc[pos].getPrecio()<<"\n";
				cout<<"Escriba el numero del atributo modificar:\n";
				cin>>resp;
				switch (resp){
				case 1:
					cout<<"Escriba la nueva marca del vehiculo:\n";
					cin>>Marca;
					vc[pos].setMarca(Marca);
					break;
				case 2:
					cout<<"Escriba el nuevo modelo del vehiculo:\n";
					cin>>Modelo;
					vc[pos].setModelo(Modelo);
					break;
				case 3:
					cout<<"Escriba el nuevo anio del vehiculo:\n";
					cin>>Anio;
					vc[pos].setAnio(Anio);
					break;
				case 4:
					cout<<"Escriba el nuevo color del vehiculo:\n";
					cin>>Color;
					vc[pos].setColor(Color);
					break;
				case 5:
					cout<<"Escriba el nuevo precio del vehiculo:\n";
					cin>>Precio;
					vc[pos].setPrecio(Precio);
					break;
				default:
					cout<<"Numero no valido\n";
				}
			}
			break;
		case 3:
			//Eliminar.
			cout<<"Escriba la marca del vehiculo que desea eliminar.\n";
			cin>>MarcaE;
			i=0;
			while (i<numProduct && pos==-1){
				if (vc[i].getMarca()== MarcaE){
					pos = i;
				}
				else{
					i++;
				}
			}
			if (pos!=-1){
				for (i=pos; i<numProduct; i++){
					vc[i]=vc[i+1];
					cout<<"Vehiculo eliminado.\n";
				}
				numProduct--;
			}
			else{
				cout<<"No existe ese vehiculo.\n";
			}
			break;
		case 4:
			//Consulta.
			cout<<"Introduzca el color del vehiculo\n";
			cin>>ColorC;
			ban=false;
			for (i=0; i<numProduct; i++){
				if (vc[i].getColor()==ColorC){
					ban=true;
					cout<<"Marca:\n"<<vc[i].getMarca()<<"\n";
					cout<<"Modelo:\n"<<vc[i].getModelo()<<"\n";
					cout<<"Anio:\n"<<vc[i].getAnio()<<"\n";
					cout<<"Color:\n"<<vc[i].getColor()<<"\n";
					cout<<"Precio:\n"<<vc[i].getPrecio()<<"\n";
				}
			}
			if(!ban){
				cout<<"Color no encontrado\n";
			}
			break;
		case 5:
			//Salir.
			cout<<"Finalizando programa\n";
			return 0;
			break;
		default:
			cout<<"Numero no valido.\n";
		}
	}
	return 0;
}
