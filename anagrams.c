/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int find_anagrams(char[],char[]);
int main()
{
    char array1[100],array2[100],s;
    int flag;
    printf("enter the string\n");
    gets (array1);
    printf("enter another string\n");
    gets (array2);
    flag=find_anagrams(array1,array2);
    if(flag==1)
    printf(""%s"and"%s"are anagrams\n",array1,array2);
    else
    printf(""%s"and"%s" are not anagrams\n",array1,array2);
    return 0;
}
int find_anagrams(char array1[],char array2[])
{
    int num1[26]={0},num2[26]={0},i=0;
    while(array1[i]!='\0')
    {
    num1[array1[i]-'a']++;
    i++;
}
i=0;
while(array2[i]!='\0')
{
    num2[array2[i]-'a']++;
    i++;
}
for(i=0;i<26;i++)
{
    if(num1[i]!=num2[i])
    return 0;
}
return 1;
    
}

