/*
 * menuYvalidacion.c
 *
 *  Created on: 14 abr. 2022
 *      Author: usuario
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "menuYvalidacion.h"
/** \brief menu de opciones
 *
 * \return int opcion que ingresa el usuario
 *
 */
int menu(){

    int opcion;
    int cant;

        system("cls");
        printf("*** Menu de opciones*** \n\n");
        printf("1- Ingresar kilometros:\n");
        printf("2- Ingresar precio de Vuelos:\n");
        printf("3- Calcular todos los costos: \n");
        printf("4- Informar resultados: \n");
        printf("5- Carga forzada de datos: \n");
        printf("6- Salir\n");
        printf("Ingrese una opcion\n");
        fflush(stdin);
        cant = scanf("%d", &opcion);
        if(opcion >= 7 || cant == 0){

            printf("No es una opcion valida\n");
            system("pause");
        }


        return opcion;


}
/** \brief pide y verifica un numero
 *
 * \param float numero que pide
 * \param int verificar que sea un numero y no sea negativo
 * \return float numero que se le ingresa
 *
 */
float pedirKm (){

        float km;
        int cant;


            printf("Ingrese kilometros: ");
            cant = scanf("%f", &km);

             while(km <= 0 || cant == 0){
                fflush(stdin);
                printf("Ingrese numeros validos: ");
                cant = scanf("%f", &km);
            }
            return km;
}


/** \brief comfirma la salida del menu
 *
 * \param x char* caracter que se ingresa para salir
 * \return void
 *
 */
void confirmarSalida(char* x){


            printf("Desea salir?");
            fflush(stdin);
            scanf("%c", x);

}

/** \brief opcion para ingresar precios
 *
 * \param ingreso int opcion de ingreso
 * \return float precio ingresado
 *
 */
float ingresarPrecio(int ingreso){

    float precio;
    int cant;

    if(ingreso == 1){

        printf("Ingrese precio Aerolineas: ");
        cant = scanf("%f", &precio);

         while(precio <= 0 || cant == 0){
                fflush(stdin);
                printf("Ingrese precio validos: ");
                cant = scanf("%f", &precio);
            }
        }else if(ingreso == 2){

        printf("Ingrese precio Latam: ");
        cant = scanf("%f", &precio);
            while(precio <= 0 || cant == 0){
                fflush(stdin);
                printf("Ingrese un precio valido: ");
                cant = scanf("%f", &precio);
            }
        }else{

            printf("Ingrese una opcion valida");
            scanf("%d", &ingreso);
        }

        return precio;


}

/** \brief menu de vuelos e ingreso de precios
 *
 * \param x float primer numero (precio) a ingresar
 * \param y float segundo numero (precio) a ingresar
 * \return int opcion de menu que elige
 *
 */
int subMenuVuelos(float x, float y){

    int opcion;
    int cant;

    printf("*** Vuelos***\n\n");
    printf("Ingrese el precio: Aerolineas Argentinas %.2f || Latam %.2f\n ", x, y);
    printf("1- Aerolineas\n");
    printf("2- Latam\n");
    printf("Elija una opcion\n");
    cant = scanf("%d", &opcion);
    while (opcion >= 3 || cant == 0){
        fflush(stdin);
        printf("Ingrese un numero valido\n");
        cant = scanf("%d", &opcion);
    }
    return opcion;

}


/** \brief mostrar resultados
 *
 * \param float numeros (resultados)
 * \param
 * \return
 *
 */
void mostrarResultados (float km, float precioAa, float precioDa, float precioCa, float precioBa, float precioUa, float precioL, float precioDl, float precioCl, float precioBl, float precioUl, float difVuelos){

    printf("Kilometros ingresados: %.2f km \n\n", km);

	printf("Precio Aerolineas Argentinas: $%.2f \n", precioAa);
	printf("a) Precio con tarjeta de debito: $%.2f \n", precioDa);
	printf("b) Precio con tarjeta de credito: $%.2f \n", precioCa);
	printf("c) Precio pagando con bitcoins: %.5f BTC \n", precioBa);
	printf("d) Precio unitario: $%.2f \n\n", precioUa);

	printf("Precio Latam: $%.2f \n", precioL);
	printf("a) Precio con tarjeta de debito: $%.2f \n", precioDl);
	printf("b) Precio con tarjeta de credito: $%.2f \n", precioCl);
	printf("c) Precio pagando con bitcoins: %.5f BTC \n", precioBl);
	printf("d) Precio unitario: $%.2f \n\n", precioUl);

	printf("La diferencia de precio es: $%.2f \n\n", difVuelos);

}


