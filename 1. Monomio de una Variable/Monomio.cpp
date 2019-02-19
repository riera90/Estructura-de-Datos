/*! 
   \file  Monomio.cpp
   \brief Fichero que contiene el código de las funciones de la clase Monomio
*/


//  Ficheros de cabecera
#include <iostream>

#include "Monomio.hpp"

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

// COMPLETAR -> EN PROCESO

ed::Monomio & ed::Monomio::operator=(ed::Monomio const &m)
{
	// COMPLETAR


	// Se devuelve el objeto actual
	return *this;
}


ed::Monomio & ed::Monomio::operator=(double const &x)
{
	// COMPLETAR

	// Se devuelve el objeto actual
	return *this;
}



//////////////////////////////////////////////////////////////

// Operadores aritméticos y asignación

// COMPLETAR

ed::Monomio & ed::Monomio::operator+=(ed::Monomio const &m)
{
	// COMPLETAR


	// Se devuelve el objeto actual
	return *this;
}



// COMPLETAR EL RESTO DE OPERADORES



///////////////////////////////////////////////////////////////////////

// Funciones lectura y escritura de la clase Monomio

// COMPLETAR -> EN PROCESO

void ed::Monomio::leerMonomio () {

}

void ed::Monomio::escribirMonomio () {

}

///////////////////////////////////////////////////////////////////////

// Funciones auxiliares de la clase Monomio

// COMPLETAR -> EN PROCESO -> COMPLETADO

double ed::Monomio::calcularValor (double x) {
	return this->getCoeficiente() * pow (x, this->getGrado());
}