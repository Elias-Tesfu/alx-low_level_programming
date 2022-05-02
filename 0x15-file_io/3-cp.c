#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include "main.h"

/**
 * main - copy one file to another
 * @argc: count arg
 * @argv: vector arg
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file1, file2
