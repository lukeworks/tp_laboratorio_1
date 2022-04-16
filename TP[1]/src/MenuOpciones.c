/*
============================================================================
Lucas Gonzalez Dall Ora - 1E 2022 Trabajo Practico N°1
============================================================================
 */

#include "MenuOpciones.h"

/**
 * \brief Muestra el menu de opciones del programa.
 */
void mostrarMenu(float precioAerolineas, float precioLatam)
{
	printf("TP N° 1\n");
	printf("Que operacion quiere realizar?\n");
	printf("1. Ingresar Kilometros: ( km=x)\n");
	printf("2. Ingresar Precio de Vuelos: (Aerolineas=y, Latam=z)\n");
	printf("- Precio vuelo Aerolíneas: (%.2f)\n", precioAerolineas);
	printf("- Precio vuelo Latam: (%.2f)\n", precioLatam);
	printf("3. Calcular todos los costos:\n");
	printf("   a) Tarjeta de débito (descuento 10%)\n");
	printf("   b) Tarjeta de crédito (interes 25%)\n");
	printf("   c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)\n");
	printf("   d) Mostrar precio por km (precio unitario)\n");
	printf("   e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)\n");
	printf("4. Informar Resultados\n");
	printf("Latam:\n");
	printf("   a) Precio con tarjeta de debito:\n");
	printf("   b) Precio con tarjeta de credito:\n");
	printf("   c) Precio pagando con bitcoin:\n");
	printf("   d) Precio unitario:\n");
	printf("Aerolineas:\n");
	printf("   a) Precio con tarjeta de debito:\n");
	printf("   b) Precio con tarjeta de credito:\n");
	printf("   c) Precio pagando con bitcoin:\n");
	printf("   d) Precio unitario:\n");
	printf("5. Carga forzada de datos\n");
	printf("6. Salir del programa\n");
}

/**
 * \brief Muestra el sub-menu de opciones del programa.
 */

void mostrarSubMenu(float precioAerolineas, float precioLatam)
{
	printf("Por favor, seleccione la aerolinea del vuelo: (Aerolineas=y, Latam=z)\n");
	printf("- Precio vuelo Aerolíneas: (%.2f)\n", precioAerolineas);
	printf("- Precio vuelo Latam: (%.2f)\n", precioLatam);
	printf("7. Volver al menu principal\n");
}
/**
 * \brief muestra los resultados de los calculos que se pidieron.
 */

void mostrarResultados(float precioAerolineas, float precioLatam, float *pRetornoAerolineas, float *pRetornoLatam, float *pRetornoAerolineasCredito, float *pRetornoLatamCredito, float *pRetornoAerolineasBitcoin, float *pRetornoLatamBitcoin, float *pPrecioUnitarioAerolineas, float *pPrecioUnitarioLatam)
{
	printf("Informar Resultados: \n");
	printf("a) Precio con tarjeta de debito Aerolineas: %.2f\n Precio con tarjeta de debito Latam: %.2f\n", *pRetornoAerolineas, *pRetornoLatam);
	printf("b) Precio con tarjeta de credito Aerolineas: %.2f\n Precio con tarjeta de credito Latam: %.2f\n", *pRetornoAerolineasCredito, *pRetornoLatamCredito);
	printf("c) Precio pagando con bitcoin Aerolineas: %.2f\n Precio pagando con bitcoin Latam: %.2f\n", *pRetornoAerolineasBitcoin, *pRetornoLatamBitcoin);
	printf("d) Precio unitario Aerolineas: %.2f\n Precio unitario Latam: %.2f\n", *pPrecioUnitarioAerolineas, *pPrecioUnitarioLatam);
}
