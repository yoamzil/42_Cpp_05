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

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

Intern::Intern()
{
	// std::cout << "Intern constructor called" << std::endl;
}

Intern::~Intern()
{
    // std::cout << "Intern destructor called" << std::endl;
}

Intern::Intern(Intern const &original)
{
	// std::cout << "Intern copy constructor called" << std::endl;
	*this = original;
}

Intern  &Intern::operator=(Intern const &original)
{
	if (this != &original)
	{
		// this->target = original.target;
	}
	return (*this);
}

AForm	*Intern::makeForm(std::string const &forName, std::string const &target)
{
    std::string     array[] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    int             i = 0;
    
    while (i < 3)
    {
        if (array[i] == forName)
        {
            break;
        }
        i++;
    }
    switch (i)
    {
        case 0:
            std::cout << "Intern creates " << forName<< std::endl;
            return (new PresidentialPardonForm(target));
        case 1:
            std::cout << "Intern creates " << forName<< std::endl;
            return new RobotomyRequestForm(target);
        case 2:
            std::cout << "Intern creates " << forName<< std::endl;
            return new ShrubberyCreationForm(target);
        default:
            std::cout << "Error: Form " << forName<< " does not exist." << std::endl;
    }
    return (NULL);
}

