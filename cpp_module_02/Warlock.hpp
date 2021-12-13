//
// Created by Cetheres Jettie on 12/9/21.
//

#ifndef _WARLOCK_HPP
#define _WARLOCK_HPP

#include <string>
#include <iostream>
#include <vector>

#include "SpellBook.hpp"

class Warlock {
private:
	std::string name;
	std::string title;
	SpellBook book;
	Warlock();
	Warlock(const Warlock &origin);
	Warlock &operator =(const Warlock &origin);
public:
	~Warlock();
	Warlock(const std::string& new_name, const std::string& new_title);
	const std::string &getName() const;
	const std::string &getTitle() const;
	void setTitle(const std::string newTitle);
	void introduce() const;
	void learnSpell(const ASpell *spell);
	void forgetSpell(const std::string spell);
	void launchSpell(const std::string spell, const ATarget &target) const;
};


#endif //_WARLOCK_HPP
