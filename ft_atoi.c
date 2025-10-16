int		ft_atoi(const char *str)
{
	long	res;
	int		sign;
	int		i;

	res = 0;
	sign = 0;
	i = 0;
	while ((str[i] == ' ') || (str[i] <= 19 && str[i] >= 8))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		if (res > res * 10)
			return (sign == -1 ? 0 : -1);
		res = res * 10;
		res += str[i] - '0';
		i++;
	}
	if (sign == -1)
		return ((int)res * sign);
	return ((int)res);
}
