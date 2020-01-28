#ifndef __POW_HPP__
#define __POW_HPP__

#include "op.hpp"
#include <cmath>

class Pow : public Op {
    public:
        Pow(Base *l, Base *r) : Base() {left = l; right = r;}
        virtual double evaluate() { return pow(left->evaluate(), right->evaluate()); }
        virtual std::string stringify() { return left->stringify() + " ** " + right->stringify(); }
};

#endif //__OP_HPP__
