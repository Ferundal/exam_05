//
// Created by ferun on 13.12.2021.
//

#ifndef EXAM_05_BRICKWALL_HPP
#define EXAM_05_BRICKWALL_HPP

#include "ATarget.hpp"

class BrickWall : public ATarget {
public:
	BrickWall();
	ATarget *clone() const;
};



#endif //EXAM_05_BRICKWALL_HPP
