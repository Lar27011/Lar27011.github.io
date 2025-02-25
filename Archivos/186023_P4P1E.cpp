#include <stdio.h>
#include <stdlib.h>

/* ================================
		Alvarez Ramirez Leonardo
				186023
Reforzamiento de la Lógica - Viaje aeropuerto
			Programación 1
	Grupo E 	-> 		14:00 a 16:00
	=============================== */
	
int main() {
	int claseVuelo, edadPasajero, isInternacional, descuentoEdad=0;
	float total, distanciaVuelo;
	//entrada de datos
	printf("Ingrese la distancia del vuelo en km: ");
	scanf("%f", &distanciaVuelo);
	
	printf("\nSeleccione la clase de vuelo\n");		//Ingreso de datos
	printf(" (1) Economica\n");	
	printf(" (2) Ejecutiva\n");
	printf(" (3) Primera clase\n");
	printf("Seleccion: ");
	scanf(" %d", &claseVuelo);
	
	printf("\nIngrese la edad del pasajero: ");	
	scanf(" %d", &edadPasajero);
	
	printf("El vuelo es internacional?  (1: Sí, 2: No):");
	scanf(" %d", &isInternacional);
		
   if(claseVuelo==1){									//Calculo de tarifa respecto a la clase
   		printf("Usted ha escodigo la seccion 1");
   		total = 2.50 * distanciaVuelo;
   	}else if(claseVuelo==2){
   		printf("Usted ha escodigo la seccion 2");
   		total = 4 * distanciaVuelo;
   	}else if(claseVuelo==3){	
		printf("Usted ha escodigo la seccion 3");
		total = 6 * distanciaVuelo;
	}
	
	if(edadPasajero<12){
		descuentoEdad=30;//servirá para indicar en la salida cuánto descuento se aplicó
		total*=0.7;//70% del costo total
		printf("\Se a aplicado un 30%% por la edad");
	}
	else if(edadPasajero>60){
		descuentoEdad=25;//servirá para indicar en la salida cuánto descuento se aplicó
		total*=0.75;//75% del costo total
		printf("\nSe a aplicado un 25%% por la edad");
	}
	
	if(isInternacional==1){
		total*=0.85;
	}
	else if(isInternacional==2){
		total=total;
	}
	else{
		printf("Opción no valida :)");
	}
	printf("\nTotal a pagar: $%.2f MXN", total);
	
	return 0;
}
