/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:23:19 by oait-bad          #+#    #+#             */
/*   Updated: 2024/01/14 11:10:41 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string const name, int const gradeToSign, int const gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) , isSigned(false)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

Form::Form(Form const & src) : name(src.name), gradeToSign(src.gradeToSign), gradeToExecute(src.gradeToExecute)
{
    *this = src;
}

Form & Form::operator=(Form const & src)
{
    this->isSigned = src.isSigned;
    return *this;
}

Form::~Form()
{
}

std::string const Form::getName() const
{
    return this->name;
}

bool Form::getIsSigned() const
{
    return this->isSigned;
}

int Form::getGradeToSign() const
{
    return this->gradeToSign;
}

int Form::getGradeToExecute() const
{
    return this->gradeToExecute;
}

void Form::beSigned(Bureaucrat & bureaucrat)
{
    if (bureaucrat.getGrade() > this->gradeToSign)
        throw GradeTooLowException();
    this->isSigned = true;
}

std::ostream & operator<<(std::ostream & o, Form const & src)
{
    o << "Form " << src.getName() << " is " << (src.getIsSigned() ? "signed" : "not signed") << " and requires grade " << src.getGradeToSign() << " to be signed and grade " << src.getGradeToExecute() << " to be executed" << std::endl;
    return o;
}
