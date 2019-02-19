/*!
   \file  Monomio.cpp
   \brief Fichero que contiene el código de las funciones de la clase Monomio
*/


//  Ficheros de cabecera
#include <iostream>
#include <string>

#include "Monomio.hpp"

// Herramientas del espacio de nombres std
using std::string;
using std::cout;
using std::endl;
using std::cin;

// Constructor

//COMPLETAR -> EN PROCESO -> COMPLETADO

ed::Monomio::Monomio (double coeficiente, int grado) {
	assert (grado >= 0);
	this -> setCoeficiente (coeficiente);
	this -> setGrado (grado);
}

ed::Monomio::Monomio (Monomio &monomio) {
	(*this) = monomio;
}

// Modificadores

//COMPLETAR -> EN PROCESO -> COMPLETADO

void ed::Monomio::setCoeficiente (double coeficiente) {
	coeficiente_ = coeficiente;
}

void ed::Monomio::setGrado (int grado) {
	assert (grado >= 0);
	grado_ = grado;
}

// Operadores de asignación

// COMPLETAR -> EN PROCESO -> COMPLETADO

ed::Monomio & ed::Monomio::operator=(ed::Monomio const &m)
{
	// COMPLETAR -> EN PROCESO -> COMPLETADO
    this -> setCoeficiente (m.getCoeficiente ());
    this -> setGrado (m.getGrado ());

	// Se devuelve el objeto actual
	return *this;
}


ed::Monomio & ed::Monomio::operator=(double const &x)
{
	// COMPLETAR -> EN PROCESO -> COMPLETADO
    this -> setCoeficiente (x);
    this -> setGrado (0);

	// Se devuelve el objeto actual
	return *this;
}



//////////////////////////////////////////////////////////////

// Operadores aritméticos y asignación

// COMPLETAR -> EN PROCESO -> COMPLETADO

ed::Monomio & ed::Monomio::operator+=(ed::Monomio const &m)
{
	// COMPLETAR -> EN PROCESO -> COMPLETADO
    assert (this -> getGrado () == m.getGrado ());
    this -> setCoeficiente (this->getCoeficiente() + m.getCoeficiente());

	// Se devuelve el objeto actual
	return *this;
}



// COMPLETAR EL RESTO DE OPERADORES -> EN PROCESO -> COMPLETADO

ed::Monomio & ed::Monomio::operator-=(ed::Monomio const &m)
{
    // COMPLETAR -> EN PROCESO -> COMPLETADO
    assert (this -> getGrado () == m.getGrado ());
    this -> setCoeficiente (this->getCoeficiente() - m.getCoeficiente());

    // Se devuelve el objeto actual
    return *this;
}

ed::Monomio & ed::Monomio::operator*=(ed::Monomio const &m)
{
    // COMPLETAR -> EN PROCESO -> COMPLETADO
    this -> setCoeficiente (this->getCoeficiente() * m.getCoeficiente());
    this -> setGrado (this->getGrado() + m.getGrado());

    // Se devuelve el objeto actual
    return *this;
}

ed::Monomio & ed::Monomio::operator/=(ed::Monomio const &m)
{
    // COMPLETAR -> EN PROCESO -> COMPLETADO
    assert (this -> getGrado () >= m.getGrado ());
    assert (this -> getCoeficiente() != 0.0);
    this -> setCoeficiente (this->getCoeficiente() / m.getCoeficiente());
    this -> setGrado (this->getGrado() - m.getGrado());

    // Se devuelve el objeto actual
    return *this;
}

ed::Monomio & ed::Monomio::operator*=(const double x)
{
    // COMPLETAR -> EN PROCESO -> COMPLETADO
    this -> setCoeficiente (this->getCoeficiente() * x);

    // Se devuelve el objeto actual
    return *this;
}

ed::Monomio & ed::Monomio::operator/=(const double x)
{
    // COMPLETAR -> EN PROCESO -> COMPLETADO
    assert (x != 0.0);
    this -> setCoeficiente (this->getCoeficiente() * x);

    // Se devuelve el objeto actual
    return *this;
}

///////////////////////////////////////////////////////////////////////

// Funciones lectura y escritura de la clase Monomio

// COMPLETAR -> EN PROCESO -> COMPLETADO

void ed::Monomio::leerMonomio () {
    double coeficiente;
    int grado;

    cout << "Introduzca los datos del monomio" << endl;
    cout << "Coeficiente: ";
    cin >> coeficiente;
    cout << "Grado: ";
    cin >> grado;
    assert (grado >= 0);

    this -> setCoeficiente (coeficiente);
    this -> setGrado (grado);
}

void ed::Monomio::escribirMonomio () {
    if (this -> getGrado () == 0) {
        cout << this -> getCoeficiente () << endl; 
        return;
    }
    if (this -> getCoeficiente () == -1) {
        cout << "-X";
    } else if (this -> getCoeficiente () == 1) {
        cout << "X";
    } else {
        cout << this -> getCoeficiente () << "X";
    }
    switch (this -> getGrado ()) {
        case 0:
            break;
        case 1:
            break;
        default:
            cout << "^" << this -> getGrado ();
            break;
    }
    cout << endl;
}

///////////////////////////////////////////////////////////////////////

// Funciones auxiliares de la clase Monomio

// COMPLETAR -> EN PROCESO -> COMPLETADO

double ed::Monomio::calcularValor (double x) {
	return this->getCoeficiente() * pow (x, this->getGrado());
}
