#include <iostream>

int		main(int argc, char **argv)
{
	if (argc < 2)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
	else
	{
		for (int i = 1; i < argc; ++i)
		{
			for (int j = 0; argv[i][j] != '\0'; ++j)
			{
				if (argv[i][j] < 'a' || argv[i][j] > 'z')
					std::cout<<argv[i][j];
				else
					std::cout<<(char)(argv[i][j] + 'A' - 'a');
			}
		}
		std::cout<<std::endl;
	}
	return (0);
}