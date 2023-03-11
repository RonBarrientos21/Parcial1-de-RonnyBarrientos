#include "iostream"
#include "fstream"
using namespace std;
string texto;

void LeerArchivo(string directorio){
    ifstream archivo;
    archivo.open(directorio);
    if(archivo.is_open()){
        while(getline(archivo, texto)){
            cout << "Archivo leido ==> "<< texto <<endl;
        }
        archivo.close();
    }else{
        cout<<"archivo no encontrado";
    }
}

void ModificarArchivo(string directorio){
    ofstream archivo;
    archivo.open(directorio, ios::app);
    if (archivo.is_open()){
        archivo << "0909-17-17042" <<endl;
        archivo.close();
        cout<<"archivo modificado";
    }else{
        cout<<"Error al leer el archivo";
    }

}
