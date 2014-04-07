#include "BBC.h"

class _Orbital
{
public:
	_Orbital();

	_Point2D _pos;
	_BB_RoteAble _hitBox;
	bool _UseHitBox;

	float _Direction;
	float _Speed;

	float _faceVertexArray;
};

struct _Key_ID
{
	char _UP_ID;
	char _DOWN_ID;
	char _LEFT_ID;
	char _RIGHT_ID;

	char _TRot_Right_ID;
	char _TRot_Left_ID;

	char _Fire_ID;
};

class _Tank : public _Orbital
{
public:
	_Tank();

	void _fireShell();

	_Key_ID _Tank_Key_ID;

	float _Turret_Direction;
	int _Turret_CoolDown;

	bool _Key_Up;
	bool _Key_Down;
	bool _Key_Left;
	bool _Key_Right;

	bool _Key_TRot_Right;
	bool _Key_TRot_Left;

	bool _Key_fire;
};

class _Shell : public _Orbital
{
public:
	_Shell();

	bool live;
};