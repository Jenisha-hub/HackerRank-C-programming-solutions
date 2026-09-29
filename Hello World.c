#include <stdio.h>
int main()
{
    printf("Hello, World!\n");
    char a[55];
    fgets(a,sizeof(a),stdin);
    printf("%s",a);
}
