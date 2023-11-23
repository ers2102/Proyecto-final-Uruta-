#pragma once
#include <iostream>
#include <string>
#include "Usuario.h"

using namespace std;

class Cliente : public Usuario
{
private:
    string calificacionCliente;
    string deudasPendientesCliente;

public:
    Cliente(string _login, string _password, string _calificacion, string _deudas);

    bool verificarLogin(string _username, string _password);

    // Otras funciones de Cliente
    void verInformacionCliente();
    void modificarDatosCuenta();
    void eliminarCuenta();
};
