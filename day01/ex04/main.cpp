#include <iostream>
#include <fstream>

int		errorConsol(std::string errorName){
	std::cout<<"Error: "<<errorName<<std::endl;
	return (1);
}

std::string replaceLine(std::string line, std::string s1, std::string s2)
{
	std::string::size_type inxFind;
	while ((inxFind = line.find(s1)) != std::string::npos)
	{
		line.erase(inxFind, s1.length());
		line.insert(inxFind, s2);
	}
	return (line);
}

int		main(int argc, char *argv[]) {
	if (argc != 4)
		return (errorConsol("arguments"));
	std::string filename(argv[1]), s1(argv[2]), s2(argv[3]), line;
	std::ifstream infile(filename);
	std::ofstream outfile(filename + ".replace");
	if (!infile.is_open())
		return (errorConsol("open inFile"));
	if (!outfile.is_open())
		return (errorConsol("open outFile"));
	while ( getline (infile,line) )
	{
		line = replaceLine(line, s1, s2);
		outfile<<line<<std::endl;
	}
	infile.close();
	outfile.close();
	return 0;
}
