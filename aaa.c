#include<stdio.h>
#include<stdlib.h>

void multiply(int m,int *a, int n){
  int i;
  for( i=0 ;i<n;i++){
    *(a+i)=*(a+i)*m;
  }
}
int main (void){
  int i,n,m;
  int *ptr;

  scanf("%d",&n);
  scanf("%d",&m);
  ptr=(int *)malloc(sizeof(int)*n);
  for(i=0;i<n;i++){
    scanf("%d",ptr+i);
  }
  multiply(m,ptr,n);
  for(i=0;i<n;i++){
    printf("%d\n",ptr[i]);
  }
  free(ptr);
return 0;
}