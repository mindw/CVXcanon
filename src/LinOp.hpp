#ifndef LINOP_H
#define LINOP_H

#include <vector>


static const int CONSTANT_ID = -1;


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
	NO_OP
};

typedef operatortype OperatorType;

class LinOp{	
	public:
		OperatorType type;
		std::vector< int > size;
		std::vector< LinOp* > args;
		
		bool hasConstantType(){
			return  type == SCALAR_CONST || 
			type == DENSE_CONST || type == SPARSE_CONST;
		}
		std::vector< std::vector< double > > data;
};

class DenseLinOp : public LinOp{
	std::vector< std::vector< double > > data;
	void addData(){
		// TODO: John
		return;
	}
};

class SparseLinOp : public LinOp{
	std::vector< double > V;
	std::vector< double > I;
	std::vector< double > J;
	void addData(){
		// TODO: John
		return;
	}
};

class VariableLinOp : public LinOp{
	int variableId;
	void addData(){
		// TODO: John
		return;
	}
};


class ScalarLinOp : public LinOp{
	double data;
	void addData(){
		// TODO: John
		return;
	}
};


#endif