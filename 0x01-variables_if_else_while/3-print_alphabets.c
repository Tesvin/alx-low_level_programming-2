#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 *main-Entrypoint
 *
 * *Return:Always0(Success)
 */
intmain(void)
{
	charlow;

	for(low='a';low<='z';low++)
		putchar(low);
	for(low='A';low<='Z';low++)
		putchar(low);
	putchar('\n');

	return(0);
}
