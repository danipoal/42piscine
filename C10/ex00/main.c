/*
 *  ft_display_file by danipoal <18/11/2024>
 *      Function that outputs the content of the file
 *      passed by parameters
 *      Makefile: Its only one file so does not create 
 *      .o files and no need to clean
*/

#include <unistd.h>
#include <fcntl.h>

int ft_display_file(char *url)
{
    int fd;
    char buffer[1024];
    int readed_bytes;
    int i;

    fd = open(url, O_RDONLY);
    if (fd < 0)
        return (0);
    readed_bytes = read(fd, buffer, 1024);
    if (readed_bytes < 0)
        return (0);
    buffer[readed_bytes] = '\0';
    i = 0;
    while (i <= readed_bytes)
        write(1, &buffer[i++], 1);
    return (1);
}

int main(int ac, char **av)
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
    }
    return (0);
}

