#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "op.hpp"

class Div : public Op {
    public:
        Div(Base *l, Base *r) : Base() {left = l; right = r;}
        virtual double evaluate() { return left->evaluate() / right->evaluate(); }
        virtual std::string stringify() { return left->stringify() + " / " + right->stringify(); }
};

#endif //__OP_HPP__
