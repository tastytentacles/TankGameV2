class _Point2D
{
public:
	_Point2D();
	_Point2D(float $x, float $y);

	float _x;
	float _y;
};

class _Vector2D
{
public:
	_Vector2D();
	_Vector2D(float $mag, float $ang);
	_Vector2D(float $x, float $y, float $mag, float $ang);

	_Point2D _pos;
	float _mag;
	float _ang;
};