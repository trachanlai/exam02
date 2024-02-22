int max(int* tab, unsigned int len) 
{
	if (len == 0)
		return 0;

	int max_value = tab[0];
	unsigned int i = 1;

	while (i < len) {
		if (tab[i] > max_value)
			max_value = tab[i];
		i++;
	}
	return max_value;
}

// #include <stdio.h>
// int main()
// {
// 	int array[] = {1, 2, 10, 4, 5};
// 	printf("%d\n", max(array, 5));
// }