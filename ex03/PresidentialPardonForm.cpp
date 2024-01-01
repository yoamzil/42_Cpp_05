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

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", false, 25, 5)
{
	// std::cout << "PresidentialPardonForm constructor called" << std::endl;
	this->target = "Default_target";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    // std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &original)
{
	// std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = original;
}

PresidentialPardonForm  &PresidentialPardonForm::operator=(PresidentialPardonForm const &original)
{
	if (this != &original)
	{
		this->target = original.target;
	}
	return (*this);
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (this->target);
}

PresidentialPardonForm::PresidentialPardonForm(const std::string Target) : AForm(Target ,false, 25, 5)
{
    target = Target;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->getIsSigned())
	{
		if (executor.getGrade() <= this->getGradeToExecute())
		{
            std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
		}
		else
        {
			throw AForm::FormNotExecutedException();
        }
	}
	else
        throw AForm::FormNotSignedException();
}
