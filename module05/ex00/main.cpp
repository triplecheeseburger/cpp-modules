/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 10:32:26 by hakim             #+#    #+#             */
/*   Updated: 2022/05/21 10:32:28 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat hakim = Bureaucrat("hakim", 5);
	Bureaucrat amugae = Bureaucrat();
	Bureaucrat copy_hakim = Bureaucrat(hakim);
	Bureaucrat assign_hakim = Bureaucrat();

	assign_hakim = hakim;
	std::cout << amugae << std::endl;
	std::cout << "copy_hakim: " << copy_hakim << std::endl;
	std::cout << "assign_hakim: " << assign_hakim << std::endl;

	try {
		std::cout << "START" << std::endl;
		std::cout << hakim << std::endl;
		hakim.gradePlusPlus();
		std::cout << hakim << std::endl;
		hakim.gradePlusPlus();
		std::cout << hakim << std::endl;
		hakim.gradePlusPlus();
		std::cout << hakim << std::endl;
		hakim.gradePlusPlus();
		std::cout << hakim << std::endl;
		hakim.gradePlusPlus();
		std::cout << "can I reach here?" << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "copy_hakim: " << copy_hakim << std::endl;
	std::cout << "assign_hakim: " << assign_hakim << std::endl;
	try {
		std::cout << "START" << std::endl;
		std::cout << amugae << std::endl;
		amugae.gradeMinusMinus();
		std::cout << "can I reach here?" << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	system("leaks ex00");
	return 0;
}
