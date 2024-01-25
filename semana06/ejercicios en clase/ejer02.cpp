#include<iostream>
using namespace std;
int main(){
    enum dias_de_la_semana{lunes,martes,miercoles,jueves,viernes,sabado,domingo};
    switch ()
    {
    case lunes:
    {
        cout<<"La primera clase del dia es Ingles a las 8 am hasta las 10am.";
        cout<<"La segunda clase del dia es Programacion a las 3 pm hasta las 6pm.";
    }
        break;
    case martes:
    {
        cout<<"La primera clase del dia es fisica a las 8am hasta las 11am.";
        cout<<"La segunda clase del dia es fisica a las 4pm hasta las 4pm.";
    } 
        break;
    case miercoles:
    {
        cout<<"La primera clase del dia es mate a las 8am hasta las 11am.";
        cout<<"La segunda clase del dia es natacion a las 12pm hasta las 2pm.";
    }
        break;
    case jueves:
    {
        cout<<"La primera clase del dia es Ingles a las 6:30am hasta las 7:45am.";
        cout<<"La segunda clase del dia es Programacion a las 8am hasta las 12pm";
        cout<<"La tercera clase del dia es Soporte de TI a las 3pm hasta las 6pm.";
    }
        break;
    case viernes:
    {
        cout<<"La primera clase del dia es Mate a las 8am hasta las 10am.";
        cout<<"La segunda clase del dia es soporte de TI a las 10am hasta las 12pm.";
    }
        break;
    case sabado:
        cout<<"No hay clases el dia de hoy.";
        break;
    case domingo:
        cout<<"No hay clases el dia de hoy.";
        break;
    default:
        cout<<"No es un dia de la semana.";
        break;
    }
    return 0;
}