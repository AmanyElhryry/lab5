#include <stdio.h>
#include <stdlib.h>
void find (int x,int y,int z,int l);
int main()
{
    int x,y,z,l;
    printf("Enter Four Number ");
    scanf("%d%d%d%d",&x,&y,&z,&l);
   find(x,y,z,l);

    return 0;
}
void find (int x,int y,int z,int l){
    int max , min ;
if(x>y && x>z &&x>l)
    max=x;
else if(y>z&&y>l)
     max=y;
else if(z>l)
     max=z;
else
   max=l;

  if(x<y&&x<z&&x<l)
    min=x;
else if(y<z&&y<l)
     min=y;
else if(z<l)
     min=z;
else
   min=l;

   printf("Maximum Number: %d\n",max);
   printf("Maximum Number: %d\n",min);
}
