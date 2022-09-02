#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] = "bisa karena belajar";
  char * pch;
  printf ("Mencari karakter 'a' didalam kalimat \"%s\"...\n",str);
  pch=strchr(str,'a');
  while (pch!=NULL)
  {
    printf ("ditemukan dikarakter %d\n",pch-str+1);
    pch=strchr(pch+1,'a');
  }
  return 0;
}
