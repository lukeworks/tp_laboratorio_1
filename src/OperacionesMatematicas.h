/*
============================================================================
Lucas Gonzalez Dall Ora - 1E 2022 Trabajo Practico N°1
============================================================================
 */
#ifndef OPERACIONESMATEMATICAS_H_
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define DESCUENTO 0.9
#define INTERES 1.25
#define BITCOIN 4606954.55

float ingresarNumeros(char mensaje[]);

void calcularPrecioDebito(float precioAerolineas, float precioLatam, float *pRetornoAerolineas, float *pRetornoLatam);

void calcularPrecioCredito(float precioAerolineas, float precioLatam, float *pRetornoAerolineasCredito, float *pRetornoLatamCredito);

void calcularPrecioBitcoin(float precioAerolineas, float precioLatam, float *pRetornoAerolineasBitcoin, float *pRetornoLatamBitcoin);

void calcularPrecioKilometro(float kilometros, float precioAerolineas, float precioLatam, float *pPrecioUnitarioAerolineas, float *pPrecioUnitarioLatam);

float calcularDiferenciaPrecios(float precioAerolineas, float precioLatam);

#endif /* OPERACIONESMATEMATICAS_H_ */

