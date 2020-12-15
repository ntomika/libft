/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshellie <sshellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 19:35:25 by sshellie          #+#    #+#             */
/*   Updated: 2020/11/24 23:07:41 by ntomika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	void	ft_clean(char **s)
{
	int	i;

	i = 0;
	while (s[i] != NULL)
	{
		free(s[i]);
		i++;
	}
	free(s[i]);
	free(s);
}

static	int		ft_nb_strs(char const *s, char c)
{
	int i;
	int nb_strs;

	i = 0;
	nb_strs = 0;
	while (s[i])
	{
		if ((s[i] != c) && ((s[i + 1] == c) || s[i + 1] == '\0'))
			nb_strs++;
		i++;
	}
	return (nb_strs);
}

static char		*ft_nb_word(char const *s, char c, int i)
{
	char		*mas;
	int			len;
	int			j;

	len = 0;
	j = 0;
	while ((s[i - 1] != c) && (i))
	{
		len++;
		i--;
	}
	mas = (char *)malloc(sizeof(char) * (len + 1));
	if (mas == NULL)
		return (NULL);
	while (len-- != 0)
		mas[j++] = s[i++];
	mas[j] = '\0';
	return (mas);
}

static	char	**ft_result(char **mas, char const *s, char c, int nb_strs)
{
	int			word;
	int			i;

	word = 0;
	i = 0;
	while ((word != nb_strs) && (s[i++]))
	{
		if ((s[i - 1] != c) && (s[i] == '\0' || s[i] == c))
		{
			mas[word] = ft_nb_word(s, c, i);
			if (mas[word] == NULL)
			{
				ft_clean(mas);
				return (NULL);
			}
			word++;
		}
	}
	mas[word] = NULL;
	return (mas);
}

char			**ft_split(char const *s, char c)
{
	char		**mas;
	int			nb_strs;

	if (s == NULL)
		return (NULL);
	nb_strs = ft_nb_strs(s, c);
	mas = (char **)malloc(sizeof(char*) * (nb_strs + 1));
	if (mas == NULL)
		return (NULL);
	mas = ft_result(mas, s, c, nb_strs);
	return (mas);
}

int main()
{
	char *text = "  wfjeifjea efgjsvfeij f gefs";
	char **words = ft_split(text, ' ');

	while (*words)
	{
		printf("%s\n", *words);
		words++;
	}
	return (0);
}
