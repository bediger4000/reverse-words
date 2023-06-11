#include <stdio.h>
#include <string.h>

int
main(int ac, char **av)
{
	char *original, *copy;
	int i, j, max;

	original = av[1];
	copy = strdup(original); // in case av[i] is not writable

	printf("Original string: \"%s\"\n", original);

	// reverse the entire string
	for (i = 0, j = strlen(copy) - 1; i < j; i++, j--) {
		char tmp = copy[i];
		copy[i] = copy[j];
		copy[j] = tmp;
	}

	printf("Reversed string: \"%s\"\n", copy);

	// reverse individual space-separated words
	max = strlen(copy);
	for (i = 0; i < max; ) {
		int itmp, jtmp;
		// find end of word that begins at index i
		for (j = i; copy[j] != ' ' && j < max; j++)
			;
		jtmp = j - 1;
		for (itmp = i; itmp < jtmp; itmp++, jtmp--) {
			char tmp = copy[itmp];
			copy[itmp] = copy[jtmp];
			copy[jtmp] = tmp;
		}
		i = j+1; // skip space
	}

	printf("Reversed string: \"%s\"\n", copy);

	return 0;
}
