/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 02:23:58 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/04 12:50:47 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
void randomChump( std::string name );
Zombie* newZombie( std::string name );

int main()
{
    std::string name;
    name = "ZOMBIE";
    Zombie *Z = newZombie(name);
    Z->announce();
    randomChump(name);
    delete Z;
    return 0;
}