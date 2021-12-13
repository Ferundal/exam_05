//
// Created by ferun on 13.12.2021.
//

#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}

void SpellBook::learnSpell(const ASpell *spell) {
	spells.push_back(spell);
}

void SpellBook::forgetSpell(const std::string spell) {
	std::vector<const ASpell *>::iterator curr = spells.begin();
	while (curr != spells.end()) {
		if ((*curr)->getName() == spell) {
			spells.erase(curr);
			return;
		}
		curr++;
	}
}

void SpellBook::launchSpell(const std::string spell, const ATarget &target) const {
	std::vector<const ASpell *>::const_iterator curr = spells.begin();
	while (curr != spells.end()) {
		if ((*curr)->getName() == spell) {
			target.getHitBySpell(**curr);
			return;
		}
		curr++;
	}
}