/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpons <mpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:57:34 by mpons             #+#    #+#             */
/*   Updated: 2022/07/19 17:18:34 by mpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

public:

	Zombie(std::string name);
	~Zombie(void);
	void announce(void) const;

private:

	std::string _name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
