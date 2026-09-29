#include <stdio.h>
int main() 
{
  char a,b[50],c[100];
  scanf("%c",&a);
  printf("%c\n",a);
  scanf("%s",b);
  printf("%s\n",b);
  getchar();
  fgets(c,sizeof(c),stdin);
  printf("%s",c);
  
}
