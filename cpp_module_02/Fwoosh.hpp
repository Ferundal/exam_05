//
// Created by ferun on 10.12.2021.
//

#ifndef _FWOOSH_HPP
#define _FWOOSH_HPP
#include "ASpell.hpp"

class Fwoosh : public ASpell {
public:
	Fwoosh();
	ASpell *clone() const;
};


#endif //_FWOOSH_HPP
