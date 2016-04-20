#include <fcntl.h>      /* Modos de apertura */
#include <stdlib.h>     /* Funciones de ficheros */

main ( int argc, char* argv[] )
{
   char cadena[11];	/* Depósito de los caracteres */
   int leidos;

   /* Apertura del fichero */

   int fichero = open ("mi_fichero", O_RDONLY);

   /* Comprobación */   
   if (fichero==-1)
   {
        perror("Error al abrir fichero:");
        exit(1);
   }

   /* Coloca el puntero en la posición 400 */
   lseek(fichero,400,SEEK_SET);

   /* Lee diez bytes */
   leidos = read(fichero, cadena, 10);
   close(fichero);
   cadena[10]=0;

   /* Mensaje para ver qué se leyó */
   printf ( "Se leyeron %d bytes. La cadena leída es %s\n",leidos,cadena );

   return 0;
}
