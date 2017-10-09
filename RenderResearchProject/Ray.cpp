#include "Ray.h"

Ray::Ray()
{
	_source = vec3(0);
	_dir = vec3(0);
	_inverse = vec3(0);
}

vec3 Ray::getInverseDirection()
{
	for (int i = 0; i < 3; i++) {
		_inverse[i] = (_dir[i] != 0.0 ? 1 / _dir[i] : 0);
	}
}