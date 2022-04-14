/*
 * operaciones.c
 *
 *  Created on: 14 abr. 2022
 *      Author: usuario
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "operaciones.h"

/** \brief calcula el descuento
 *
 * \param num1 float numero al que se le hara el descuento
 * \return float numero con descuento
 *
 */
float descuentoDebito(float num1)
    {
        float rta;

        rta = num1 - ((num1 * 10) / 100);

        return rta;
    }

/** \brief calcula el interes
 *
 * \param num1 float numero al que se le hara el interes
 * \return float numero con interes
 *
 */
float interesCredito(float num1){

    float rta;

    rta = num1 + ((num1 * 25) / 100);
    return rta;
}

/** \brief calcula el numero(precio) en bitcoin
  *
  * \param num1 float numero (precio) a calcular
  * \return float precio en bitcoin
  *
  */
 float precioBitcoin(float num1){

    float rta;

    rta = num1 / 4495110.90;
    return rta;


}
/** \brief calcula la resta de dos numeros
 *
 * \param num1 float un numero a restar
 * \param num2 float un numero a restar
 * \return float diferencia entre los dos numeros
 *
 */
float diferencia (float num1, float num2){

    float rta;
    if(num2 > num1){

        rta = num2 - num1;
    }
    else{

        rta = num1 - num2;
    }


    return rta;


}

/** \brief divide al precio por kilometro (division de dos numeros)
 *
 * \param precio float numero del precio a dividir
 * \param km float numero de los kilometros por los que se divide el precio
 * \return float resultado de la division (precio por kilometro)
 *
 */
float precioUnitario(float precio, float km){

    float rta;

    rta = precio/km;

    return rta;
}

