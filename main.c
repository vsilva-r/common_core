#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <bsd/string.h> // compile with flag -lbsd 

int main()
{
	void	*s = calloc(9, 4);
	void	*r = calloc (9, 4);
	ft_memset(s, 'b', 9);
	printf("%s memset OK!\n", (char *)ft_memset(s, 'a', 4));
	ft_putnbr_fd(INT_MIN, 1); printf(" putnbr_fd OK!\n");
	printf("%s strchr OK!\n", ft_strchr((char *)s, 'b'));
	char	*dup = ft_strdup((char *)s);
	printf("%s strdup OK!\n", dup);
	printf("%zu, %s strlcat OK!\n", ft_strlcat(dup, s, 11), dup);
	printf("%d strncmp OK!", ft_strncmp(s, dup, 4));
	printf("%s strnstr OK!", ft_strnstr("abbb", s, 3));
	printf("%s memcpy OK!", (char *)ft_memcpy(r, s, 3));
	
	printf("%s memmove OK!", (char *)ft_memmove(r, r, 4));
	char	cpy[10];
	printf("%zu, %s strlcpy OK!", ft_strlcpy(cpy, dup, 10), cpy);
	printf("%d, memcmp OK!", ft_memcmp(s, r, 4));
	printf("%s, strrchr OK!", ft_strrchr(r, 'a'));
}

/*
void	ft_bzero(void *s, size_t n)
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memset(void *s, int c, size_t n);
void 	ft_putnbr_fd(int n, int fd);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s)
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int	ft_strncmp(char *s1, char *s2, int n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strrchr(const char *s, int c);
*/

