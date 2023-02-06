#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text
 * @filename: the file
 * @text_content: string in the file
 * Description: Function that append a file
 * Return: -1 or 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp = 0, w = -1;

	if (filename)
	{
		for (w = 0; text_content && text_content[w]; w++)
			;
		fp = open(filename, O_WRONLY | O_APPEND);

		if (text_content && fp != -1)
		{
			w = write(fp, text_content, w);
			close(fp);
		}
		else
			if (text_content)
				w = -1;
	}

	return (w != -1 ? 1 : w);
}
