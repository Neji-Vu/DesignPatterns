#include "Products.h"

void Product1::ListParts(void) const
{
	std::cout << "List of parts: " << std::endl;

	for(auto& part: parts){
		std::cout << "\t" << part << ",";
	}
	std::cout << std::endl;
}