/* ************************************************************************************** */
/*																						  */
/*                                                						d8b		888       */
/*                                                  					Y8P		888       */
/*                                                      						888       */
/*		888  888	  .d88b.   	8888b.  	88888b.d88b.	88888888	888 	888       */
/*		888  888 	d88""88b     	"88b 	888 "888 "88b    	d88P 	888 	888       */
/*		888  888 	888  888 	.d888888 	888  888  888		d88P   	888 	888       */
/*		Y88b 888 	Y88..88P 	888  888 	888  888  888	  d88P    	888 	888       */
/*		"Y88888  	"Y88P"  	"Y888888 	888  888  888	88888888 	888 	888       */
/*	  		 888																          */
/*		Y8b d88P																          */
/*		"Y88P"									By: yoamzil <yoamzil@student.1337.ma>     */
/*																						  */
/* ************************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : name("Unknown")
{
    // std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    // std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string Name, int Grade) : name(Name)
{
    // std::cout << "Bureaucrat parameterized constructor called" << std::endl;
    if (Grade < 1)
        throw GradeTooHighException();
    else if (Grade > 150)
        throw GradeTooLowException();
    grade = Grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &original) : name(original.name)
{
    // std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = original;
}

Bureaucrat  &Bureaucrat::operator=(Bureaucrat const &original)
{
    if (this != &original)
    {
        this->grade = original.grade;
    }
    return (*this);
}

std::ostream    &operator<<(std::ostream &out, Bureaucrat &bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return (out);
}

std::string Bureaucrat::getName() const
{
    return (name);
}

int Bureaucrat::getGrade() const
{
    return (grade);
}

void    Bureaucrat::incrementGrade()
{
    std::cout << "Incrementing..." << std::endl;
    if (grade <= 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    grade -= 1;
}

void    Bureaucrat::decrementGrade()
{
    std::cout << "Decrementing..." << std::endl;
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade >= 150)
        throw GradeTooLowException();
    grade += 1;
}

void Bureaucrat::signForm(AForm &form)
{
	// form.beSigned(*this);
	if (form.getIsSigned() == true)
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	else if (form.getIsSigned() == false)
		std::cout << this->getName() << " couldn't sign " << form.getName() << ", because " << this->getName() << "'s grade is not high enough." << std::endl;
}