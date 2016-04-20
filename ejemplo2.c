#include <unistd.h>
int main( int argc, char *argv[] )
{
char buffer[512];
printf( "El directorio actual es: %s\n",getcwd( buffer, -1 ) );
return 0;
}
