#include <unistd.h>

char	*ft_strcat(char *dest, char *src);



char dec(char *argv)
{
  char decenas[3];
  char dero[2] = "0";
  int size;
  int i;

  size = 3;
  i = 0;
  while (i <= size)
  {
    if (i == 1)
    {
      decenas[0] = argv[i];
      decenas[1] = '\0';
    }
    i++;
  }
  ft_strcat(decenas, dero);

  return(*decenas);
}

char cent(char *argv)
{
  char centenas[4];
  char cero[3] = "00";
  int size;
  int i;

  size = 3;
  i = 0;
  while (i <= size)
  {
      if (i == 0)
      {
        centenas[0] = argv[i];
        centenas[1] = '\0';
      }
    i++;
  }
  ft_strcat(centenas, cero);

  return(*centenas);
}
