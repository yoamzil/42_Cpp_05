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

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", false, 72, 45)
{
	// std::cout << "RobotomyRequestForm constructor called" << std::endl;
	this->target = "Default_target";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    // std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &original)
{
	// std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = original;
}

RobotomyRequestForm  &RobotomyRequestForm::operator=(RobotomyRequestForm const &original)
{
	if (this != &original)
	{
		this->target = original.target;
	}
	return (*this);
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (this->target);
}

RobotomyRequestForm::RobotomyRequestForm(const std::string Target) : AForm(Target ,false, 72, 45)
{
    target = Target;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getIsSigned())
	{
		if (executor.getGrade() <= this->getGradeToExecute())
		{
            std::cout << "*** DRILLING NOISES ***" << std::endl;
            srand(time(nullptr));
            if (rand() % 2 == 0)
            {
                std::cout << this->getTarget() << " has been robotomized successfully." << std::endl;
            }
            else
                std::cout << this->getTarget() << " robotomy failed..." << std::endl;
		}
		else
        {
            throw AForm::FormNotExecutedException();
        }
	}
	else
        throw AForm::FormNotSignedException();
}
