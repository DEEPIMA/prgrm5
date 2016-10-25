#include<stdio.h>
int main()
{ 
    int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n2 && n1>n3) 
    { 
    printf("%d is an largest num:",n1);
    }
   
    else if(n2>n3)
     { 
    printf("%d is an largest num:",n2);
    }
   
   else
      { 
    printf("%d is an largest num:",n3);
    }
    
    return 0;
}
