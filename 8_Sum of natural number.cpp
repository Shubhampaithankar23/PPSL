#include <iostream>
using namespace std;
int main() {
int n, sum=0;

cout<<"Enter the positive integer:";
cin>>n;
for (int i=1; i<=n; i++)
sum +=i;
cout<<"the sum of natural number from 1 to " << n << " is:"<< sum <<endl;
  return 0;
}
