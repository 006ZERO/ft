#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static void	free_split(char **arr, int i)
{
	while (i >= 0)
	{
		free(arr[i]);
		i--;
	}
	free(arr);
}

static char	*next_word(char const *s, char c, size_t *end)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	*end = i;
	return (ft_substr(s, 0, i));
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words;
	int		i;
	size_t	end;

	words = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		result[i] = next_word(s, c, &end);
		if (result[i] == NULL)
		{
			free_split(result, i - 1);
			return (NULL);
		}
		s += end;
		i++;
	}
	result[i] = NULL;
	return (result);
}
