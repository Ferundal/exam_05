//
// Created by ferun on 10.12.2021.
//

#include "Dummy.hpp"

Dummy::Dummy() {
	type = "Target Practice Dummy";
}

ATarget *Dummy::ATarget::clone() {
	return (new Dummy());
}