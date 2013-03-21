/* Virtual Tomasz K³oczko in C
 * Author: Bartosz 'shadzik' ¦wi±tek (shadzik@pld-linux.org)
 * License: Do what ya want to, as long as you're an PLD Deviloper.
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int los(void);  // Beautiful ANSI C declaration ;)

/*
 * Isn't it love ? The main(); function
*/

int main(void)
{
  char ch,str[1000000],temp;
  int i=0;
  while((ch = getchar()) != '\n')
  {
      str[i]=ch;
      i++;
  }
  for(i=0;i<strlen(str);i++)
  {
    if(i!=0)
    {
      if((i%los()==0) && (isalpha(str[i])) && (isalpha(str[i+1])))
      {
        temp=str[i];
        str[i]=str[i+1];
        str[i+1]=temp;
      }
    }
    putchar(str[i]);
  }
  printf("\n");
  return 0;
}

/*
 * Choose a random number from 0-9
*/

int los(void)
{
  srand(time(0));
  int i;
  i = rand()%10;
// To get this shit working uncomment the lines beneath
// it should help getting smaller numbers but actually it just sucks
  //if(i>6)
    //i = i/2;
  return i;
}
