#pragma once
#include <iostream>
#include <string>
#include "Usuario.h"

using namespace std;

class Chofer : public Usuario
{
private:
    string calificacionChofer;
    string deudasPendientesChofer;

public:
    Chofer(string _login, string _password, string _calificacion, string _deudas);

    bool verificarLogin(string _username, string _password);

    // Otras funciones de Chofer
    void verInformacionChofer();
    void modificarDatosCuenta();
    void eliminarCuenta();
};
