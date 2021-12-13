//
// Created by ferun on 13.12.2021.
//

#include "BrickWall.hpp"

BrickWall::BrickWall() {
	type = "Inconspicuous Red-brick Wall";
}

ATarget *BrickWall::clone() const {
	return (new BrickWall());
}