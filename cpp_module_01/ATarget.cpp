//
// Created by ferun on 10.12.2021.
//

#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(const ATarget &origin) : type(origin.type) {

}

ATarget &ATarget::operator =(const ATarget &origin) {
	type = origin.type;
	return (*this);
}
ATarget::~ATarget() {}

const std::string ATarget::getType() const {
	return (type);
}

void ATarget::getHitBySpell(const ASpell &spell) const {
	std::cout << type << " has been " << spell.getEffects() << "!" <<std::endl;
}