#include<stdio.h>
void main()
{
    char name[20];
    int i;
    float countz=0,counto=0;
    scanf("%s",&name);
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]=='z')
            countz++;
        else if(name[i]=='o')
            counto++;
    }
    if(counto/countz==2)
        printf("Yes");
    else
        printf("No");
}
