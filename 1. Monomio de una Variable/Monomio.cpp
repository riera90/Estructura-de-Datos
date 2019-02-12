/*! 
   \file  Monomio.cpp
   \brief Fichero que contiene el código de las funciones de la clase Monomio
*/


//  Ficheros de cabecera
#include <iostream>

#include "Monomio.hpp"

// Constructor

//COMPLETAR -> EN PROCESO

ed::Monomio::Monomio (double coeficiente, int grado) {
	assert (grado >= 0);
	this -> setCoeficiente (coeficiente);
	this -> setGrado (grado);
	assert ((this -> getCoeficiente () - coeficiente) < COTA_ERROR);
	assert (this -> getGrado () == grado);
}

// Modificadores

//COMPLETAR -> COMPLETADO

void ed::Monomio::setCoeficiente (double coeficiente) {
	coeficiente_ = coeficiente;
}

void ed::Monomio::setGrado (int grado) {
	assert (grado >= 0);
	grado_ = grado;
}

// Operadores de asignación

// COMPLETAR

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

// COMPLETAR


///////////////////////////////////////////////////////////////////////

// Funciones auxiliares de la clase Monomio

// COMPLETAR

