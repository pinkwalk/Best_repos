#define CRT_SECURE_NO_WARNINGS
//--------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <syscalls.h>
#include <ctype.h>
//--------------------------------------------
/*#include <test_file1.txt>
#include <test_file2.txt>*/
//--------------------------------------------
/*place for prototypes*/
//--------------------------------------------
int main(int argc, char const *argv[])
{
	FILE *fp1 = NULL, *fp2 = NULL;
	fp1 = fopen("test_file1.txt", "r");
	fp2 = fopen("test_file2.txt", "r");
	open_check(fp1);
	open_check(fp2);
	char file_content1[filesize(fp1)];
	char file_content2[filesize(fp2)];
	return 0;
}
//---------------------------------------------
int filesize(FILE *fp)
{
	FILE *fp;
	int size;
	fp = fopen("test_file1.txt", "r");
	size = fseek(fp, 0L, SEEK_END);
	return size;
}
//---------------------------------------------
int open_check(FILE *fp)
{
	if(*fp == NULL)
	{
		printf("Error opening file\n");
		getch();
		exit(ERROR_FILE_OPEN);
	}
	return 0;
}

char fullarray(FILE *fp, char *array[])
{
	int noSpace = 0;
	for (int i = 0; *array[i] != EOF; ++i)
	{
		fscanf(*fp, "%s", *array[i]);
		if (isblank(*array[i]))
		{
			++noSpace;
		}
	}
	int noWords = noSpace + 1;
	for (size_t i = 0; i < sizeof(*array[i]); i++)
	{
		if (isgraph(i))
		{
			strcat(word, *array[i]);
		}
		else
			{
				words[noWord] = word;
				word = "";
				noWord++;
			}
}