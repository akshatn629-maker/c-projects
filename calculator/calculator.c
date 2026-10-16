#include <stdio.h>
#define BOLD "\033[1m"
#define CYAN "\033[36m"
#define RESET "\033[0m"
int main(){
    printf(BOLD CYAN " -- THIS IS CALCULATOR  --\n\n"
        "enter the 2 no. with the operation you wanna do:\n\n" RESET);
    float a,b;
    char op;
    printf("enter a:"); scanf("%f",&a);
    printf("\nenter the  operation you want :"); scanf(" %c",&op);
    printf("\nenter b:"); scanf("%f",&b);

    switch(op)
{case '+': printf("\n\nresult=%.2f\n\n\n",a+b);break;
    case '-': printf("\n\nresult=%.2f\n\n\n",a-b);break;
        case '*': printf("\n\nresult=%.2f\n\n\n",a*b);break;
            case '/': if(b!=0)printf("\n\nresult=%.2f\n\n\n", a/b);  else printf("\ncannot be divided by zero");
            break;
        default:printf("\n\ninvalid operation\n\n");}
            return 0;}

               






