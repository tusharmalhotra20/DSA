/*A program to calculate area of a CIRCLE,a RECTANGLE, a TRIANGLE depending uopn user's choice. */

#include <iostream>
int main()
{
	int choice;
	float r, ar, l, b, h;

	std::cout << "Area Menu:\t"
			  << "\n\n1. Area of CIRCLE:"
			  << "\n2. Area of RECTANGLE"
			  << "\n3. Area of Triangle"
			  << "\n4. EXIT"
			  << "\n\nEnter your choice:\t";
	std::cin >> choice;

	switch (choice)
	{
	case 1:
		std::cout << "\n\nEnter radius:\t";
		std::cin >> r;

		ar = 3.14 * r * r;

		std::cout << "\nArea of circle is:\t" << ar;

		break;

	case 2:
		std::cout << "\n\nEnter length:\t";
		std::cin >> l;
		std::cout << "\nEnter breadth:\t";
		std::cin >> b;

		ar = l * b;

		std::cout << "\n\nArea of rectangle is:\t" << ar;

		break;

	case 3:
		std::cout << "\n\nEnter base:\t";
		std::cin >> b;
		std::cout << "\nEnter height:\t";
		std::cin >> h;

		ar = 0.5 * b * h;

		std::cout << "\nArea of triangle is:\t" << ar;

		break;

	default:
		break;
	}
}