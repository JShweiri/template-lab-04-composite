#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"
#include <stdlib.h>

class Rand : public Base {
    public:
	Rand(Base *l, Base *r) : Base(){left = l; right = r;};
        Rand() : Base() { val = rand() % 100; }
        virtual double evaluate() { 

	srand(1);
return val; }
        virtual std::string stringify() { return std::to_string(val); }
	
    protected: 
	Base *left;
	Base *right;
    private:
	double val;
};

#endif //__RAND_HPP__
