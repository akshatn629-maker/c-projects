#include<stdio.h> 
int main (){
    printf("this is a time converter\n");

    int a,hour,min;
    int sec;
    printf("\n\nenter the time in seconds:");
    scanf("%d",&a);

    hour=a/(60*60);
    printf("%d hour ",hour);
    min=(a%3600)/60;
    
    printf("%d min  ",min);
    sec= (a%60);
   
    printf("%d sec",sec);
    return 0;
}