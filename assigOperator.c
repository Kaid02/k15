/*
 Student Name : Kabir D Shrestha
 Subject : Programming Fundamental
 Lab No. : 08
 Program : Write a C program to use of Assignment operation.
 Date : 2016-10-21
 */
 #include<stdio.h>
 int main(){
	 int a,b;
	 
	 printf("Enter the first integer:\n");
	 scanf("%d",&a);
	 
	 printf("Enter the second integer:\n");
	 scanf("%d",&b);
	 
	 printf("\nUse of '+=' operator=%d\n",a+=b);
	 printf("\nUse of '-=' operator=%d\n",a-=b);
	 printf("\nUse of '*=' operator=%d\n",a*=b);
	 printf("\nUse of '/=' operator=%d\n",a/=b);
	 printf("\nUse of '%=' operator=%d\n",a%=b);
	 printf("\nUse of '=' operator=%d\n",a=b);
	 
	 return 0;
 }
