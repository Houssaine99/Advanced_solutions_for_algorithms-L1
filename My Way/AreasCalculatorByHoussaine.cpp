#include <iostream>
#include <string>
#include <cmath>

using namespace std;

constexpr float PI_VALUE = 3.141592653589793238;

enum enGeometricShapes { Rectangle = 1, Triangle = 2, Circle = 3 };

enum enRectangleAreaCalculationMethods { ByWidthAndLength = 1, ByDiagonalAndSide = 2 };

enum enCircleAreaCalculationMethods {
	ByRadius = 1, ByDiameter = 2, InscribedInSquare = 3, ByCircumference = 4,
	InscribedInIsoscelesTriangle = 5, DiscribedAroundArbitraryTriangle = 6
};

enum enTriangleAreaCalculationMethods { ByBaseAndHeight = 1, StillWorkingOnIt = 2 };

float ReadPositiveNumber(string Message)
{
	float InputValue = 0;

	do
	{
		cout << endl << Message << endl;
		cin >> InputValue;

	} while (InputValue <= 0);

	return InputValue;
} 

int ReadNumberInRange(string Message, int From, int To)
{
	int InputValue = 0;

	do
	{
		cout << Message << endl;
		cin >> InputValue;

	} while (InputValue < From || InputValue > To);

	return InputValue;
}

void GeometricShapesMenu()
{
	cout << "Select a shape:\n";
	cout << "\n\t[1]. Rectangle.\n";
	cout << "\t[2]. Triangle.\n";
	cout << "\t[3]. Circle.\n\n";
}

void RectangleMenu()
{
	cout << " => Rectangle Area:\n";

	cout << "\n\t [1]. Rectangle area through width and length.\n";
	cout << "\t [2]. Rectangle area through diagonal and side.\n\n";
}

void TriangleMenu()
{
	cout << "=> Triangle Area:\n";
	cout << "\n\t [1]. Triangle area through base and hight.\n";
	cout << "\t [2]. FutureUser.\n\n";
}

void CircleMenu()
{
	cout << "=> Circle Area:\n";
	cout << "\n\t [1]. Circle area through radius R.\n";
	cout << "\t [2]. Circle area through diameter.\n";
	cout << "\t [3]. Circle area inscribed in square.\n";
	cout << "\t [4]. Circle area along with circumference.\n";
	cout << "\t [5]. Circle area inscribed in an isosceles triangle.\n";
	cout << "\t [6]. Circle area discribed around an arbitrary triangle.\n";
}

float RectangleAreaByWidthAndLength(float RectangleWidth , float RectangleLength)
{
	return RectangleWidth * RectangleLength;
}

float RectangleAreaBySideAndDiagonal(float RectangleSide, float RectangleDiagonal)
{
	float Area = RectangleSide * sqrt(pow(RectangleDiagonal, 2) - pow(RectangleSide, 2));

	return Area;
}

float TriangleAreaByBaseAndHeight(float Base, float Height)
{
	float Area = (Base / 2) * Height;
	return Area;
}

float CircleAreaByRadius(float Radius)
{
	float Area = PI_VALUE * pow(Radius, 2);

	return Area;
}

float CircleAreaByDiameter(float Diameter)
{
	float Area = (PI_VALUE * pow(Diameter, 2)) / 4;
	return Area;
}

float CircleAreaInscribedInSquare(float SquareSide)
{
	float Area = (PI_VALUE * pow(SquareSide, 2)) / 4;
	return Area;
}

float CircleAreaByCircumference(float Circumference)
{
	float Area = pow(Circumference, 2) / (4 * PI_VALUE);

	return Area;
}

float CircleAreaInscribedInIsoscelesTriangle(float TriangleSide, float TriangleBase)
{
	float Area = PI_VALUE * (pow(TriangleBase, 2) / 4) * ((2 * TriangleSide - TriangleBase) / (2 * TriangleSide + TriangleBase));

	return Area;
}

float CircleAreaInscribedInArbitraryTriangle(float FirstSide, float Base, float SecondSide)
{
	float P;
	P = (FirstSide + Base + SecondSide) / 2;

	float T;
	T = ((FirstSide * Base * SecondSide) / (4 * sqrt(P * (P - FirstSide) * (P - Base) * (P - SecondSide))));

	float Area = PI_VALUE * pow(T, 2);

	return Area;
}

enGeometricShapes ShapeSelection()
{
	GeometricShapesMenu();
	int UserChoice = ReadNumberInRange("(Select From 1 to 3)", 1, 3);

	return static_cast<enGeometricShapes> (UserChoice);
}

enRectangleAreaCalculationMethods RectangleArea()
{
	RectangleMenu();
	int UserChoice = ReadNumberInRange("(Select from 1 to 2)", 1, 2);

	return static_cast<enRectangleAreaCalculationMethods> (UserChoice);
}

enTriangleAreaCalculationMethods TriangleArea()
{
	TriangleMenu();
	int UserChoice = ReadNumberInRange("(Select From 1 to 2", 1, 2);

	return static_cast<enTriangleAreaCalculationMethods> (UserChoice);
}

enCircleAreaCalculationMethods CircleArea()
{
	CircleMenu();
	int UserChoice = ReadNumberInRange("(Select from 1 to 6)", 1, 6);

	return static_cast<enCircleAreaCalculationMethods> (UserChoice);
}

float CalculateRectangleArea(enRectangleAreaCalculationMethods CalculationMethods)
{
	float Area = 0;
	switch (CalculationMethods)
	{
	case enRectangleAreaCalculationMethods::ByDiagonalAndSide:
		Area = RectangleAreaBySideAndDiagonal(ReadPositiveNumber("Please enter rectangle side?"), ReadPositiveNumber("Please enter rectangle diagonal?"));
		return Area;
	case enRectangleAreaCalculationMethods::ByWidthAndLength:
		Area = RectangleAreaByWidthAndLength(ReadPositiveNumber("Please enter rectangle width?"), ReadPositiveNumber("Please enter rectangle length?"));
		return Area;
	}
}

float CalculateTriangleArea(enTriangleAreaCalculationMethods CalculationMethods)
{
	float Area = 0;

	switch (CalculationMethods)
	{
	case enTriangleAreaCalculationMethods::ByBaseAndHeight:
		Area = TriangleAreaByBaseAndHeight(ReadPositiveNumber("Please enter triangle base?"), ReadPositiveNumber("Please enter triangle height?"));
		return Area;
	case enTriangleAreaCalculationMethods::StillWorkingOnIt:
		return Area;
	}
}

float CalculateCircleArea(enCircleAreaCalculationMethods CalculationMethods)
{
	float Area = 0;

	switch (CalculationMethods)
	{
	case enCircleAreaCalculationMethods::ByRadius:
		Area = CircleAreaByRadius(ReadPositiveNumber("Please enter circle radius?"));
		return Area;
	case enCircleAreaCalculationMethods::ByDiameter:
		Area = CircleAreaByDiameter(ReadPositiveNumber("Please enter diameter?"));
		return Area;
	case enCircleAreaCalculationMethods::InscribedInSquare:
		Area = CircleAreaInscribedInSquare(ReadPositiveNumber("Please enter square side?"));
		return Area;
	case enCircleAreaCalculationMethods::ByCircumference:
		Area = CircleAreaByCircumference(ReadPositiveNumber("Please enter circumference?"));
		return Area;
	case enCircleAreaCalculationMethods::InscribedInIsoscelesTriangle:
		Area = CircleAreaInscribedInIsoscelesTriangle(ReadPositiveNumber("Please enter triangle side?"), ReadPositiveNumber("Please enter triangle base?"));
		return Area;
	case enCircleAreaCalculationMethods::DiscribedAroundArbitraryTriangle:
		Area = CircleAreaInscribedInArbitraryTriangle(ReadPositiveNumber("Please enter triangle first side?"), ReadPositiveNumber("Please enter triangle base?"), ReadPositiveNumber("Please enter triangle second side?"));
		return Area;
	}
}

void ShowMenus(enGeometricShapes Shapes)
{
	switch (Shapes)
	{
	case enGeometricShapes::Rectangle:
		cout << "\n => Area = " << CalculateRectangleArea(RectangleArea()) << endl << endl;
		break;
	case enGeometricShapes::Triangle:
	{
		float Result = CalculateTriangleArea(TriangleArea());
		if (Result == 0)
		{
			cout << "\n => This part is not finished yet! \n\n";
			break;
		}
		cout << "\n => Area =" << Result << endl << endl;
		break;
	}
	case enGeometricShapes::Circle:
		cout << "\n => Area = " << CalculateCircleArea(CircleArea()) << endl << endl;
		break;
	}
}

void Shapes()
{
	int Choice = 1;

	do
	{
		ShowMenus(ShapeSelection());
		cout << "[1]. Exit		[2]. Calculate another area\n\n";
		Choice = ReadNumberInRange("Select a choice:", 1, 2);

	} while (Choice == 2);
}



int main()
{
	
	Shapes();
		
	return 0;
}