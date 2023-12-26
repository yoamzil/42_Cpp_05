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
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main(void)
{
	try
	{
		Form *aform;
		Bureaucrat bureaucrat("Bureaucrat", 2);
		ShrubberyCreationForm shrubberycreationform;
		RobotomyRequestForm robotomyrequestform;
		PresidentialPardonForm presidentialpardonform;
		
		aform = &shrubberycreationform;
		aform->beSigned(bureaucrat);
		aform->execute(bureaucrat);

		aform = &robotomyrequestform;
		aform->beSigned(bureaucrat);
		aform->execute(bureaucrat);

		aform = &presidentialpardonform;
		aform->beSigned(bureaucrat);
		aform->execute(bureaucrat);
		bureaucrat.executeForm(shrubberycreationform);
		bureaucrat.executeForm(robotomyrequestform);
		bureaucrat.executeForm(presidentialpardonform);

		std::cout << shrubberycreationform << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}
