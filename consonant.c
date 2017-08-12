#include<stdio.h>
int main()
{
char ch;
printf("Enter the alphabet");
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{
printf("%c is an vowel",ch);
}
else
{
printf("%c is an consonant",ch);
}
}
