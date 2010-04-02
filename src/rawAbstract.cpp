
/**
 * rawAbstract.cpp
 *
 *  Created on: 30/03/2010
 *      Author: jmcodol
 *
 *  \file rawAbstract.cpp
 *
 *  ## Add a description here ##
 *
 * \ingroup rtslam
 */


#include "rtslam/rawAbstract.hpp"

namespace jafar {
	namespace rtslam {
		using namespace std;

		rawAbstract::rawAbstract() {
		}

		rawAbstract::~rawAbstract() {
		}

		// PRINT UTILS
		/*
		 * Operator << for class rawAbstract.
		 * It shows some informations
		 */
		std::ostream& operator <<(std::ostream & s, jafar::rtslam::rawAbstract & rawA) {
			s << " I am a raw-data abstract" << endl;
			return s;
		}

	}
}