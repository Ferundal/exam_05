//
// Created by ferun on 13.12.2021.
//

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

void TargetGenerator::learnTargetType(ATarget *new_type) {
	target_types.push_back(new_type);
}

void TargetGenerator::forgetTargetType(const std::string &type) {
	std::vector<const ATarget *>::iterator curr = target_types.begin();
	while (curr != target_types.end()) {
		if ((*curr)->getType() == type) {
			target_types.erase(curr);
			return;
		}
		++curr;
	}
}

ATarget *TargetGenerator::createTarget(const std::string &type) const {
	std::vector<const ATarget *>::const_iterator curr = target_types.begin();
	while (curr != target_types.end()) {
		if ((*curr)->getType() == type) {
			return ((*curr)->clone());
		}
		++curr;
	}
	return (NULL);
}