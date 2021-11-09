#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	unsigned int i;

	i = 0;
	ptr = (void*)malloc(count * size);
	if (ptr == 0)
		return (0);

	else
		while(i < count)
		{
			*(char*)(ptr + i) = 0;
			i++;
		}
		return (ptr);
}

 /*int main() {
        printf("%d", ft_calloc(3, 3));
		//free(ptr);
        return 0;
    }*/