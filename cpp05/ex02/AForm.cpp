/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:17:48 by oait-bad          #+#    #+#             */
/*   Updated: 2024/01/14 16:35:30 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string const name, int const gradeToSign, int const gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) , isSigned(false)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

AForm::AForm(AForm const & src) : name(src.name), gradeToSign(src.gradeToSign), gradeToExecute(src.gradeToExecute)
{
    *this = src;
}

AForm & AForm::operator=(AForm const & src)
{
    this->isSigned = src.isSigned;
    return *this;
}

AForm::~AForm()
{
}

std::string const AForm::getName() const
{
    return this->name;
}

bool AForm::getIsSigned() const
{
    return this->isSigned;
}

int AForm::getGradeToSign() const
{
    return this->gradeToSign;
}

int AForm::getGradeToExecute() const
{
    return this->gradeToExecute;
}

void AForm::beSigned(Bureaucrat & bureaucrat)
{
    if (bureaucrat.getGrade() > this->gradeToSign)
        throw GradeTooLowException();
    this->isSigned = true;
}

std::ostream & operator<<(std::ostream & o, AForm const & src)
{
    o << "Form " << src.getName() << " is " << (src.getIsSigned() ? "signed" : "not signed") << " and requires grade " << src.getGradeToSign() << " to be signed and grade " << src.getGradeToExecute() << " to be executed" << std::endl;
    return o;
}
