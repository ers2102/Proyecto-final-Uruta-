#pragma once
#include <iostream>
#include <string>

using namespace std;

class Usuario
{
protected:
    string login;
    string password;

public:
    Usuario(string _login, string _password);
    bool verificarLogin(string _username, string _password);

    // Funciones para obtener login y password
    string getLogin() const { return login; }
    string getPassword() const { return password; }
};
