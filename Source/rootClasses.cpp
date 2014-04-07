#include "rootClasses.h"

_Point2D::_Point2D()
{
	_x = 0;
	_y = 0;
}

_Point2D::_Point2D(float $x, float $y)
{
	_x = $x;
	_y = $y;
}

_Vector2D::_Vector2D()
{
	_pos._x = 0;
	_pos._y = 0;
	_mag = 0;
	_ang = 0;
}

_Vector2D::_Vector2D(float $mag, float $ang)
{
	_pos._x = 0;
	_pos._y = 0;
	_mag = $mag;
	_ang = $ang;
}

_Vector2D::_Vector2D(float $x, float $y, float $mag, float $ang)
{
	_pos._x = $x;
	_pos._y = $y;
	_mag = $mag;
	_ang = $ang;
}