//Programa 2 de Agosto
#include <iostream>

//tambien se usa main(void) cuando no se leen argumentos en la linea de comandos
int main(int argc, char **argv)
{
  std::cout <<argc << std::endl; //imprime el numero de argumentos, en este caso está linea es un argumento
  std::cout <<argv[0] << std::endl; //imprime el argumento 0
  std::cout <<argv[1] << std::endl; //imprime el argumento 1
  std::cout <<argv[2] << std::endl; //imprime el argumento 2
}
