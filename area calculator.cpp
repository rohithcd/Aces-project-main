#include <iostream>
#include <cmath>

int main()
{
	std::cout << "\t\t\tArea Calculator" << std::endl;
	std::cout << "\t\t\t===============" << std::endl;
	
	int a, b, c, s;
	double result;
	
	std::cout << "Enter sides of Triangle > " << std::flush;
	std::cin >> a >> b >> c;
	
	s = (a+b+c)/2;
	result = sqrt(s*(s-a)* (s-b) * (s-c));
	std::cout << "Area = " << result << std::endl;
	
	return 0;
}
