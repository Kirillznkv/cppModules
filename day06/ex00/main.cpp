#include <iostream>

void printAll(double num);
void printExcep(std::string &str);

int	error(std::string strError){
	std::cerr<<"Error: "<<strError<<std::endl;
	return (1);
}

bool isError(std::string &argv, double &res){
	if (argv.size() < 1)
		return (true);
	if(argv.size() == 1 && (argv[0] < '0' || argv[0] > '9')){
		res = static_cast<double>(argv[0]);
		return (false);
	}
	if (argv[argv.size() - 1] == 'f')
		argv.erase(argv.size() - 1, 1);
	bool dot = false;
	for (int i = argv[0] == '-' ? 1 : 0; i < (int)argv.size(); ++i){
		if (argv[i] >= '0' && argv[i] <= '9')
			continue ;
		if (argv[i] == '.' && (i + 1) < (int)argv.size() && !dot)
			dot = true;
		else
			return (true);
	}
	res = stod(argv);
	return (false);
}

bool isExceptionInput(std::string &argv){
	if (argv == "nanf" ||
		argv == "+inff" ||
		argv == "-inff")
		printExcep(argv.erase(argv.size() - 1, 1));
	else if (argv == "nan" || 
			argv == "+inf" ||
			argv == "-inf")
		printExcep(argv);
	else
		return (false);
	return (true);
}

int main(int argc, char* argvChar[]){
	if (argc != 2)
		return error("args");
	std::string argv(argvChar[1]);

	if (isExceptionInput(argv))
		return (0);
	double res;
	if (isError(argv, res))
		return error("input");
	printAll(res);
	return (0);
}