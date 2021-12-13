//
// Created by ferun on 13.12.2021.
//

#ifndef _FIREBALL_HPP
#define _FIREBALL_HPP
#include "ASpell.hpp"

class Fireball : public ASpell {
public:
	Fireball();
	ASpell * clone() const;
};


#endif //_FIREBALL_HPP
