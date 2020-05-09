#include <fcntl.h>
#include <unistd.h>

void
	ft_putstr_non_printable(unsigned char *str)
{
	int i;
	char j;
	char u;
	char x;

	x = '\\';
	i = 0;
	while (str[i] !='\0')
	{
		if ((str[i] != '\0' && str[i] < 32) || str[i] == 127)
		{
			j = str[i] / 16;
			u = str[i] % 16;
			if (u > 9)
				u += 87;
			else
				u += 48;
			j += 48;
			write(1, &x, 1);
			write(1, &j, 1);
			write(1, &u, 1);
		}
		else
			write(1, &str[i], 1);
	i++;
	}
}

int                main(void)
{
    int fd = open("file.txt", O_RDONLY);
    unsigned char buf[1024 + 1] = { 0 };
    read(fd, buf, sizeof(buf) - 1);

    ft_putstr_non_printable(buf);
}
