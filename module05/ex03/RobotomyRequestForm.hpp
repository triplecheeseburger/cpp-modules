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

# define ROBOTOMY_GRADE_TO_BE_SIGNED 72
# define ROBOTOMY_GRADE_TO_BE_EXECED 45

class RobotomyRequestForm: public Form
{

private:
	std::string target;

	RobotomyRequestForm();

public:
	void execute(const Bureaucrat &bureaucrat) const;

	explicit RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &origin);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &origin);
	~RobotomyRequestForm();

};

#endif