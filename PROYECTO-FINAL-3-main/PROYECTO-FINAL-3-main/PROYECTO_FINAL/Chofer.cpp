#include "Chofer.h"

Chofer::Chofer(string _login, string _password, string _calificacion, string _deudas)
    : Usuario(_login, _password), calificacionChofer(_calificacion), deudasPendientesChofer(_deudas)
{
    cout << "¡Hola, chofer " << _login << "! Gracias por ser parte de nuestro equipo." << endl;
}

bool Chofer::verificarLogin(string _username, string _password)
{
    return (getLogin() == _username && getPassword() == _password);
}

void Chofer::verInformacionChofer()
{
    // Implementación de verInformacionChofer
    cout << "Información del chofer..." << endl;
}

void Chofer::modificarDatosCuenta()
{
    // Implementación de modificarDatosCuenta
    cout << "Modificando datos de la cuenta del chofer..." << endl;
}

void Chofer::eliminarCuenta()
{
    // Implementación de eliminarCuenta
    cout << "Eliminando la cuenta del chofer..." << endl;
}
