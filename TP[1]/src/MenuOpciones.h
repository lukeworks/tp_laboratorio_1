/*
============================================================================
Lucas Gonzalez Dall Ora - 1E 2022 Trabajo Practico N°1
============================================================================
 */

#ifndef MENUOPCIONES_H_
#define MENUOPCIONES_H_

#include <stdio.h>
#include <stdlib.h>

void mostrarMenu(float precioAerolineas, float precioLatam);

void mostrarSubMenu(float precioAerolineas, float precioLatam);

void mostrarResultados(float precioAerolineas, float precioLatam, float *pRetornoAerolineas, float *pRetornoLatam, float *pRetornoAerolineasCredito, float *pRetornoLatamCredito, float *pRetornoAerolineasBitcoin, float *pRetornoLatamBitcoin, float *pPrecioUnitarioAerolineas, float *pPrecioUnitarioLatam);

#endif /* MENUOPCIONES_H_ */
