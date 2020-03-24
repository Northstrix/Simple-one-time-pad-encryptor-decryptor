#include <iostream>
using namespace std; 
  
int OTP(int p, int k) 
{ 
   cout << "Simple one-time pad encryptor/decryptor"; 
   cout << '\n'; 
   cout << "Written by Maxim Bortnikov";
   cout << '\n'; 
   cout << "THE SOFTWARE IS PROVIDED <<AS IS>>, WITHOUT WARRANTY OF ANY KIND!";
   cout << '\n'; 
   cout << "You can get the source code here: https://github.com/Northstrix/Simple-one-time-pad-encryptor-decryptor ";
   cout << '\n'; 
   cout << '\n'; 
   cout << "Enter the plaintext (hex value): "; 
   cin >> hex >> p;
   cout << "Enter the key (hex value): "; 
   cin >> hex >> k;
   cout << "Result: "; 
   return (p | k) & (~p | ~k); 
} 

int main() 
{ 
   int p, k; 
   cout << hex << OTP(p, k); 
   return 0;  
} 


