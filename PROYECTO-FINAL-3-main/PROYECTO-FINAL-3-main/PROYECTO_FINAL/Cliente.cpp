#include "Cliente.h"

Cliente::Cliente(string _login, string _password, string _calificacion, string _deudas)
    : Usuario(_login, _password), calificacionCliente(_calificacion), deudasPendientesCliente(_deudas)
{
    cout << "�Bienvenido, estimado cliente " << _login << "! Gracias por unirte a nuestra aplicaci�n." << endl;
}

bool Cliente::verificarLogin(string _username, string _password)
{
    return (getLogin() == _username && getPassword() == _password);
}

void Cliente::verInformacionCliente()
{
    cout << "Informaci�n del cliente:" << endl;
    cout << "Login: " << getLogin() << endl;
    cout << "Calificaci�n: " << calificacionCliente << endl;
    cout << "Deudas Pendientes: " << deudasPendientesCliente << endl;
}

void Cliente::modificarDatosCuenta()
{
    string nuevaContrase�a;

    cout << "Ingrese la nueva contrase�a: ";
    cin >> nuevaContrase�a;

    // Puedes agregar m�s l�gica de modificaci�n aqu� si es necesario
    // Por ejemplo, modificar otros campos como nombre, apellido, etc.
    password = nuevaContrase�a;

    cout << "Datos de la cuenta modificados exitosamente." << endl;
}

void Cliente::eliminarCuenta()
{
    // Puedes agregar l�gica adicional aqu�, como confirmaciones adicionales, etc.
    cout << "�Est�s seguro de que deseas eliminar tu cuenta? (S/N): ";
    char confirmacion;
    cin >> confirmacion;

    if (confirmacion == 'S' || confirmacion == 's')
    {
        // Puedes agregar l�gica de eliminaci�n aqu�, como liberar recursos, etc.
        cout << "Cuenta eliminada exitosamente. �Hasta luego!" << endl;
        // Puedes salir del programa o realizar otras acciones seg�n tus necesidades
    }
    else
    {
        cout << "Cancelando eliminaci�n de cuenta." << endl;
    }
}
