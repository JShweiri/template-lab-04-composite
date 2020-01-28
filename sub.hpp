#ifndef __SUB_HPP__
#define __SUB_HPP__

#include "op.hpp"

class Sub : public Op {
    public:
        Sub(Base *l, Base *r) : Base() {left = l; right = r;}
        virtual double evaluate() { return left->evaluate - right->evaluate(); }
        virtual std::string stringify() { return left->stringify() + " - " + right->stringify(); }
};

#endif //__OP_HPP__
