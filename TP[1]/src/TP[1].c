/*
 ============================================================================
 Name        : TP[1].c
 Author      : Julieta
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "menuYvalidacion.h"
#include "operaciones.h"
int main(void) {

	setbuf(stdout, NULL);

		char seguir = 'n';
	    int opcion;
	    float precioAerolineas;
	    float precioLatam;
	    int opcionVuelos;
	    float kilometros;
	    int banderaKm = 0;
	    int banderaPrecio = 0;
	    int banderaAerolineas = 0;
	    int banderaLatam = 0;
	    int bandera3 = 0;
	    float descuentoDebAa;
	    float interesCreAa;
	    float precioBitAa;
	    float unitarioAa;
	    float descuentoDebL;
	    float interesCreL;
	    float precioBitL;
	    float unitarioL;
	    float diferenciaVuelos;




	    do{
	        opcion = menu();
	        switch(opcion){

	            case 1:

	                kilometros = pedirKm();
	                banderaKm = 1;
	                system("pause");
	                break;
	            case 2:



	                    opcionVuelos = subMenuVuelos(precioAerolineas, precioLatam);
	                do
	                {


	                    if(opcionVuelos == 1){

	                    precioAerolineas = ingresarPrecio(opcionVuelos);
	                    banderaAerolineas = 1;
	                        if(banderaAerolineas == 1){

	                            opcionVuelos = 2;

	                        }
	                    }else if(opcionVuelos == 2){

	                        precioLatam = ingresarPrecio(opcionVuelos);
	                        banderaLatam = 1;
	                        if(banderaLatam == 1){

	                            opcionVuelos = 1;

	                        }
	                    }
	                    if(banderaAerolineas == 1){

	                                if(banderaLatam == 1){

	                                    banderaPrecio = 1;
	                                }

	                            }
	                    } while(banderaPrecio == 0);



	                system("pause");
	                break;
	            case 3:


	                if(banderaKm == 1 && banderaPrecio == 1)
	                {


	                printf("Entro al 3\n");
	                descuentoDebAa = descuentoDebito(precioAerolineas);
	                interesCreAa = interesCredito(precioAerolineas);
	                precioBitAa = precioBitcoin(precioAerolineas);
	                unitarioAa = precioUnitario(precioAerolineas, kilometros);
	                descuentoDebL = descuentoDebito(precioLatam);
	                interesCreL = interesCredito(precioLatam);
	                precioBitL = precioBitcoin(precioLatam);
	                unitarioL = precioUnitario(precioLatam, kilometros);
	                diferenciaVuelos = diferencia(precioAerolineas, precioLatam);

	                bandera3 = 1;
	                printf("Calculando los costos\n");


	                }else{

	                    printf("Debe ingresar todos los datos para poder realizar los calculos");
	                }


	                system("pause");
	                break;
	            case 4:



	                if(banderaKm == 1 && banderaPrecio == 1 && bandera3 == 1){

	                    mostrarResultados (kilometros, precioAerolineas, descuentoDebAa, interesCreAa, precioBitAa, unitarioAa, precioLatam, descuentoDebL, interesCreL, precioBitL, unitarioL, diferenciaVuelos);

	                }else{
	                    printf("Debe ingresar todos los datos y ejecutar la opcion 3 para realizar los calculos\n");
	                }

	                system("pause");
	                break;
	            case 5:

	                descuentoDebAa = descuentoDebito(1629665);
	                interesCreAa = interesCredito(1629665);
	                precioBitAa = precioBitcoin(1629665);
	                unitarioAa = precioUnitario(1629665, 7090);
	                descuentoDebL = descuentoDebito(159339);
	                interesCreL = interesCredito(159339);
	                precioBitL = precioBitcoin(159339);
	                unitarioL = precioUnitario(159339, 7090);
	                diferenciaVuelos = diferencia(1629665, 159339);
	                mostrarResultados (7090, 1629665, descuentoDebAa, interesCreAa, precioBitAa, unitarioAa, 159339, descuentoDebL, interesCreL, precioBitL, unitarioL, diferenciaVuelos);


	                system("pause");
	                break;
	            case 6:

	                confirmarSalida(&seguir);
	                system("pause");

	                break;

	        }



	    }while(seguir != 's');

	return EXIT_SUCCESS;
}
