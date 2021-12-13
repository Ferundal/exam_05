//
// Created by Cetheres Jettie on 12/9/21.
//

#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(const ASpell &origin) : name(origin.name), effects(origin.effects) {

}

ASpell &ASpell::operator=(const ASpell &origin) {
	name = origin.name;
	effects = origin.name;
	return (*this);
}

ASpell::~ASpell() {

}

const std::string ASpell::getName() const {
	return (name);
}

const std::string ASpell::getEffects() const {
	return (effects);
}