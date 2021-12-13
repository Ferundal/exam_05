//
// Created by ferun on 13.12.2021.
//

#ifndef _POLYMORPH_HPP
#define _POLYMORPH_HPP

#include "ASpell.hpp"

class Polymorph : public ASpell {
public:
	Polymorph();
	ASpell * clone() const;
};



#endif // _POLYMORPH_HPP
