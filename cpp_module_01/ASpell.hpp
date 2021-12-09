//
// Created by Cetheres Jettie on 12/9/21.
//

#ifndef _ASPELL_HPP
#define _ASPELL_HPP
#include <string>

class ASpell {
protected:
	std::string name;
	std::string effects;
public:
	ASpell();
	ASpell(ASpell &origin);
	ASpell &operator = (ASpell &origin);
	~ASpell();
	const std::string getName() const;
	const std::string getEffects() const;
};


#endif //_ASPELL_HPP
