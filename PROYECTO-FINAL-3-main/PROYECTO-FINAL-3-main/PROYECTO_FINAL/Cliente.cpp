#include "Cliente.h"

Cliente::Cliente(string _login, string _password, string _calificacion, string _deudas)
    : Usuario(_login, _password), calificacionCliente(_calificacion), deudasPendientesCliente(_deudas)
{
    cout << "¡Bienvenido, estimado cliente " << _login << "! Gracias por unirte a nuestra aplicación." << endl;
}

bool Cliente::verificarLogin(string _username, string _password)
{
    return (getLogin() == _username && getPassword() == _password);
}

void Cliente::verInformacionCliente()
{
    cout << "Información del cliente:" << endl;
    cout << "Login: " << getLogin() << endl;
    cout << "Calificación: " << calificacionCliente << endl;
    cout << "Deudas Pendientes: " << deudasPendientesCliente << endl;
}

void Cliente::modificarDatosCuenta()
{
    string nuevaContraseña;

    cout << "Ingrese la nueva contraseña: ";
    cin >> nuevaContraseña;

    // Puedes agregar más lógica de modificación aquí si es necesario
    // Por ejemplo, modificar otros campos como nombre, apellido, etc.
    password = nuevaContraseña;

    cout << "Datos de la cuenta modificados exitosamente." << endl;
}

void Cliente::eliminarCuenta()
{
    // Puedes agregar lógica adicional aquí, como confirmaciones adicionales, etc.
    cout << "¿Estás seguro de que deseas eliminar tu cuenta? (S/N): ";
    char confirmacion;
    cin >> confirmacion;

    if (confirmacion == 'S' || confirmacion == 's')
    {
        // Puedes agregar lógica de eliminación aquí, como liberar recursos, etc.
        cout << "Cuenta eliminada exitosamente. ¡Hasta luego!" << endl;
        // Puedes salir del programa o realizar otras acciones según tus necesidades
    }
    else
    {
        cout << "Cancelando eliminación de cuenta." << endl;
    }
}
