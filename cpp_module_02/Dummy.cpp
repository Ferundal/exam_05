//
// Created by ferun on 10.12.2021.
//

#include "Dummy.hpp"

Dummy::Dummy() {
	type = "Target Practice Dummy";
}

ATarget *Dummy::clone() const {
	return (new Dummy());
}