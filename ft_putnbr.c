 #include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb);
{
	if()
	{
		ft_putchar('-');
		ft_putnbr(-nb);

	}
  else if (nb > 9)
  {
	ft_putnbr(nb /10); // 1
	ft_putnbr(nb %10); // 1
  }
	else
	{
		ft_putchar(nb + '0');
	}
}
int main ()
{
	ft_putnbr(13);
}