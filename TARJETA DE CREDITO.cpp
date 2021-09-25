#include "iostream"  // Biblioteca estandar que permite entradas y salidas 
#include "string"	// * TEXTO */

//Christian Eduardo Aldana 0909-21-697
// small comment, this exercise seemed a bit difficult to adapt it to the c ++ code but in the end I managed to do it without any problem.

using namespace std; //Creacion de un bloque.

int main()

{
	float ahorro_bank, ahorro_bank2, dolares,moneda, pin_security, pin_security20, quetzales, rest, rest3;// Declara variables 
	
	string nombre; //Declaracion
	string end;
	string end2;
	
	// seccion de declaraciones.
	pin_security20 = 2021;
	quetzales = 5000;
	dolares = 650;
	
	
	cout << " Hola " << "Bienvenid@ usuario " << endl; //Bienvenida al usuario.
	cout << "" << endl;
	cout << "A continuacion se le pedira que ingrese su pin para poder acceder. " << endl;
	cout << " " << endl;
	do {
		cout << "Ingrese el pin de seguridad" << endl; //PIN PARA ACCEDER
		
		cin >> pin_security; //LEER CODIGO
		if (pin_security20!=pin_security) { //FORMULA PARA EL PIN CORRECTO.
			cout << "Ingrese el pin correcto" << endl; //SI NO INGRESA PIN CORRECTO, NO PODRA AVANZAR.
		}
	} while (pin_security20!=pin_security); //PIN IGUALITARIO.
	cout << "Bienvenido" << endl;
	cout << "Christian Aldana" << " " << "Carné 0909-21-697" << endl; //NOMBRE Y CARNE
	cout << "" << endl;
	cout << "Bienvenido Christian Aldana, a continuacion se te dara a conocer cuanto tienes de saldo " << endl;
	
	cout << "Su saldo actual en Quetzales es de Q," << quetzales << endl;// SALDO EN QUETZALES
	cout << "Su saldo actual en Dolares es de $" << dolares << endl; //SALDO EN DOLARES
	cout << "Desea realizar alguna transaccion S/N?" << endl; //REALIZAR UNA TRANSACCION.
	cin >> end;
	if (end=="S" || end=="s") { //SI PRESIONA S SEGUIRA CON ESTE PROCEDIMIENTO.
		cout << " En que moneda desea realizar la transaccion?" << endl; //MONEDA PARA REALIZAR TRANSACCION
		cout << "1 = QUETZALES (Q)" << endl;
		cout << "2 = DOLARES ($)" << endl;
		
		cin >> moneda; //LEER VARIABLE
			system ("cls"); //LIMPIAR PANTALLA.

		cout << "Su saldo actual en Quetzales es de Q," << quetzales << endl;  //SALDO EN MONEDA Q
		cout << "Su saldo actual en Dolares es de $" << dolares << endl; //SALDO EN MONEDA $
		cout << "" << endl; //LEER VARIABLE TRANSACCION.
		
		if (moneda==1) { //INFORMACION SI ELIGE EN QUETZALES.
			cout << "Usted ha seleccionado la moneda en Quetzales" << endl;
			cout << "Ingrese la cantidad de dinero que quiera retirar" << endl;
			cin >> ahorro_bank; //LEER VARIABLE MONEDA QUETZALES
			
			cout << "" << endl; 
			if (ahorro_bank<=5000) {
				cout << "Usted ha retirado: Q" << ahorro_bank << endl;// LA CANTIDAD MAXIMA ES DE Q5000.
				rest = 5000-ahorro_bank; // RESTA DE LOS 5,000 MENOS CANTIDAD INGRESADA.
				cout << " su saldo actual es de Q" << rest << endl; //MOSTRAR EL SALDO ACTUAL.
			} else {
				cout << "Saldo insuficiente" << endl; //EL USUARIO NO TIENE SALDO.
			}
		} else {
			if (moneda==2) { //SI ELIGE EL DOLAR.
				cout << " Usted ha seleccionado la moneda en Dolares;" << endl;
				cout << "Ingrese la cantidad de dinero que quiera retirar" << endl;
				cin >> ahorro_bank2; //LEER VARIABLE DOLAR.
				cout << "" << endl;
				if (ahorro_bank2<=650) { 
					rest3 = (650.00-ahorro_bank2); //RESTA DE 650 - CANTIDAD INGRESADA.
					cout << "Usted ha retirado $" << ahorro_bank2 << endl;
					cout << " Su saldo actual es de $" << rest3 << endl;
				} else {
					cout << "Saldo insuficiente" << endl; //EL USUARIO NO TIENE SALDO PARA RETIRAR.
				}
			}
		}
	}
	return 0; //FIN
}

