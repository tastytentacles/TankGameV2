#include <math.h>
#include <vector>
using namespace std;

#include "TankClasses.h"

_Orbital::_Orbital()
{
	//_UseHitBox = false;

	//_hitBox = _BB_RoteAble();

	//_pos = _Point2D();

	_pos._x = 0;
	_pos._y = 0;

	_Direction = 0;
	_Speed = 0;
}

_Tank::_Tank()
{	
	//_UseHitBox = true;
	//_hitBox._height = 1.0f;
	//_hitBox._width = 1.0f;
	
	_Turret_Direction = 0.0f;
	_Turret_CoolDown = 0;

	_Key_Up = false;
	_Key_Down = false;
	_Key_Left = false;
	_Key_Right = false;

	_Key_TRot_Right = false;
	_Key_TRot_Left = false;

	_Key_fire = false;
}

_Shell::_Shell()
{
	_UseHitBox = false;
	_Speed = 0.25;
	_Direction = 0;
}