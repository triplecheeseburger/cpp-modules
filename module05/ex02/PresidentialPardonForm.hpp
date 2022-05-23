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

# define PARDON_GRADE_TO_BE_SIGNED 25
# define PARDON_GRADE_TO_BE_EXECED 5

class PresidentialPardonForm: public Form
{

private:
	std::string target;

	PresidentialPardonForm();

public:
	void execute(const Bureaucrat &bureaucrat) const;

	explicit PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm &origin);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &origin);
	~PresidentialPardonForm();

};

#endif
