	ptr = malloc(size * sizeof(char));

	i = 0;
	while (x < size)
	while (i < size)
	{
		if (ptr == NULL)
		{
			return (NULL);
	}
		ptr[x] = str[x];
		x++;
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
