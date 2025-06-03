#ifndef	WEAPON_HPP
#define	WEAPON_HPP

#include <string>

class	Weapon{
	private:
		std::string	type;
	public:
		void	setType(const std::string& type);
		void	getType()const;
};

#endif
