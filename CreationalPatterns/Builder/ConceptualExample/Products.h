#pragma once

#include <string>
#include <iostream>
#include <vector>

class Product1 {
	private:
	std::vector<std::string> parts;

	public:
	Product1() = default;
	
	/// @brief 
	/// @param  
	void ListParts(void) const;

	std::vector<std::string>& getParts(){
		return parts;
	}
};