/*!
	\file Monomio.hpp
	\brief Definición de la clase Monomio
*/

#ifndef _MONOMIO_HPP_
#define _MONOMIO_HPP_

// Para usar la funciones pow y std::abs
#include <cmath>

// Para controlar las pre y post condiciones mediante asertos
#include <cassert>

#define COTA_ERROR 1.0e-6  //!< Cota de error para la comparación números reales

// Se incluye la clase Monomio dentro del espacio de nombre de la asigantura: ed
namespace ed
{
//!  Definición de la clase Monomio:  \f$ coeficiente \hspace{1ex} X^{grado} \f$
class Monomio
{
	//! \name Atributos privados de la clase Monomio
	private:

	// COMPLETAR -> EN PROCESO -> COMPLETADO

		double coeficiente_;
		int grado_;

	//! \name Funciones o métodos públicos de la clase Monomio
	public:

	//! \name Constructores de la clase Monomio

	// COMPLETAR -> EN PROCESO -> COMPLETADO

		Monomio (double coeficiente = 0.0, int grado = 0);

		Monomio (Monomio &monomio);

	//! \name Observadores: funciones de consulta de la clase Monomio

	// COMPLETAR -> EN PROCESO -> COMPLETADO

		inline double getCoeficiente () const {return this -> coeficiente_;};
		inline int getGrado () const {return this -> grado_;};

	//! \name Funciones de modificación de la clase Monomio

	// COMPLETAR -> EN PROCESO -> COMPLETADO

		void setCoeficiente (double coeficiente);
		void setGrado (int grado);

	/////////////////////////////////////////////////

	//! \name Operadores de la clase Monomio

	// Operadores de asignación

		// COMPLETAR LOS COMENTARIOS DE DOXYGEN -> EN PROCESO -> COMPLETADO
		Monomio & operator=(Monomio const &m);

		// COMPLETAR LOS COMENTARIOS DE DOXYGEN -> EN PROCESO -> COMPLETADO
		Monomio & operator=(double const &x);


	// Operadores aritméticos y asignación

		// COMPLETAR LOS COMENTARIOS DE DOXYGEN -> EN PROCESO -> COMPLETADO
		Monomio & operator+=(Monomio const &m);


		// COMPLETAR EL RESTO DE OPERADORES -> EN PROCESO -> COMPLETADO
		Monomio & operator -=(Monomio const &m);

		Monomio & operator *=(Monomio const &m);

		Monomio & operator /=(Monomio const &m);

		Monomio & operator *=(const double x);

		Monomio & operator /=(const double x);


	/////////////////////////////////////////////////////////////////////////////////////

	//! \name Funciones lectura y escritura de la clase Monomio

	// COMPLETAR -> EN PROCESO -> COMPLETADO

		void leerMonomio ();
		void escribirMonomio ();

	///////////////////////////////////////////////////////////////////////

	//! \name Funciones auxiliares de la clase Monomio

	// COMPLETAR -> EN PROCESO -> COMPLETADO

		double calcularValor (double x);

};  // Fin de la definición de la clase Monomio

}  //  Fin de namespace ed.

// _MONOMIO_HPP_
#endif
