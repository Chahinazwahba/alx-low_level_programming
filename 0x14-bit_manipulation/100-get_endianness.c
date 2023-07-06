/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian
 * 1 if little endian
 */
int get_endianness(void)
{
	int c = 1;
	char *endi = (char *)&c;

	/* little endian */
	if (*endi == 1)
		return (1);

	return (0);
}
