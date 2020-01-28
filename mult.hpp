#ifndef _MULT__HPP_
#define _MULT__HPP_

#include "op.hpp"

class Mult : public Op{
	public: 
	Mult(Base *l, Base *r) : Op(l, r) {}
	virtual double evaluate() { return left->evaluate() *  right->evaluate();}
	virtual std::string stringify() { return left->stringify() + " * " + right->stringify(); }
};
#endif 
