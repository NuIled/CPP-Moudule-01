/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 02:23:58 by aoutifra          #+#    #+#             */
/*   Updated: 2023/10/03 08:51:42 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int input;
    std::string name;
    Log("ENTER NUMBER OF ZOMBIRES YOU WANT TO CRATE");
    std::cin >> input;
    if (std::cin.fail())
        exit(0);
    Log("ENTER NAME OF ZOMBIRES YOU WANT TO CRATE");
    std::cin >> name;
    Zombie *zombie = zombieHorde(input, name);
    for (int i = 0; i < input; i++)
        zombie[i].announce();
    delete [] zombie;
    return 0;
}