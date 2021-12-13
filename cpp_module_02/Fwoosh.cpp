//
// Created by ferun on 10.12.2021.
//

#include "Fwoosh.hpp"

Fwoosh::Fwoosh() {
	name = "Fwoosh";
	effects = "fwooshed";
}

ASpell *Fwoosh::clone() const {
	return (new Fwoosh());
}