/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 23:56:37 by aoutifra          #+#    #+#             */
/*   Updated: 2023/10/09 00:03:34 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"


class HumanB {
	std::string _name;
	Weapon *Weapons;
public:
		HumanB(std::string name);
		~HumanB();
		void setWeapon(Weapon &Wepon);
		void attack(void);
};

#endif // humanB_H
