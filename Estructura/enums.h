/*----------------------------------------------------------------*/
/* Autor: Hernandez Hernandez Edgar Alejandro			  */
/* E-mail: edgarh2014.94@gmail.com                                */
/* Fecha creacion: 20/05/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion: definicion de las variables enum.                 */
/*----------------------------------------------------------------*/

#ifndef ENUMS_H_
#define ENUMS_H_

/* Declaracion de enumeraciones para el control de menu de opciones:                */
/* CREAR      = 1                                                                   */
/* LISTAR     = 2                                                                   */
/* LISTAR_ASC = 3                                                                   */
/* LISTAR_DES = 4                                                                   */
/* BUSCAR     = 5                                                                   */
/* ACTUALIZAR = 6                                                                   */
/* ELIMINAR   = 7                                                                   */
/* SALIR      = 8                                                                   */
enum OPCIONES_MENU{CREAR = 1,
									 LISTAR,
									 LISTAR_ASC,
                   LISTAR_DES,
                   BUSCAR,
                   ACTUALIZAR,
                   ELIMINAR,
                   SALIR};


/* Declaracion de enumeracion para el manejo de los casos:        */
/* Buscar por:     nombre o por director tecnico,                 */
/* Actualizar por: nombre o por director tecnico,                 */
/* Eliminar por:   nombre o por director tecnico                  */
enum OPCIONES_BUSCAR_ACTUALIZAR_ELIMINAR{_xNombre=1,
                                        _xDirectorTecnico};

#endif
