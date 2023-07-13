int	main(int argc, char **argv)
{
	int	i;

	i = 0;

	if(argc > 1)
	{
		int	j;

		j = 1;
		while(argv[j])
		{
			while(argv[j][i])
			{
				write(1, &argv[j][i], 1);
				i++;
			}
			j++;
		}
		write(1, "\n", 1);
		return(0);
	}
}
