#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

class CircleLength
{

private:
	double m_radius;

public:
	CircleLength(double radius)
	{
		m_radius = radius;

	};

	~CircleLength() {};

	// Getter
	double Result()
	{
		return 2 * m_radius * M_PI;
	}

	// Setter
	bool SetRadius(double radius)
	{
		if (radius <= 0)
		{
			cout << "Error!The radius cannot be less than or equal to zero " << endl;
			return false;
		}
		m_radius = radius;
	}

};


int main()
{
	CircleLength first(55);
	cout << first.Result() << endl;
	first.SetRadius(-5);

	return 0;
}