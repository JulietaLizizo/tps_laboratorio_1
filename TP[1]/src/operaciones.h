/*
 * operaciones.h
 *
 *  Created on: 14 abr. 2022
 *      Author: usuario
 */

#ifndef OPERACIONES_H_
#define OPERACIONES_H_

/** \brief calcula el descuento
 *
 * \param num1 float numero al que se le hara el descuento
 * \return float numero con descuento
 *
 */
float descuentoDebito(float);

/** \brief calcula el interes
 *
 * \param num1 float numero al que se le hara el interes
 * \return float numero con interes
 *
 */
float interesCredito (float);


/** \brief calcula el numero(precio) en bitcoin
  *
  * \param num1 float numero (precio) a calcular
  * \return float precio en bitcoin
  *
  */
float precioBitcoin(float);

/** \brief calcula la resta de dos numeros
 *
 * \param num1 float un numero a restar
 * \param num2 float un numero a restar
 * \return float diferencia entre los dos numeros
 *
 */
float diferencia(float, float);

/** \brief divide al precio por kilometro (division de dos numeros)
 *
 * \param precio float numero del precio a dividir
 * \param km float numero de los kilometros por los que se divide el precio
 * \return float resultado de la division (precio por kilometro)
 *
 */
float precioUnitario(float, float);

#endif /* OPERACIONES_H_ */
