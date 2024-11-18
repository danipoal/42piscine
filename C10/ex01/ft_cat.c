/*
 *
 *
 *
 *
 */

#include <unistd.h>
#include <fcntl.h>


int	read_file()
{


}

nt main(int ac, char **av)
{
	if (ac == 1)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	else if (ac > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	else if(ac == 2)
	{
	if (!ft_display_file(av[1]))
	{
		write(1, "Cannot read file.\n", 18);
		return (1);
	}
	return (0);
}


