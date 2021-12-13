//
// Created by ferun on 13.12.2021.
//

#include "Fireball.hpp"

Fireball::Fireball() {
	name = "Fireball";
	effects = "burnt to a crisp";
}

ASpell *Fireball::clone() const {
	return (new Fireball());
}