#include <iostream>

using namespace std;

int checkPrime(int n) {
   bool isPrime = true;

   for(int i = 2; i <= n/2; i++) {
      if (n%i == 0)
      {
         isPrime = false;
         break;
      }
   }
   return isPrime;
}

int main() {
   bool isPrime;
   int input;
   cout<<"Enter a number:";
   cin>>input;
   for(int n = 2; n < input; n++)
   {
       if(checkPrime(n) == true)
          cout<<n<<" ";
   }
   return 0;
}