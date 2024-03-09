/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maltun <maltun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 00:42:48 by maltun            #+#    #+#             */
/*   Updated: 2024/03/03 20:07:51 by maltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(void);
		Character(const Character& obj);
		Character(std::string name);
		virtual ~Character(void);
		Character&			operator=(const Character& obj);

		const std::string&	getName(void) const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);

	private:
		std::string	_name;
		AMateria*	_inventory[4];

};

std::ostream&	operator<<(std::ostream& o, const Character& i);

#endif
