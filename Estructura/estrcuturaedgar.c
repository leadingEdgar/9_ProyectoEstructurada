/*--------------------------------------------------*/
/*Autor:Edgar Alejandro Hernández Hernández         */
/*E-mail:edgarh2014.94@gmail.com                    */
/*Fecha de creación:22/05/2018                      */
/*Fecha de actualizacion:                           */
/*Descripción:Implementación de funciones sobre la  */
/*estructura: crear, listar, ordenar, buscar,       */
/*actualizar y eliminiar                            */
/*--------------------------------------------------*/


/*Declaración de las bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Incluyendo colores, prototipos y enums, que son las funciones*/
#include "colores.h"
#include "prototipofunciones.h"
#include "enums.h"

int numEquipos;

int main(void)
{
  Equipo listaEquipo[TOTAL_EQUIPO];

  int opcion;
  do
  {
    menuPrincipal();
    printf(_TCYAN _NEGRITA "\n\nSeleccione una opcion: ");
		scanf("%d", &opcion);
    switch (opcion)
    {
      case CREAR:
        while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salto de linea */
        printf(_TCYAN     _NEGRITA "\n\n1. A L T A     D E     E Q U I P O S\n\n");

        printf(_TAMARILLO _NEGRITA "\n\nIntroduce el numero de equipos: " _TVERDE);
        scanf("%d",&numEquipos);
        printf("\n\n" _ARESET);

        for(int i = 0; i < numEquipos; i++)
        {
          while(getchar() != '\n');              /* Limpiar el buffer en caso de tener almacenado el salto de linea                */
          listaEquipo[i] = crearNuevoEquipo();   /* Se invoca a la funcion CrearNuevoEquipo() implementada en operacionesEquipo.c  */
        }
        while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salto de linea                */
        detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
        break;

        case LISTAR:
                while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
                printf(_TCYAN _NEGRITA "\n\n2. L I S T A     D E    EQUIPOS\n\n");
                mostrarListaEquipo(listaEquipo, 0);      /* Se invoca a la funcion mostrarEquipo() implementada en operacionesEquipo.c     */
                detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
                break;

                case LISTAR_ASC:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salto de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. L I S T A R    A S C E D E N T E\n\n");
              mostrarListaEquipo(listaEquipo, 1);      /* Se invoca a la funcion mostrarEquipo() implementada en operacionesAlumno.c     */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

              case LISTAR_DES:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salto de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. L I S T A R    D E S C E D E N T E\n\n");
              mostrarListaEquipo(listaEquipo, 2);      /* Se invoca a la funcion mostrarEquipo() implementada en operacionesAlumno.c     */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

              case BUSCAR:
            while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salto de linea */
            printf(_TAMARILLO _NEGRITA "\n\n3. B U S C A R\n\n");
            buscarEquipo(listaEquipo);               /* Se invoca a la funcion buscarEquipo() implementada en operacionesAlumno.c      */
            detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
            break;

            case ACTUALIZAR:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salto de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. A C T U A L I Z A R\n\n");
              actualizarEquipo(listaEquipo);           /* Se invoca a la funcion actualizarEquipo() implementada en operacionesEquipo.c  */
              while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

              case ELIMINAR:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salto de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. E L I M I N A R\n\n");
              eliminarEquipo(listaEquipo);             /* Se invoca a la funcion eliminarEquipo() implementada en operacionesEquipo.c    */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

              case SALIR:
							system("clear");                         /* Antes de terminar la ejecucion del programa, limpia la pantalla */
							exit(0);
      }
    }
    while(opcion != SALIR);


  return 0;
}
