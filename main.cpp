#include <iostream>

#include "arreglo.h"
#include "computadora.h"

using namespace std;

int main()
{
    ArregloDinamico<Computadora> computadoras;

    Computadora c01("Windows 10", "Intel i5", 2000, 32);
    Computadora c02("Windows 7", "Intel i3", 1000, 16);
    Computadora c03("Windows 8", "Intel i9", 3000, 64);

    computadoras<<c01<<c02<<c03<<c02<<c02;
    Computadora c04("Windows 7", "Intel i3", 1000, 16);

    ArregloDinamico<Computadora*> ptrs = computadoras.buscar_todos(c04);

    if(ptrs.size() > 0){
        for (size_t i=0;i<ptrs.size();i++){
            Computadora *c = ptrs[i];
            cout << *c << endl;
        }
    }
    else{
        cout << "No exiten coincidencias."<<endl;
    }

    //Computadora c05("Windows 10", "Intel i3", 512, 4);

    /*Computadora *ptr = computadoras.buscar(c04);

    if(ptr != nullptr){
       cout << *ptr << endl;
    }
    else{
        cout << "No existe"<<endl;
    }


/*
    ArregloDinamico<string>_arreglo;

    //for (size_t i = 0; i < _arreglo.size(); i++){}

    _arreglo.insertar_inicio("Luis");
    _arreglo.insertar_inicio("Arturo");
    _arreglo.insertar_inicio("Christian");
    _arreglo.insertar_inicio("Melissa");

    _arreglo.insertar_final("Fer");
    _arreglo.insertar_final("Carlos");
    _arreglo.insertar_final("Yolanda");
    _arreglo.insertar_final("Michel");



    _arreglo.insertar("INSERTAR", 2);
    _arreglo.eliminar_inicio();
    _arreglo.eliminar_final();
    _arreglo.eliminar(4);

    string *s = _arreglo.buscar("Carlos");
    cout<< s << " "<<*s << endl;
    *s = "NUEVO";

    for (size_t i = 0; i < _arreglo.size(); i++){
        cout << _arreglo[i] << " | ";

   }
    cout << endl;
*/





    return 0;
}
