// Materia: Programacion I,Paralelo 4
// Autor: Noel Fernando Condori Quispe
// Carnet: 12392811
// Carrera del estudiante:Ingenieria de Sistemas
//Fecha de creacion:18/09/2025
// Numero de ejercicio 5
#include<bits/stdc++.h>
using namespace std;
double salario_base(int horas,double tarifa){
    int horas_normales;
    if (horas <=8){
        horas_normales=horas;
    }
    else{
        horas_normales=8;
    }
    return horas_normales * tarifa;
}
double calcular_bonificacion(int horas,int tarifa,int bono)
{
    if (horas > 8)
    {
        int horas_extra = horas - 8;
        double pago_extra =horas_extra*tarifa;
        double bonificacion = horas_extra * tarifa *(bono/100.0);
        return pago_extra + bonificacion;
    }
    return 0;
    
}
int main (){
    int horas;
    double tarifa,bono;
    cout << "Ingrese las horas trabajadas :" << endl;
    cin >> horas;
    cout << "Ingrese la tarifa :" << endl;
    cin >> tarifa;
    cout << "Ingrese el porcentaje  de bonificacion  para las horas extras :" << endl;
    cin >> bono;
    double salariobase = salario_base(horas,tarifa);
    double salarioextra = calcular_bonificacion(horas,tarifa,bono);
    double salariototal=salariobase+salarioextra;
    cout << "salario base (con las horas normales):" << salariobase << endl;
    cout << "Salario pot horas  extra + bonificacion :" << salarioextra << endl;
    cout << "Su salario total es :" << salariototal;
    return 0;
}
