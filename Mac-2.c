#include<stdio.h>
#define Elements 1,\
2,\
3
int main(){
int i,arr[]={Elements};
for (i=0;i<3;i++)
printf("%d",arr[i]);
return 0;
}
