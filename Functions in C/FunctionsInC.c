#include <stdio.h>
int max_of_four(int a, int b, int c, int d);

int main()
 {
     int a,b,c,d;
     //scanf("%d %d %d %d",&a,&b,&c,&d);
     scanf("%d",&a);
     scanf("%d",&b);
     scanf("%d",&c);
     scanf("%d",&d);
     int r=max_of_four(a,b, c,d);
     printf("%d",r);
    return 0;
}

int max_of_four(int a, int b, int c, int d)
{
  if(a>b){
      if(a>c){
          if(a>d){
              return a;
          }else{
              return d;
          }
      }else{
          if(c>d)
          {
              return c;
          }
          else{
              return d;
          }
      }
  }else{
      if(b>c){
          if(b>d){
              return b;
          }
          else{
              return d;
          }
      }else{
          if(c>d){
              return c;
          }
          else{
              return d;
          }
      }
  }
}
