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
	ASpell(const ASpell &origin);
	ASpell &operator = (const ASpell &origin);
	virtual ~ASpell();
	const std::string getName() const;
	const std::string getEffects() const;
	virtual ASpell *clone() const = 0;
};


#endif //_ASPELL_HPP
