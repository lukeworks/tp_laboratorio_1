/*
 ============================================================================
 Name        : TP N� 1 - 1E 2022
 Author      : Lucas Gonzalez Dall Ora
 Version     : 1.0
 Description :
Una agencia de viaje necesita calcular costos para sus vuelos de Latam y Aerol�neas Argentinas
para ofrecerlos a sus clientes.
Se deber� ingresar por cada vuelo los km totales y el precio total del mismo.
El objetivo de la aplicaci�n es mostrar las diferentes opciones de pagos a sus clientes.
Para ello el programa iniciar� y contar� con un men� de opciones:
1. Ingresar Kil�metros: ( km=x)
 2. Ingresar Precio de Vuelos: (Aerol�neas=y, Latam=z)
- Precio vuelo Aerol�neas:
- Precio vuelo Latam:
 3. Calcular todos los costos:
 a) Tarjeta de d�bito (descuento 10%)
 b) Tarjeta de cr�dito (inter�s 25%)
 c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
 d) Mostrar precio por km (precio unitario)
 e) Mostrar diferencia de precio ingresada (Latam - Aerol�neas)
 4. Informar Resultados
�Latam:
 a) Precio con tarjeta de d�bito: r
 b) Precio con tarjeta de cr�dito: r
 c) Precio pagando con bitcoin : r
 d) Precio unitario: r
 Aerol�neas:
 a) Precio con tarjeta de d�bito: r
 b) Precio con tarjeta de cr�dito: r
 c) Precio pagando con bitcoin : r
 d) Precio unitario: r
 La diferencia de precio es : r �
5. Carga forzada de datos
6. Salir
Aclaraciones del funcionamiento:
El men� se tiene que ver tal cual est� descrito en la consigna. Los resultados se tienen que
mostrar con el mismo formato. Se puede realizar un submen� para ingresar los km y los
precios.
Los resultados se tienen que ver con el formato presentado en el men�. De la siguiente
manera.
La carga forzada se tiene que mostrar exactamente igual a la pantalla de resultados sin ingresar
ninguna opci�n previamente. Tiene que calcular todo al momento de apretar el bot�n con los
siguientes datos:
Km: 7090
Aerolineas Argentinas: $162965
Latam: $ 159339
(solo mostrar los resultados ya calculados)
Se deben realizar todas las validaciones necesarias para que el programa funcione
correctamente. Por ej: no se puede realizar c�lculos si no hay vuelos ingresados.
 Todas las funciones que realizar�n los c�lculos del men� se deber�n realizar en una biblioteca
aparte, que contenga las funciones para realizar todas las operaciones.
En el men� deber�n aparecer los valores actuales cargados en los vuelos de Latam y Aerolineas
(donde dice �x� e �y� en el ejemplo, se debe mostrar el n�mero cargado)
 2 C�mo realizar y entregar el trabajo pr�ctico
El trabajo pr�ctico deber� ser entregado en el repositorio de GIT correspondiente al TP1 de la
materia.
El mismo consistir� en el proyecto de Eclipse con el programa funcionando y comentado,
respetando las reglas de estilo de la c�tedra. La compilaci�n no deber� arrojar mensajes de
error ni de warnings.
El proyecto deber� contar con la biblioteca descripta en la secci�n n�mero dos, y se deber�
hacer uso de dichas funciones para resolver la l�gica del programa.
 ============================================================================
 */

#include "MenuOpciones.h"
#include "OperacionesMatematicas.h"

int main(void)
{
	setbuf(stdout, NULL);

	float kilometros;
	float precioLatam;
	float precioAerolineas;
	int operacionSeleccionada;
	char aerolineaSeleccionada;

	float *pRetornoLatam;
	float *pRetornoAerolineas;
	float *pRetornoAerolineasCredito;
	float *pRetornoLatamCredito;
	float *pRetornoAerolineasBitcoin;
	float *pRetornoLatamBitcoin;
	float *pPrecioUnitarioAerolineas;
	float *pPrecioUnitarioLatam;

	float precioLatamForzado;
	float kilometrosForzados;
	float precioAerolineasForzado;

	int banderaCalculos = 0;

	do {
		// llamada a la funcion para mostrar el menu.
		mostrarMenu(precioAerolineas, precioLatam);

		printf("por favor, ingrese la opcion seleccionada: ");
		scanf("%d", &operacionSeleccionada);

		switch (operacionSeleccionada)
		{
		case 1:
			kilometros = ingresarNumeros("Ingrese la cantidad de kilometros: ");
			printf("Kilometros ingresados con exito!\n");
			break;

		case 2:
			mostrarSubMenu(precioAerolineas, precioLatam);
//			if(operacionSeleccionada == 7)
//			{
//				mostrarMenu(precioAerolineas, precioLatam);
//			}
			//printf("Por favor, seleccione la aerolinea del vuelo: (Aerol�neas=y, Latam=z)");
			scanf("%c", &aerolineaSeleccionada);

			if(aerolineaSeleccionada !='y' || aerolineaSeleccionada !='z')
			{
				printf("Por favor, ingrese un valor v�lido");
			}
			break;

			if(aerolineaSeleccionada == 'y')
			{
				printf("Por favor, ingrese el precio del vuelo:");
				scanf("%f", &precioAerolineas);
			}
			else if(aerolineaSeleccionada =='z')
			{
				printf("Por favor, ingrese el precio del vuelo:");
				scanf("%f", &precioLatam);
			}
			break;

			//calcular todos los costos:
		case 3:
			if (kilometros !=0 && precioLatam !=0 && precioAerolineas !=0)
			{
				calcularPrecioDebito(precioAerolineas, precioLatam, pRetornoAerolineas, pRetornoLatam);
				calcularPrecioCredito(precioAerolineas, precioLatam, pRetornoAerolineasCredito, pRetornoLatamCredito);
				calcularPrecioBitcoin(precioAerolineas, precioLatam, pRetornoAerolineasBitcoin, pRetornoLatamBitcoin);
				calcularPrecioKilometro(kilometros, precioAerolineas, precioLatam, pPrecioUnitarioAerolineas, pPrecioUnitarioLatam);
				calcularDiferenciaPrecios(precioAerolineas,precioLatam);
				printf("Se calcularon los costos exitosamente!\n");
				banderaCalculos = 1;
			}
			else
			{
				printf("Error! primero debe ingresar los valores necesarios! \n");
			}
			break;

			//llamada a la funcion que muestra los resultados.
		case 4:
			if (banderaCalculos == 1)
			{
				mostrarResultados(precioAerolineas, precioLatam, pRetornoAerolineas, pRetornoLatam, pRetornoAerolineasCredito, pRetornoLatamCredito, pRetornoAerolineasBitcoin, pRetornoLatamBitcoin, pPrecioUnitarioAerolineas, pPrecioUnitarioLatam);
			}
			else
			{
				printf("Error! primero debe realizar los calculos! \n");
			}
			break;

			//carga forzada de datos:
		case 5:

			kilometrosForzados = 7090;
			precioLatamForzado = 162965;
			precioAerolineasForzado = 159339;

			calcularPrecioDebito(precioAerolineasForzado, precioLatamForzado, pRetornoAerolineas, pRetornoLatam);
			calcularPrecioCredito(precioAerolineasForzado, precioLatamForzado, pRetornoAerolineasCredito, pRetornoLatamCredito);
			calcularPrecioBitcoin(precioAerolineasForzado, precioLatamForzado, pRetornoAerolineasBitcoin, pRetornoLatamBitcoin);
			calcularPrecioKilometro(kilometrosForzados, precioAerolineasForzado, precioLatamForzado, pPrecioUnitarioAerolineas, pPrecioUnitarioLatam);
			calcularDiferenciaPrecios(precioAerolineasForzado, precioLatamForzado);
			printf("Se calcularon los costos con los datos forzados exitosamente!\n");
			//mostrarResultados(precioAerolineasForzado, precioLatamForzado, pRetornoAerolineas, pRetornoLatam, pRetornoAerolineasCredito, pRetornoLatamCredito, pRetornoAerolineasBitcoin, pRetornoLatamBitcoin, pPrecioUnitarioAerolineas, pPrecioUnitarioLatam);
			break;

			//Salida del programa
		case 6:
			printf("Usted ha salido del programa! \n");
			break;

		case 7:
			mostrarMenu(precioAerolineas, precioLatam);
			printf("por favor, ingrese la opcion seleccionada: ");
			scanf("%d", &operacionSeleccionada);
			break;

			//Validacion por si se ingreso un numero incorrecto
		default:
			printf("Error! Ingrese una opcion valida! \n");
			break;
		}

	} while (operacionSeleccionada != 6);

	return EXIT_SUCCESS;
}
