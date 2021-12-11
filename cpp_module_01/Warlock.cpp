//
// Created by Cetheres Jettie on 12/9/21.
//

#include "Warlock.hpp"

Warlock::~Warlock() {
	std::cout << name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(const std::string& new_name, const std::string& new_title) : name(new_name), title(new_title) {
	std::cout << name << ": This looks like another boring day." <<std::endl;
}

const std::string &Warlock::getName() const {
	return (name);
}

const std::string &Warlock::getTitle() const {
	return (title);
}

void Warlock::setTitle(const std::string newTitle) {
	title = newTitle;
}

void Warlock::introduce() const {
	std::cout << name << ": I am " << name <<", " << title << "!" <<std::endl;
}

void Warlock::learnSpell(const ASpell *spell) {
	spells.push_back(spell);
}

void Warlock::forgetSpell(const std::string spell) {
	std::vector<ASpell>::iterator curr = spells.begin();
	while (curr != spells.end()) {
		if (curr->getName() == spell) {
			spells.erase(curr);
			return;
		}
		curr++;
	}
}

void Warlock::launchSpell(const std::string spell, const ATarget &target) const {
	std::vector<ASpell>::const_iterator curr = spells.begin();
	while (curr != spells.end()) {
		if (curr->getName() == spell) {
			target.getHitBySpell(*curr);
			return;
		}
		curr++;
	}
}