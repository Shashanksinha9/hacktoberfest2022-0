#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   char a[100],b[100];
   int i,l;
   
   cout<<"Enter String : ";
   gets(a);
   
  for(i=0; a[i]!=NULL; i++)
  {
  	  b[i] = a[i];
  }
   
   strrev(b);
   
   cout<<b<<endl;
   
   if(strcmp(a,b) == 0)
   {
   	  cout<<"\nPalindrome";
   }
   else
   {
   	  cout<<"\nnot Palindrome";
   }
   	
   	
	
}
