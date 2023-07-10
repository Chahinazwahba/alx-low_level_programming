#include "main.h"

/**
 * create_file - a function that creates a file and writes a string to it
 *
 * @filename: name of file to create
 * @text_content: string to write to file
 *
 * Return: 1 on success OR -1 on faliure
 */
int create_file(const char *filename, char *text_content)
{
  int file, write_status, words;

  /* Check if filename is present. */
  if (filename == NULL) {
    return -1;
  }

  /* Open file by creating it and if it exists, truncate it to 0. */
  file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
  if (file == -1) {
    /* Check if file creation was a success. */
    return -1;
  }

  /* Write content to file if it is not NULL. */
  if (text_content) {
    /* Find number of words in string. */
    for (words = 0; text_content[words] != '\0'; words++) {
    }

    /* Write to file. */
    write_status = write(file, text_content, words);
    if (write_status == -1) {
      /* Check if write was a success. */
      return -1;
    }
  }

  /* Close file. */
  close(file);
  return 1;
}
