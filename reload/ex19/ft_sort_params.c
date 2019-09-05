/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 19:03:02 by qlaurenc          #+#    #+#             */
/*   Updated: 2019/08/07 19:18:49 by qlaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_print(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i <= argc - 1)
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*buf;

	i = 1;
	while (i <= argc - 1)
	{
		j = 1;
		while (j <= argc - i - 1)
		{
			if (ft_strcmp(argv[j + 1], argv[j]) < 0)
			{
				buf = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = buf;
			}
			j++;
		}
		i++;
	}
	ft_print(argc, argv);
	return (0);
}
