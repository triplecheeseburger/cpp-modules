/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:54:14 by hakim             #+#    #+#             */
/*   Updated: 2022/05/22 01:54:16 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM
# define ROBOTOMYREQUESTFORM

# include "Form.hpp"
# include <cstdlib>

class RobotomyRequestForm: public Form
{

private:
	std::string target;

	static const int grade_to_be_signed = 72;
	static const int grade_to_be_executed = 45;

	RobotomyRequestForm();

public:
	void execute(const Bureaucrat &bureaucrat) const;

	explicit RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &origin);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &origin);
	~RobotomyRequestForm();

};

#endif