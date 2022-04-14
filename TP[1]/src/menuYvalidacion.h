/*
 * menuYvalidacion.h
 *
 *  Created on: 14 abr. 2022
 *      Author: usuario
 */

#ifndef MENUYVALIDACION_H_
#define MENUYVALIDACION_H_

int menu();

float pedirKm();


void confirmarSalida(char*);


float ingresarPrecio(int);


int subMenuVuelos(float, float);


void mostrarResultados (float km, float precioAa, float precioDa, float precioCa, float precioBa, float precioUa, float precioL, float precioDl, float precioCl, float precioBl, float precioUl, float difVuelos);


#endif /* MENUYVALIDACION_H_ */
