/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:30:38 by oait-bad          #+#    #+#             */
/*   Updated: 2024/01/14 11:12:11 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name) , grade(grade)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : name(src.name)
{
    *this = src;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src)
{
    this->grade = src.grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
}

std::string const Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

void Bureaucrat::incrementGrade()
{
    if (this->grade - 1 < 1)
        throw GradeTooHighException();
    this->grade--;
}

void Bureaucrat::decrementGrade()
{
    if (this->grade + 1 > 150)
        throw GradeTooLowException();
    this->grade++;
}

void Bureaucrat::signForm(Form & Form)
{
    try
    {
        Form.beSigned(*this);
        std::cout << this->name << " signed " << Form.getName() << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << this->name << " cannot sign " << Form.getName() << " because " << e.what() << std::endl;
    }
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & src)
{
    o << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
    return o;
}