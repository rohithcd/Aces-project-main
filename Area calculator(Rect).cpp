#include <iostream>
#include <cmath>

int main()
{
	std::cout << "\t\t\tArea Calculator" << std::endl;
	std::cout << "\t\t\t===============" << std::endl;
	
	double len, wid;
	double result;
	
	std::cout << "Enter length of Rectangle > " << std::flush;
	std::cin >> len;
	
	std::cout << "Enter width of Rectangle > " << std::flush;
	std::cin >> wid;
	
	result = len*wid;
	std::cout << "Area = " << result << std::endl;
	
	return 0;
}
