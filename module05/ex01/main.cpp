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
#include "Form.hpp"

int main(void)
{
	Bureaucrat hakim = Bureaucrat("hakim", 5);
	Form form1 = Form("form1", 10, 10);
	Form form2 = Form("form2", 1, 1);
	std::cout << hakim << std::endl;
	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;
	try {
		Form form3 = Form("form3", 0, 1);
		Form form4 = Form("form4", 151, 1);
	} catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		hakim.signForm(form1);
		std::cout << form1 << std::endl;
		hakim.signForm(form2);
		std::cout << form2 << std::endl;
	} catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
