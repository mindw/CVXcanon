#ifndef LINOP_H
#define LINOP_H

#include <vector>

enum operatortype {
	VARIABLE,
	PROMOTE,
	MUL,
	RMUL,
	MUL_ELEM,
	DIV,
	SUM,
	NEG,
	INDEX,
	TRANSPOSE,
	SUM_ENTRIES,
	TRACE,
	RESHAPE,
	DIAG_VEC,
	DIAG_MAT,
	UPPER_TRI,
	CONV,
	HSTACK,
	VSTACK,
	SCALAR_CONST,
	DENSE_CONST,
	SPARSE_CONST,
	NO_OP,
	CONSTANT_ID // change this to be a -1 to avoid colliding with variable id
};

typedef operatortype OperatorType;

class LinOp{	
	public:
		OperatorType type;
		std::vector< std::vector<double> > data;
		std::vector< int > size;
		std::vector< LinOp* > args;
		
		bool hasConstantType(){
			return  type == SCALAR_CONST || 
			type == DENSE_CONST || type == SPARSE_CONST;
		}
};
#endif