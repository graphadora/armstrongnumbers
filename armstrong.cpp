#include <iostream>
#include <cmath>
#include<stdlib.h>
using namespace std;
int main()
{
  system("clear");
  int num1, i, num, digit, sum, count,j,m;

  cout << "Enter the max value to find all the numbers until the value: ";
  cin >> num1; 
  
  
  cout << "Armstrong numbers between 1 to " << num1 << " are: " << endl;
 
  
  for(i = 1; i <= num1; i++)
   {
   
    count = 0;
         
    num = i;

    while(num > 0) {
      count++;
      num /= 10;
    }
 
    sum = 0;
    num = i;
     
    while(num > 0)
    {
      digit = num % 10;

      m=1;
      for(j=1;j<=count;j++)
          m*=digit;

      sum = sum + m;
      num /= 10;
    }

    
    if(sum == i) 
    {
      cout << i <<endl;
    }
  }

  return 0;
}