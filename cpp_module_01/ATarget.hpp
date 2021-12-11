//
// Created by ferun on 10.12.2021.
//

#ifndef _ATARGET_HPP
#define _ATARGET_HPP

#include <string>
#include <iostream>

#include "ASpell.hpp"

class ATarget {
protected:
	std::string type;
public:
	ATarget();
	ATarget(const ATarget &origin);
	ATarget &operator =(const ATarget &origin);
	~ATarget();
	const std::string getType() const;
	virtual ATarget *clone() = 0;
	void getHitBySpell(const ASpell &spell) const;
};


#endif //_ATARGET_HPP
