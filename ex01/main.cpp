/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 02:23:58 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/04 12:50:21 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie* zombieHorde( int N, std::string name );

int main()
{
    std::string name = "Zombie" ;
    Zombie *zombie = zombieHorde(5, name);
    for (int i = 0; i < 5; i++)
        zombie[i].announce();
    delete [] zombie;
    return 0;
}