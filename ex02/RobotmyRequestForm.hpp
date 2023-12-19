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

#ifndef ROBOTMYREQUESTFORM_HPP
#define ROBOTMYREQUESTFORM_HPP

#include <iostream>
#include <exception>

class AForm;
class   RobotmyRequestForm
{
    private:

    public:
        RobotmyRequestForm();
        ~RobotmyRequestForm();
        RobotmyRequestForm(RobotmyRequestForm const &original);
        RobotmyRequestForm  &operator=(RobotmyRequestForm const &original);

        RobotmyRequestForm(const std::string Name, int grade);

};

std::ostream    &operator<<(std::ostream &out, RobotmyRequestForm &RobotmyRequestForm);

#endif