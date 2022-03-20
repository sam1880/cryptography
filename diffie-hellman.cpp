#include<iostream>
#include<math.h>
using namespace std;
 
long long int power(long long int a, long long int b,
                                     long long int P)
{
    if (b == 1)
        return a;
 
    else
        return (((long long int)pow(a, b)) % P);
}
 

int main()
{
    long long int P, G, x, a, y, b, ka, kb;
     
    P = 23; 
    cout<<"\nThe value of p : "<<P;
 
    G = 9; 
   cout<<"\nThe value of g : "<<G;
 
    
    a = 4; 
    cout<<"\nThe private key a for Alice : "<<a;
    x = power(G, a, P);
     
    
    b = 3;
    cout<<"\nThe private key b for Bob : "<<b;
    y = power(G, b, P);
 
    
    ka = power(y, a, P); 
    kb = power(x, b, P); 
     
    cout<<"\nSecret key for the Alice is : "<<ka;
    cout<<"\nSecret Key for the Bob is : "<<kb;
     
    return 0;
}
