/*
 * GLObject.hpp
 *
 *  Created on: Jan 11, 2015
 *      Author: AbdulKareem
 */

#ifndef GLOBJECT_HPP_
#define GLOBJECT_HPP_

#include <GL/glew.h>
#include <string>

namespace GL {

template<typename T>
class GLObject<T> {
	GLenum _object;

	static std::string ObjectName = "none";

public:
	typedef T ObjType;
	GLenum get(){
		return _object;
	}
	GLObject() final
	{
		ObjType::Generate(_object);
#ifdef GLDEBUG
		if(_object == 0)


	}
};
}  // namespace GL

#endif /* GLOBJECT_HPP_ */
