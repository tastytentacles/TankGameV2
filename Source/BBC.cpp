#include <math.h>
using namespace std;

#include "BBC.h"

_BB_RoteAble::_BB_RoteAble()
{
	_width = 0;
	_height = 0;
}

_BB_RoteAble::_BB_RoteAble(float $width = 0, float $height = 0)
{
	_width = $width;
	_height = $height;
}

/*bool _BB_RoteAble::_Get_PointIntersect(float $posX, float $posY, float $pointX, float $pointY, float $direction)
{
	float $rotX = cos($direction) * ($pointX - $posX) - sin($direction) * ($pointY - $posY) + $posX;
	float $rotY = sin($direction) * ($pointX - $posX) + cos($direction) * ($pointY - $posY) + $posY;

	if ($rotX < ($posX + (_width / 2)) &&
	$rotX > ($posX - (_width / 2)) &&
	$rotY <($posY + (_height / 2)) &&
	$rotY > ($posY - (_height / 2)))
	{
		return true;
	}
	else
	{
		return false;
	}
}*/

/*bool _BB_RoteAble::_Get_SATIntersect(_Point2D $BBR_box, _Point2D $self, float $AxisAngle)
{
	_Point2D $rotPoint = _Point2D(
		cos($AxisAngle) * ($BBR_box->_pos._x - $self->_pos._x) - sin($AxisAngle) * ($BBR_box->_pos._y - $self->_pos._y) + $self->_pos._x,
		sin($AxisAngle) * ($BBR_box->_pos._x - $self->_pos._x) + cos($AxisAngle) * ($BBR_box->_pos._y - $self->_pos._y) + $self->_pos._y
		);



	float $rotDirection = $BBR_box->_Direction + $self->_Direction;

	return false;
}*/