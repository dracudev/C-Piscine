/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_file_reading.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 15:22:32 by antandre          #+#    #+#             */
/*   Updated: 2024/04/07 18:36:51 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char    *ft_load_file (char *dict, unsigned int count)
{
  int       fd;
  ssize_t   nr_bytes;
  char  *buf;

  buf = (char *)malloc(sizeof(char) * 1092 + 1);
  if (!buf)
    return (0);
  fd = open(dict, O_RDONLY);
  if (fd == -1){
      write (1, "Error opening file\n", 19);
      free (buf);
      return (0);
  }

 nr_bytes = read(fd, buf, count);
 if (nr_bytes == -1){
     write (1, "Error reading file\n", 19);
     free (buf);
     return (0);
 }

  if (nr_bytes == 0)
  {
    write(1, "Empty file\n", 11);
    free(buf);
    close(fd);
    return (0);
  }
  buf[nr_bytes] = '\0';
  close(fd);
  return (buf);
}

int main(void)
{
  char *file_path = "numbers.dict";
  int char_count;
  char *file_content;

  char_count = 691;

  if (char_count == 0){
        write (1, "Error during caracter counting", 30);
        return 1;
  }
    printf ("Number of characters in the file: %u\n", char_count);

    file_content = ft_load_file(file_path, char_count);
    if (file_content == NULL){
        write (1, "Error when loading the file content\n", 35);
        return 1;
    }
   // printf ("File content: \n%s\n", file_content);
    free(file_content);
    return (0);
}
