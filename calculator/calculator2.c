#include<stdio.h>
#include<math.h>
int main(){
  
    char op;  
    int i;
    float a,b; 
printf("enter 1= square root,cude root , factorial\n\n "); 
printf("enter 2= normal + - / *\n\n"); 
printf("enter choise:"); 

scanf("%d",&i);

if(i==1)
{ printf("\nenter number:"); 
scanf("%f", &a);
printf("\nsquare root= %.3f\n", sqrt(a));
printf("cuberoot=%.3f\n",cbrt(a));
}

 
else if(i==2) {



   printf("enter a:"); scanf("%f",&a);

    printf("\nenter the  operation you want :"); scanf(" %c",&op);

    printf("\nenter b:"); scanf("%f",&b);

       switch(op)
          {case '+': printf("\n\nresult=%.2f\n\n\n",a+b);break;
             case '-': printf("\n\nresult=%.2f\n\n\n",a-b);break;
               case '*': printf("\n\nresult=%.2f\n\n\n",a*b);break;
                  case '/': if(b!=0)printf("\n\nresult=%.2f\n\n\n", a/b);  else printf("\ncannot be divided by zero");
                     break;
                        default : printf("\n\ninvalid operation\n\n");}}
return 0;}
