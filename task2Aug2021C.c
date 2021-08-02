#include <stdio.h>
int main()
{
char i;
printf("Enter any character : ");
scanf("%c",&i);
if(i =='a' ||i =='e' || i =='i' || i =='u' || i =='o')printf("it's a vowel");
else if(i =='E'||i =='I' ||i =='U' ||i =='O' ||i =='A')printf("it's a vowel");
else 
printf("\nit's a constent");
return 2;
}