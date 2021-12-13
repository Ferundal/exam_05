//
// Created by ferun on 13.12.2021.
//

#ifndef _SPELLBOOK_HPP
#define _SPELLBOOK_HPP

#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

class SpellBook {
private:
	std::vector<const ASpell *> spells;
private:
	SpellBook(const SpellBook &origin);
	SpellBook &operator =(const SpellBook &origin);
public:
	SpellBook();
	~SpellBook();
	void learnSpell(const ASpell *spell);
	void forgetSpell(const std::string spell);
	void launchSpell(const std::string spell, const ATarget &target) const;
};
#endif //_SPELLBOOK_HPP
