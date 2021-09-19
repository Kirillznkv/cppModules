#include "ShrubberyCreationForm.hpp"

/*---Constructors-and-Destructor---*/
ShrubberyCreationForm::~ShrubberyCreationForm(void){}
ShrubberyCreationForm::ShrubberyCreationForm(std::string name):
		Form(name, 145, 137){}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy):
		Form(copy){}

/*---Functions---*/
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	Form::execute(executor);
	std::ofstream outFile(getName() + "__shrubbery");
	outFile<<"          .     .  .      +     .      .          .\n\
     .       .      .     #       .           .\n\
        .      .         ###            .      .      .\n\
      .      .   \"#:. .:##\"##:. .:#\"  .      .\n\
          .      . \"####\"###\"####\"  .\n\
       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n\
  .             \"#########\"#########\"        .        .\n\
        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n\
     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n\
                .\"##\"#####\"#####\"##\"           .      .\n\
    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n\
      .     \"#######\"##\"#####\"##\"#######\"      .     .\n\
    .    .     \"#####\"\"#######\"\"#####\"    .      .\n\
            .     \"      000      \"    .     .\n\
       .         .   .   000     .        .       .\n\
.. .. ..................O000O........................ ......";
}