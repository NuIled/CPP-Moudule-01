/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 02:23:58 by aoutifra          #+#    #+#             */
/*   Updated: 2023/10/02 21:03:38 by aoutifra         ###   ########.fr       */
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
    for (int i = 0; i < input; i++)
    {
        Log("ENTER THE NAME OF ZOMBIE");
        std::cin >> name;
        randomChump(name);
    }
    return 0;
}