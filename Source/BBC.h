#include "rootClasses.h"

class _BB_RoteAble
{
public:
	_BB_RoteAble();
	_BB_RoteAble(float $width, float $height);

	//bool _Get_PointIntersect(float $posX, float $posY, float $pointX, float $pointY, float $direction);
	//bool _Get_SATIntersect(_Point2D $BBR_Box, _Point2D $self, float $AxisAngle);
	//bool _Get_BoxIntersect(_Point2D $BBR_Box);

	float _width;
	float _height;
};