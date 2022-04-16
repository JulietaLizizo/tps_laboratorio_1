/*
 * menuYvalidacion.h
 *
 *  Created on: 14 abr. 2022
 *      Author: usuario
 */

#ifndef MENUYVALIDACION_H_
#define MENUYVALIDACION_H_

/** \brief menu de opciones
 *
 * \return int opcion que ingresa el usuario
 *
 */
int menu();

/** \brief pide y verifica un numero
 *
 * \param float numero que pide
 * \param int verificar que sea un numero y no sea negativo
 * \return float numero que se le ingresa
 *
 */
float pedirKm();


/** \brief comfirma la salida del menu
 *
 * \param x char* caracter que se ingresa para salir
 * \return void
 *
 */
void confirmarSalida(char*);


/** \brief opcion para ingresar precios
 *
 * \param ingreso int opcion de ingreso
 * \return float precio ingresado
 *
 */
float ingresarPrecio(int);

/** \brief menu de vuelos e ingreso de precios
 *
 * \param x float primer numero (precio) a ingresar
 * \param y float segundo numero (precio) a ingresar
 * \return int opcion de menu que elige
 *
 */
int subMenuVuelos(float, float);

/** \brief mostrar resultados
 *
 * \param float numeros (resultados)
 * \param
 * \return
 *
 */
void mostrarResultados (float km, float precioAa, float precioDa, float precioCa, float precioBa, float precioUa, float precioL, float precioDl, float precioCl, float precioBl, float precioUl, float difVuelos);


#endif /* MENUYVALIDACION_H_ */
