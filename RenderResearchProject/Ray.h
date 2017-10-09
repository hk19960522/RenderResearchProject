#pragma once
#include "algebra3.h"

class Ray
{
	public :
		Ray();
		Ray(const vec3 & source, const vec3 & dir) : _source(source), _dir(dir) 
		{
			_inverse = getInverseDirection();
		};
	private :
		vec3 _source;
		vec3 _dir; // direction
		vec3 _inverse; // invserse fo _dir

		vec3 getInverseDirection();

};