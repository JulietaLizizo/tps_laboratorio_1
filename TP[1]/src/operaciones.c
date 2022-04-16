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


float descuentoDebito(float num1)
    {
        float rta;

        rta = num1 - ((num1 * 10) / 100);

        return rta;
    }


float interesCredito(float num1){

    float rta;

    rta = num1 + ((num1 * 25) / 100);
    return rta;
}


 float precioBitcoin(float num1){

    float rta;

    rta = num1 / 4495110.90;
    return rta;


}

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


float precioUnitario(float precio, float km){

    float rta;

    rta = precio/km;

    return rta;
}

