/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakim <hakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:54:26 by hakim             #+#    #+#             */
/*   Updated: 2022/05/22 01:54:28 by hakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM
# define PRESIDENTIALPARDONFORM

# include "Form.hpp"

class PresidentialPardonForm: public Form
{

private:
	std::string target;

	static const int grade_to_be_signed = 25;
	static const int grade_to_be_executed = 5;

	PresidentialPardonForm();

public:
	void execute(const Bureaucrat &bureaucrat) const;

	explicit PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm &origin);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &origin);
	~PresidentialPardonForm();

};

#endif
