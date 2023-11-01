/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 05:27:42 by aoutifra          #+#    #+#             */
/*   Updated: 2023/10/06 23:54:35 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ()
{
    std::string s = "HI THIS IS BRAIN";
    std::string* ptr = &s;
    std::string& pt = s;
    std::cout << &s << std::endl;
    std::cout << &ptr << std::endl;
    std::cout << &pt << std::endl;
    std::cout << s << std::endl;
    std::cout << ptr << std::endl;
    std::cout << pt << std::endl;
}