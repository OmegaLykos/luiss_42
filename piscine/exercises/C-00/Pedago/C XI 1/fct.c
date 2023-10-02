int fct(int *tab, int size)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (i < size)
	{
		if (tab[i] == 0)
			count++;
		i++;
	}
	return (count);
}
