#include <iostream>
#include "archivo1.h"
using namespace  std;

int main() {
    LeerArchivo("C:/parcial.txt");
    cout<<endl;
    ModificarArchivo("C:/parcial.txt");
    cout<<endl;
    LeerArchivo("C:/parcial.txt");
    cout << "Fin del programa" << std::endl;
    return 0;
}
