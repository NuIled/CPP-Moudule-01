/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 23:56:34 by aoutifra          #+#    #+#             */
/*   Updated: 2023/10/09 00:02:30 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    this->_name = name;
}

HumanB::~HumanB() {
		// Destructor implementation
}
void HumanB::setWeapon(Weapon &Wepon)
{
    this->Weapons = &Wepon;
}


void HumanB::attack(void)
{
    std::cout << this->_name << " attacks with their" << this->Weapons->getter() << std::endl;
}
