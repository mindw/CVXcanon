#include "CVXcanon.hpp"
#include <iostream>
#include <map>
#include "Utils.hpp"
#include "LinOp.hpp"

map<int, Matrix> get_coefficient(LinOp &lin){
	map<int, Matrix>;
	if(lin.type == VARIABLE)


	return NULL_MATRIX;
}

Matrix build_matrix(CoeffMap &coeff_map){
	return NULL_MATRIX;
}

Matrix get_matrix(std::vector< LinOp* > constraints){
	// TODO

	// Make Map
	CoeffMap coeff_map;

	// Loop over constraints, for each:
		// Call get coefficient
		// add coefficient to map with constr. id

	// Now have map, then call build_matrix
	return NULL_MATRIX;
}

int main()
{
  std::cout << "Hello World!\n";
}