#ifdef _RAND_HPP
#define __RAND_HPP__

#include "Base.hpp"

class Rand : public Base {
    public:
        Rand(double value) : Base() {val = rand() % 100; }
        virtual double evaluate() { return val; }
        virtual std::string stringify() { return std::to_string(val); }
	
    Protected: 
	Base* left;
	Base* right;
    Private:
	double val;
};

#endif //__RAND_HPP__
