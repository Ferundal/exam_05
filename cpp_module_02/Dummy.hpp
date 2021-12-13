//
// Created by ferun on 10.12.2021.
//

#ifndef _DUMMY_HPP
#define _DUMMY_HPP

#include "ATarget.hpp"

class Dummy : public ATarget {
public:
	Dummy();
	ATarget *clone() const;
};


#endif //_DUMMY_HPP
