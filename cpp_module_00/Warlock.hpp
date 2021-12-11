//
// Created by Cetheres Jettie on 12/9/21.
//

#ifndef _WARLOCK_HPP
#define _WARLOCK_HPP

#include <string>
#include <iostream>

class Warlock {
private:
	std::string name;
	std::string title;
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
};


#endif //_WARLOCK_HPP
