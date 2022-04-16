/*
============================================================================
Lucas Gonzalez Dall Ora - 1E 2022 Trabajo Practico N°1
============================================================================
 */
#include "OperacionesMatematicas.h"

/**
 * \brief Función para que el usuario ingrese los números pedidos.
 * \parametro tipo char "mensaje" = mensaje que se mostrará al usuario para que ingrese los números.
 */

float ingresarNumeros(char mensaje[])
{
	float numero;

	printf("%s", mensaje);
	scanf("%f", &numero);
	fflush(stdin);

	return numero;
}
/**
 * \brief Calcula el valor de los vuelos pagando con tarjeta de debito.
 */

void calcularPrecioDebito(float precioAerolineas, float precioLatam, float *pRetornoAerolineas, float *pRetornoLatam)
{
		*pRetornoAerolineas = precioAerolineas * DESCUENTO;
		*pRetornoLatam = precioLatam * DESCUENTO;
}
/**
 * \brief Calcula el valor de los vuelos pagando con tarjeta de credito.
 */

void calcularPrecioCredito(float precioAerolineas, float precioLatam, float *pRetornoAerolineasCredito, float *pRetornoLatamCredito)
{
		*pRetornoAerolineasCredito = precioAerolineas * INTERES;
		*pRetornoLatamCredito = precioLatam * INTERES;
}
/**
 * \brief Calcula el valor de los vuelos pagando con bitcoin.
 */

void calcularPrecioBitcoin(float precioAerolineas, float precioLatam, float *pRetornoAerolineasBitcoin, float *pRetornoLatamBitcoin)
{
		*pRetornoAerolineasBitcoin = (precioAerolineas *1)/BITCOIN;
		*pRetornoLatamBitcoin = (precioLatam *1)/BITCOIN;
}
/**
 * \brief Calcula el valor del precio por kilometro recorrido.
 */

void calcularPrecioKilometro(float kilometros, float precioAerolineas, float precioLatam, float *pPrecioUnitarioAerolineas, float *pPrecioUnitarioLatam)
{
		*pPrecioUnitarioAerolineas = precioAerolineas / kilometros;
		*pPrecioUnitarioLatam = precioLatam / kilometros;
}

/**
 * \brief Calcula la diferencia entre los precios de ambas aerolineas.
 */
float calcularDiferenciaPrecios(float precioAerolineas, float precioLatam)
{
	float diferencia;

	if(precioAerolineas > precioLatam)
	{
		diferencia = precioAerolineas - precioLatam;
	}
	else
	{
		diferencia = precioLatam - precioAerolineas;
	}
	return diferencia;
}
