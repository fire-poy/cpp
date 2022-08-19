/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <mpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:23:24 by mpons             #+#    #+#             */
/*   Updated: 2022/08/18 10:57:42 by mpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB{

public: 
	HumanB(std::string name);
	~HumanB(void);
	void	attack(void) const;
	void	setWeapon(Weapon w);

private:
	std::string	const _name;
	Weapon		*_w;
};

#endif
