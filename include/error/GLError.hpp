/*
 * GLError.hpp
 *
 *  Created on: Jan 11, 2015
 *      Author: msadiq
 */

#ifndef ERROR_GLERROR_HPP_
#define ERROR_GLERROR_HPP_

#include <stdexcept>

namespace GL {

namespace Error {

class Exception : public std::runtime_error
{


};

}  // namespace Error

}  // namespace GL



#endif /* ERROR_GLERROR_HPP_ */
