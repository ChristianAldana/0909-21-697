#include "iostream"  // Biblioteca estandar que permite entradas y salidas 
#include "string"	// * TEXTO */
#include<stdio.h> // Incluye las funciones, constantes y macros desde la librería de Entrada / Salida estándard (standar input/output) 

//Christian Eduardo Aldana carne 0909-21-697
//small comment, this problem solving is one of the most complicated that I have had to carry out, however I managed to finish it successfully and complying with the requirements provided in the partial.


using namespace std; //Creacion de un bloque.

int main()
{

	//DECLARAR VARIABLES DE SWITCH.
	float peso, Lar_Paquete, Alt_Paquete, Anch_Paquete, PesoVolumetrico, Tarifa_Peso, Total_Pagar, sucursales_002, TarifaVolumen02; 
	

	int opc_001, sucursales, sucursales_01, opc_002, opc_003; // OPCIONES A ELEGIR EN LOS SWITCH
	
	char  nombre [35]; //Declarar variables del nombre con limite de caracteres.

cout << "Bienvenid@ al programa de servicio de transporte de paqueteria." << "\n";  //Bienvenida al programa.
cout << "Querido usuario para que usted tenga mas claro, de como trabaja nuestra empresa, ";
cout << "se le dara a conocer el precio de la tarifa por el peso y la distancia del producto a enviar." << "\n"; //   ->  \n = salto de linea
 
	printf ("*******************************\n"); //Tarifa del peso y distancia del producto.
	printf ("     Peso (1 Kg = Q 2.5)	  	\n"); 
	printf ("     Distancia (1 Km = Q 0.13) \n"); 
	printf ("*******************************\n"); 

	
    cout << "Querido usuario, porfavor ingrese su Nombre."<< "\n";
	cin >> nombre; //Leer nombre.                                
			
			system ("cls"); //LIMPIAR PANTALLA.
			
cout << nombre << " Usted ha entrado al area de envio." << "\n"; //ENVIO DE PAQUETES
cout << "A continuacion se le pedira que escoga el tipo de mercaderia que desea enviar." << "\n"; //   ->  \n = salto de linea 


			//Menu que eligira  el usuario que enviar.
	printf ("*******************************\n"); 
	printf ("         Menu 				  	\n"); 
	printf ("        1)- Documentos. 		\n"); 
	printf ("        2)- Paquetes.			\n");
	printf ("        3)- Mobiliario.	    \n"); 
	printf ("        4)- Repuestos.		    \n"); 
	printf ("        5)- Art. Electronicos.	\n"); 
	printf ("        6)- Salir		.	    \n"); //Salir del programa.
	printf ("*******************************\n");
	
		printf ( "Porfavor eliga el tipo de mercaderia a enviar \n");
		cin >> ( opc_001); //Leer variable
	
	switch (opc_001) //OPCION 1
	{
			
	case 1: //Opcion 1 documentos 
	
	cout << "Porfavor eliga a que direccion desea enviar?" << "\n";
		
	printf ("*******************************\n"); 
	printf ("         Sucursales 			\n"); //SUCURSALES EN GUATEMALA. 
	printf ("        - 10Km (GUATEMALA) 	\n"); 
	printf ("        - 300Km (IZABAL) 		\n");
	printf ("        - 460Km (PETEN)	    \n"); 
	printf ("        - 178KM (CHIQUIMULA)	\n"); 
	printf ("        - 200Km (Retalhuleu)	\n"); 
	printf ("        - ? Otro departamento  \n"); 
	printf ("*******************************\n");
			cin >> sucursales;
				cout << "El costo total para enviar los documentos es de: Q40";

break;
	
//***************************************************************************************************************************	
case 2: // SI ELIGE EL NUMERO 2 ES ENVIO DE PAQUETES.
		
		cout << "Sabe usted cual es el peso del paquete?\n"; //PARA DEFINIR SI SABE O NO EL PESO DEL PAQUETE.
		
	printf ("*******************************\n"); 
	printf ("     1 = NO				  	\n"); 
	printf ("     2 = SI					\n"); 
	printf ("*******************************\n"); 
	cin >> opc_002;
	
//******************************************************************************************************
		switch (opc_002) // SWITCH PARA SABER SI EL USUARIO NO SABE EL PESO DEL PAQUETE.
	{
		case 1: // OPCION SI, EL USUARIO NO SABE CUAL ES EL PESO DEL PAQUETE.
			cout << "Porfavor ingrese el largo del paquete." << "\n";
				cin >> Lar_Paquete;
		
			cout << "Porfavor ingrese el ancho del paquete." << "\n";
				cin >> Anch_Paquete;
		
			cout << "Porfavor ingrese el alto del paquete." << "\n";
				cin >>	Alt_Paquete;
				
			PesoVolumetrico = Lar_Paquete * Anch_Paquete * Alt_Paquete / 2272; //CALCULAR EL PESO VOLUMETRICO 
			
			if (PesoVolumetrico < 51){
					
			TarifaVolumen02 =  PesoVolumetrico * 2.5; //TARIFA SIN EL PESO * 2.5 QUE ES EL PRECIO DE LOS KG.
		
			cout << "Porfavor eliga a que direccion desea enviar?" << "\n";
		
	printf ("*******************************\n"); 
	printf ("         Sucursales 			\n"); //SUCURSALES EN GUATEMALA. 
	printf ("        - 10Km (GUATEMALA) 	\n"); 
	printf ("        - 300Km (IZABAL) 		\n");
	printf ("        - 460Km (PETEN)	    \n"); 
	printf ("        - 178KM (CHIQUIMULA)	\n"); 
	printf ("        - 200Km (Retalhuleu)	\n"); 
	printf ("        - ? Otro departamento  \n"); 
	printf ("*******************************\n");
	cout << "Usuario porfavor escriba los kilometros de las sucursales para poder hacer el calculo, en dado caso que, ";
	cout << "desee enviar a otro departamento porfavor colocar los kilometros." << "\n";
	
	cin >> sucursales;
		
		sucursales_002 = sucursales * 0.13; //LOS KM DE LAS SUCURSALES * 0.13.
		
		Total_Pagar = TarifaVolumen02 + sucursales_002; //SUMA DE LA TARIFA VOLUMEN + EL PRECIO POR LOS KM DE LAS SUCURSALES.
		
		cout << "En total a pagar es de Q:" << Total_Pagar; //TOTAL QUE TENDRA QUE PAGAR EL USUARIO.
}
else { cout<< "cantidad maxima sobrepasada, el maximo es de 50kg"<< "\n";
}
break;

//***********************************************************************************************************************************	
		case 2: //EL USUARIO SI SABE EL PESO DEL PAQUETE	

			cout << "Porfavor ingrese el peso del paquete" << "\n";
				cin >> peso;
		if (peso < 36){
		Tarifa_Peso = peso * 2.5; //PRECIO REAL * PRECIO KG.
		
		cout << "Porfavor eliga a que direccion desea enviar?" << "\n";;
		
	printf ("*******************************\n"); 
	printf ("         Sucursales 			\n"); //SUCURSALES EN GUATEMALA. 
	printf ("        - 10Km (GUATEMALA) 	\n"); 
	printf ("        - 300Km (IZABAL) 		\n");
	printf ("        - 460Km (PETEN)	    \n"); 
	printf ("        - 178KM (CHIQUIMULA)	\n"); 
	printf ("        - 200Km (Retalhuleu)	\n"); 
	printf ("        - ? Otro departamento  \n"); 
	printf ("*******************************\n");
	cout << "Usuario porfavor escriba los kilometros de las sucursales para poder hacer el calculo, en dado caso que, ";
	cout << "desee enviar a otro departamento porfavor colocar los kilometros." << "\n";
	
	cin >> sucursales; //LEER VARIABLE DE KM
		
		
		sucursales_002 = sucursales * 0.13; //LOS KM DE LAS SUCURSALES * 0.13.
		
		Total_Pagar = Tarifa_Peso + sucursales_002; //TOTAL A PAGAR SUMANDO LA TARIFA PESO + EL PRECIO POR LOS KM DE LAS SUCURSALES.
		
		cout << "En total a pagar es de Q:" << Total_Pagar; //TOTAL QUE TENDRA QUE PAGAR EL USUARIO.	
}
else { cout<< "cantidad maxima sobrepasada, el maximo es de 35kg"<< "\n";
}	
}
	break;	
//*************************************************************************************************************************************************
	case 3:
		cout << "Sabe usted cual es el peso del mobiliario?\n"; //PARA DEFINIR SI SABE O NO EL PESO DEL MOBILIARIO.
		
	printf ("*******************************\n"); 
	printf ("     1 = NO				  	\n"); 
	printf ("     2 = SI					\n"); 
	printf ("*******************************\n"); 
	cin >> opc_003;
	
	switch (opc_003) // SWITCH PARA SABER SI EL USUARIO NO SABE EL PESO DEL MOBILIARIO.
	{
		case 1: // OPCION SI, EL USUARIO NO SABE CUAL ES EL PESO DEL MOBILIARIO.
		
			cout << "Porfavor ingrese el largo del mobiliario" << "\n";
				cin >> Lar_Paquete;
		
			cout << "Porfavor ingrese el ancho del mobiliario" << "\n";
				cin >> Anch_Paquete;
		
			cout << "Porfavor ingrese el alto del mobiliario" << "\n";
				cin >>	Alt_Paquete;
				
			PesoVolumetrico = Lar_Paquete * Anch_Paquete * Alt_Paquete / 2272; //CALCULAR EL PESO VOLUMETRICO 
			
				if (PesoVolumetrico < 51){
			
			TarifaVolumen02 =  PesoVolumetrico * 2.5; //TARIFA SIN EL PESO * 2.5 QUE ES EL PRECIO DE LOS KG.
		
			cout << "Porfavor eliga a que direccion desea enviar?" << "\n";
		
	printf ("*******************************\n"); 
	printf ("         Sucursales 			\n"); //SUCURSALES EN GUATEMALA. 
	printf ("        - 10Km (GUATEMALA) 	\n"); 
	printf ("        - 300Km (IZABAL) 		\n");
	printf ("        - 460Km (PETEN)	    \n"); 
	printf ("        - 178KM (CHIQUIMULA)	\n"); 
	printf ("        - 200Km (Retalhuleu)	\n"); 
	printf ("        - ? Otro departamento  \n"); 
	printf ("*******************************\n");
	cout << "Usuario porfavor escriba los kilometros de las sucursales para poder hacer el calculo, en dado caso que, ";
	cout << "desee enviar a otro departamento porfavor colocar los kilometros." << "\n";
	
	cin >> sucursales;
		
		sucursales_002 = sucursales * 0.13; //LOS KM DE LAS SUCURSALES * 0.13.
		
		Total_Pagar = TarifaVolumen02 + sucursales_002; //SUMA DE LA TARIFA VOLUMEN + EL PRECIO POR LOS KM DE LAS SUCURSALES.
		
		cout << "En total a pagar es de Q:" << Total_Pagar; //TOTAL QUE TENDRA QUE PAGAR EL USUARIO.
		
		}
else { cout<< "cantidad maxima sobrepasada, el maximo es de 50kg"<< "\n";
}
		break;

//**************************************************************************************************************************************			
		case 2: //EL USUARIO SI SABE EL PESO DEL MOBILIARIO
		
			cout << "Porfavor ingrese el peso del mobiliario" << "\n";
				cin >> peso;
			if (peso < 36){
		Tarifa_Peso = peso * 2.5; //PRECIO REAL * PRECIO KG.
		
		cout << "Porfavor eliga a que direccion desea enviar?" << "\n";;
		
	printf ("*******************************\n"); 
	printf ("         Sucursales 			\n"); //SUCURSALES EN GUATEMALA. 
	printf ("        - 10Km (GUATEMALA) 	\n"); 
	printf ("        - 300Km (IZABAL) 		\n");
	printf ("        - 460Km (PETEN)	    \n"); 
	printf ("        - 178KM (CHIQUIMULA)	\n"); 
	printf ("        - 200Km (Retalhuleu)	\n"); 
	printf ("        - ? Otro departamento  \n"); 
	printf ("*******************************\n");
	cout << "Usuario porfavor escriba los kilometros de las sucursales para poder hacer el calculo, en dado caso que, ";
	cout << "desee enviar a otro departamento porfavor colocar los kilometros." << "\n";
	
	cin >> sucursales; //LEER VARIABLE DE KM
		
		
		sucursales_002 = sucursales * 0.13; //LOS KM DE LAS SUCURSALES * 0.13.
		
		Total_Pagar = Tarifa_Peso + sucursales_002; //TOTAL A PAGAR SUMANDO LA TARIFA PESO + EL PRECIO POR LOS KM DE LAS SUCURSALES.
		
		cout << "En total a pagar es de Q:" << Total_Pagar; //TOTAL QUE TENDRA QUE PAGAR EL USUARIO.
}
else { cout<< "cantidad maxima sobrepasada, el maximo es de 35kg"<< "\n";
}
		break;
//********************************************************************************************************************************************
case 4:	
	//Opcion de repuesto 

		cout << "Sabe usted cual es el peso del repuesto?\n"; //PARA DEFINIR SI SABE O NO EL PESO DEL REPUESTO.
		
	printf ("*******************************\n"); 
	printf ("     1 = NO				  	\n"); 
	printf ("     2 = SI					\n"); 
	printf ("*******************************\n"); 
	cin >> opc_003;
//*************************************************************************************************************************************************
	
	switch (opc_003) // SWITCH PARA SABER SI EL USUARIO NO SABE EL PESO DEL REPUESTO.
	{
		case 1: // OPCION SI, EL USUARIO NO SABE CUAL ES EL PESO DEL REPUESTO.
		
			cout << "Porfavor ingrese el largo del mobiliario" << "\n";
				cin >> Lar_Paquete;
		
			cout << "Porfavor ingrese el ancho del mobiliario" << "\n";
				cin >> Anch_Paquete;
		
			cout << "Porfavor ingrese el alto del mobiliario" << "\n";
				cin >>	Alt_Paquete;
				
			PesoVolumetrico = Lar_Paquete * Anch_Paquete * Alt_Paquete / 2272; //CALCULAR EL PESO VOLUMETRICO 
			
			if (PesoVolumetrico < 51){
	
			TarifaVolumen02 =  PesoVolumetrico * 2.5; //TARIFA SIN EL PESO * 2.5 QUE ES EL PRECIO DE LOS KG.
		
			cout << "Porfavor eliga a que direccion desea enviar?" << "\n";
		
	printf ("*******************************\n"); 
	printf ("         Sucursales 			\n"); //SUCURSALES EN GUATEMALA. 
	printf ("        - 10Km (GUATEMALA) 	\n"); 
	printf ("        - 300Km (IZABAL) 		\n");
	printf ("        - 460Km (PETEN)	    \n"); 
	printf ("        - 178KM (CHIQUIMULA)	\n"); 
	printf ("        - 200Km (Retalhuleu)	\n"); 
	printf ("        - ? Otro departamento  \n"); 
	printf ("*******************************\n");
	cout << "Usuario porfavor escriba los kilometros de las sucursales para poder hacer el calculo, en dado caso que, ";
	cout << "desee enviar a otro departamento porfavor colocar los kilometros." << "\n";
	
	cin >> sucursales;
		
		sucursales_002 = sucursales * 0.13; //LOS KM DE LAS SUCURSALES * 0.13.
		
		Total_Pagar = TarifaVolumen02 + sucursales_002; //SUMA DE LA TARIFA VOLUMEN + EL PRECIO POR LOS KM DE LAS SUCURSALES.
		
		cout << "En total a pagar es de Q:" << Total_Pagar; //TOTAL QUE TENDRA QUE PAGAR EL USUARIO.
		}
else { cout<< "cantidad maxima sobrepasada, el maximo es de 50kg"<< "\n";
}
		break;
		
//**************************************************************************************************************************************	
	case 2: //EL USUARIO SI SABE EL PESO DEL REPUESTO

		
			cout << "Porfavor ingrese el peso del repuesto" << "\n";
				cin >> peso;
		
		Tarifa_Peso = peso * 2.5; //PRECIO REAL * PRECIO KG.
	
		if (peso < 36){

		cout << "Porfavor eliga a que direccion desea enviar?" << "\n";;
		
	printf ("*******************************\n"); 
	printf ("         Sucursales 			\n"); //SUCURSALES EN GUATEMALA. 
	printf ("        - 10Km (GUATEMALA) 	\n"); 
	printf ("        - 300Km (IZABAL) 		\n");
	printf ("        - 460Km (PETEN)	    \n"); 
	printf ("        - 178KM (CHIQUIMULA)	\n"); 
	printf ("        - 200Km (Retalhuleu)	\n"); 
	printf ("        - ? Otro departamento  \n"); 
	printf ("*******************************\n");
	cout << "Usuario porfavor escriba los kilometros de las sucursales para poder hacer el calculo, en dado caso que, ";
	cout << "desee enviar a otro departamento porfavor colocar los kilometros." << "\n";
	
	cin >> sucursales; //LEER VARIABLE DE KM
		
		
		sucursales_002 = sucursales * 0.13; //LOS KM DE LAS SUCURSALES * 0.13.
		
		Total_Pagar = Tarifa_Peso + sucursales_002; //TOTAL A PAGAR SUMANDO LA TARIFA PESO + EL PRECIO POR LOS KM DE LAS SUCURSALES.
		
		cout << "En total a pagar es de Q:" << Total_Pagar; //TOTAL QUE TENDRA QUE PAGAR EL USUARIO.	
}	
else { cout<< "cantidad maxima sobrepasada, el maximo es de 35kg"<< "\n";
}
}
break;

//********************************************************************************************************************************************
case 5:
	//Opcion de art.electronicos. 

		cout << "Sabe usted cual es el peso de los art electronicos?\n"; //PARA DEFINIR SI SABE O NO EL PESO DE LOS ART. ELECTRONICOS.
		
	printf ("*******************************\n"); 
	printf ("     1 = NO				  	\n"); 
	printf ("     2 = SI					\n"); 
	printf ("*******************************\n"); 
	cin >> opc_003;
//********************************************************************************************************************************************
	
		switch (opc_003) // SWITCH PARA SABER SI EL USUARIO NO SABE EL PESO DE LOS ART. ELECTRONICOS.
	{
		case 1: // OPCION SI, EL USUARIO NO SABE CUAL ES EL PESO DEL REPUESTO.
		
			cout << "Porfavor ingrese el largo de los art. electronicos" << "\n";
				cin >> Lar_Paquete;
		
			cout << "Porfavor ingrese el ancho de los art. electronicos" << "\n";
				cin >> Anch_Paquete;
		
			cout << "Porfavor ingrese el alto de los art. electronicos" << "\n";
				cin >>	Alt_Paquete;
				
			PesoVolumetrico = Lar_Paquete * Anch_Paquete * Alt_Paquete / 2272; //CALCULAR EL PESO VOLUMETRICO 
			
				if (PesoVolumetrico < 51){
	
			TarifaVolumen02 =  PesoVolumetrico * 2.5; //TARIFA SIN EL PESO * 2.5 QUE ES EL PRECIO DE LOS KG.
		
			cout << "Porfavor eliga a que direccion desea enviar?" << "\n";
		
	printf ("*******************************\n"); 
	printf ("         Sucursales 			\n"); //SUCURSALES EN GUATEMALA. 
	printf ("        - 10Km (GUATEMALA) 	\n"); 
	printf ("        - 300Km (IZABAL) 		\n");
	printf ("        - 460Km (PETEN)	    \n"); 
	printf ("        - 178KM (CHIQUIMULA)	\n"); 
	printf ("        - 200Km (Retalhuleu)	\n"); 
	printf ("        - ? Otro departamento  \n"); 
	printf ("*******************************\n");
	cout << "Usuario porfavor escriba los kilometros de las sucursales para poder hacer el calculo, en dado caso que, ";
	cout << "desee enviar a otro departamento porfavor colocar los kilometros." << "\n";
	
	cin >> sucursales;
		
		sucursales_002 = sucursales * 0.13; //LOS KM DE LAS SUCURSALES * 0.13.
		
		Total_Pagar = TarifaVolumen02 + sucursales_002; //SUMA DE LA TARIFA VOLUMEN + EL PRECIO POR LOS KM DE LAS SUCURSALES.
		
		cout << "En total a pagar es de Q:" << Total_Pagar; //TOTAL QUE TENDRA QUE PAGAR EL USUARIO.
}
else { cout<< "cantidad maxima sobrepasada, el maximo es de 50kg"<< "\n";
}
		break;
//********************************************************************************************************************************************
	
	case 2: //EL USUARIO SI SABE EL PESO DEL REPUESTO

		
			cout << "Porfavor ingrese el peso de los art. Electronicos" << "\n";
				cin >> peso;
		
		if (peso < 36){

		Tarifa_Peso = peso * 2.5; //PRECIO REAL * PRECIO KG.
		
		cout << "Porfavor eliga a que direccion desea enviar?" << "\n";;
		
	printf ("*******************************\n"); 
	printf ("         Sucursales 			\n"); //SUCURSALES EN GUATEMALA. 
	printf ("        - 10Km (GUATEMALA) 	\n"); 
	printf ("        - 300Km (IZABAL) 		\n");
	printf ("        - 460Km (PETEN)	    \n"); 
	printf ("        - 178KM (CHIQUIMULA)	\n"); 
	printf ("        - 200Km (Retalhuleu)	\n"); 
	printf ("        - ? Otro departamento  \n"); 
	printf ("*******************************\n");
	cout << "Usuario porfavor escriba los kilometros de las sucursales para poder hacer el calculo, en dado caso que, ";
	cout << "desee enviar a otro departamento porfavor colocar los kilometros." << "\n";
	
	cin >> sucursales; //LEER VARIABLE DE KM
		
		
		sucursales_002 = sucursales * 0.13; //LOS KM DE LAS SUCURSALES * 0.13.
		
		Total_Pagar = Tarifa_Peso + sucursales_002; //TOTAL A PAGAR SUMANDO LA TARIFA PESO + EL PRECIO POR LOS KM DE LAS SUCURSALES.
		
		cout << "En total a pagar es de Q:" << Total_Pagar; //TOTAL QUE TENDRA QUE PAGAR EL USUARIO.
		}
else { cout<< "cantidad maxima sobrepasada, el maximo es de 35kg"<< "\n";
}	
break;
}
}
}
}