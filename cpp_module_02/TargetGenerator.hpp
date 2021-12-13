//
// Created by ferun on 13.12.2021.
//

#ifndef _TARGETGENERATOR_HPP
#define _TARGETGENERATOR_HPP

#include <string>
#include "ATarget.hpp"
#include <vector>

class TargetGenerator {
private:
	std::vector<const ATarget *> target_types;
public:
	TargetGenerator();
private:
	TargetGenerator(const TargetGenerator &origin);
	TargetGenerator &operator = (const TargetGenerator &origin) const;
public:
	~TargetGenerator();
	void learnTargetType(ATarget*);
	void forgetTargetType(std::string const &);
	ATarget* createTarget(std::string const &) const;
};


#endif //_TARGETGENERATOR_HPP
