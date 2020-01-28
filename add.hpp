#ifndef _ADD__HPP_
#define _ADD__HPP_

#include "op.hpp"

class Add : public Op{
	public: 
	Add(Base *l, Base *r) : Op(l, r) {}
	virtual double evaluate() { return left->evaluate() +  right->evaluate();}
	virtual std::string stringify() { return left->stringify() + " + " + right->stringify(); }
};
#endif 
