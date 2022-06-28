// Hoppock, Zachary
// sumLoop.cpp
// Oct. 10, 2020
// Print the sum of all even numbers between 2 and 100 (inclusive)
// Version # 1
#include <iostream>

using namespace std;
int main()
{
int sum = 0;
for (int i = 0; i <= 100; i = i + 2)
  sum = sum + i;
cout << "The sum of all even numbers between 2 and 100 is " << sum;
return 0;
}