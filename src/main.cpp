#include <iostream>
#include <Foco.hpp>

int main(int argc,char const *argv[])
{
    Foco foquito;

    foquito.Encender();
    foquito.Apagar();

    std::cout 
    << "EstadoFoco: "
    << Foquito.LeerEstado()
    << std:: end1; 

    return 0; 
}