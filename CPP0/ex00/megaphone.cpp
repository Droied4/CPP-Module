#include <iostream>
#include <cstring>

int main (int ac, char *av[]) 
{
	unsigned int i(1);
	unsigned int j(0);
	if (ac >= 2)
	{
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				std::cout << (char)toupper(av[i][j]);
				j++;
			}
			i++;
		}
	}
	else 
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";	
	std::cout << "\n";
	return (0);
}
