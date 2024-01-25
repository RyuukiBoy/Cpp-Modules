/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:05:15 by oait-bad          #+#    #+#             */
/*   Updated: 2024/01/16 12:05:20 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private :
        std::string const target;
    public :
        PresidentialPardonForm(std::string const target);
        PresidentialPardonForm(PresidentialPardonForm const & src);
        ~PresidentialPardonForm();
        PresidentialPardonForm & operator=(PresidentialPardonForm const & src);
        void execute(Bureaucrat const & executor) const;
};

#endif