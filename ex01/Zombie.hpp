/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 23:23:34 by aoutifra          #+#    #+#             */
/*   Updated: 2023/10/03 08:52:20 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include<iostream>

#define Log(x) std::cout << x << std::endl;

class Zombie
{
	std::string name_i;

public:
	Zombie();
	void Zombie_name(std::string names);
	~Zombie();
	void announce(void); 
};

Zombie* zombieHorde( int N, std::string name );

#endif // Zombie_HPP

