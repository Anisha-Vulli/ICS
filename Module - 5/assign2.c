#include <stdio.h>


int strrindex(char s[], char t[])
{
    int i, j, k, rindex;
    
    rindex = -1;
    for (i = 0; s[i] != '\0'; i++) {
        /* check if t starts at this index in s */
        for (j=i, k=0; t[k] != '\0' && s[j] == t[k]; j++, k++);
        if (k > 0 && t[k] == '\0')  
            rindex = i;             
    }
    return rindex;
}

int main(int argc, char const *argv[])
{
	char s[100], t[100];
	printf("Enter the string:\n");
	scanf("%s", s);

	printf("Enter the pattren that need to be found\n");
	scanf("%s", t);
	int rindex = strrindex(s,t);
	printf("%d\n", rindex);
	return 0;
}