//
// Created by ferun on 13.12.2021.
//

#include "Polymorph.hpp"

Polymorph::Polymorph() {
	name = "Polymorph";
	effects = "turned into critter";
}

ASpell *Polymorph::clone() const {
	return (new Polymorph());
}