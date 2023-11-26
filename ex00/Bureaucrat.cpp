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

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string Name, int Grade) : name(Name)
{
    std::cout << "Bureaucrat parameterized constructor called" << std::endl;
    if (Grade < 1)
        throw GradeTooHighException();
    else if (Grade > 150)
        throw GradeTooLowException();
    grade = Grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &original)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
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

std::ostream    &operator<<(std::ostream &out, Bureaucrat &original)
{
    out << original.getName() << ", bureaucrat grade " << original.getGrade();
    return (out);
}

std::exception    Bureaucrat::GradeTooHighException()
{
    std::cout << "Grade Too High!" << std::endl;
    return std::exception();
}

std::exception    Bureaucrat::GradeTooLowException()
{
    std::cout << "Grade Too Low!" << std::endl;
    return std::exception();
}

std::string Bureaucrat::getName()
{
    return (name);
}

int Bureaucrat::getGrade()
{
    return (grade);
}

void    Bureaucrat::incrementGrade()
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    grade -= 1;
}

void    Bureaucrat::decrementGrade()
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    grade += 1;
}
