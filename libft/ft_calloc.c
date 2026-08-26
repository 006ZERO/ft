#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb != 0 && size != 0 && nmemb > (size_t)-1 / size)
		return (NULL);
	if (nmemb == 0 || size == 0)
		ptr = malloc(1);
	else
		ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		ft_memset(ptr, 0, 1);
	else
		ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}
