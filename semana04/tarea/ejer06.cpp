#include <iostream>
#include <string>
using namespace std;
void toLowerCase(string &str) {
    for (char &c : str) {
        c = tolower(c);
    }
}
string salir() {
    cout << "Fue tu desicion salir del juego" << endl;
    return "Saliste del Juego";
}
void juego_preguntas() {
    cout << " Tu elegiste el mejor camino. " << endl;
    string respuesta_del_usuario = "";
    int rc = 0,ri = 0;
    cout << " Float se utiliza para obtener datos numericos mas exatos en un codigo? "<<endl;
    cin >> respuesta_del_usuario;
    toLowerCase(respuesta_del_usuario);
    if (respuesta_del_usuario == "verdadero") {
        cout << "La respuesta es correcta, te acuerdas, bien" << endl;
        rc++;
    } else {
        cout << "La respuesta es incorrecta, repasa el modulo 1" << endl;
        ri++;
    }
    cout << "La caja negra de un avion es negra? "<<endl;
    cin >> respuesta_del_usuario;
    toLowerCase(respuesta_del_usuario);
    if (respuesta_del_usuario == "falso") {
        cout << "La respuesta es correcta, son naranjas" << endl;
        rc++;
    } else {
        cout << "La respuesta es incorrecta, dejame desilucionarte ya que son naranjas" << endl;
        ri++;
    }
    cout << " Bogota es la capital de colombia? "<<endl;
    cin >> respuesta_del_usuario;
    toLowerCase(respuesta_del_usuario);
    if (respuesta_del_usuario == "verdadero") {
        cout << "La respuesta es correcta, si es la capital de Colombia" << endl;
        rc++;
    } else {
        cout << "La respuesta es incorrecta, como no te vas a saber la capital de colombia?" << endl;
        ri++;
    }
    cout << " La guerra de los 100 años entre Francia e Inglaterra duro 100 años? "<<endl;
    cin >> respuesta_del_usuario;
    toLowerCase(respuesta_del_usuario);
    if (respuesta_del_usuario == "falso") {
        cout << "La respuesta es correcta, duro 116 años" << endl;
        rc++;
    } else {
        cout << "La respuesta es incorrecta, te falta un poco de cultura general" << endl;
        ri++;
    }
    cout << " El Peru tiene 24 departamentos?"<<endl;
    cin >> respuesta_del_usuario;
    toLowerCase(respuesta_del_usuario);

    if (respuesta_del_usuario == "verdadero") {
        cout << "La respuesta es correcta, tiene 24 y una provincia instucional que es el Callao" << endl;
        rc++;
    } else {
        cout << "La respuesta es incorrecta por que el Callao es una provincia institucional" << endl;
        ri++;
    }
    cout << "Fin del juego." << endl;
    cout << "Respuestas correctas: " << rc << endl;
    cout << "Respuestas incorrectas: " << ri << endl;
}
int main()
{
    int decision = 0;
    cout << "Te doy la bienvenida al juego de Preguntas\n";
    cout << "1. Jugar" << endl;
    cout << "2. Salir\n";
    cout << "Seleccione una opcion: "<<endl;
    cin >> decision;
    switch (decision)
    {
    case 1:
        juego_preguntas();
        break;

    case 2:
        salir();
        break;

    default:
        cout << "No mereces jugar, te doy dos opciones y elijes una que no hay, saliendo del juego.\n";
        break;
    }
    return 0;
}