#include<stdio.h>
#include<conio.h>
#include<math.h>

int gcd(int a, int b) {
   int t;
   while(1) {
      t= a%b;
      if(t==0)
      return b;
      a = b;
      b= t;
   }
}
int main() {
   
   double p = 13;
   double q = 11;
   double n=p*q;
   double value;
   double phi= (p-1)*(q-1);
   double e=7;
  
   while(e<phi) {
      value = gcd(e,phi);
      if(value==1)
         break;
      else
         e++;
   }
   
   double d1=1/e;
   double d=fmod(d1,phi);
   double message = 9;
   double c = pow(message,e); 
   double m = pow(c,d);
   c=fmod(c,n);
   m=fmod(m,n);
   printf("Original Message = %lf",message);
   printf("\n""p = %lf",p);
   printf("\n""q = %lf",q);
   printf("\n""n = pq = %lf",n);
   printf("\n""phi = %lf",phi);
   printf("\n""e = %lf",e);
   printf("\n""d = %lf",d);
   printf("\n""Encrypted message = %lf",c);
   printf("\n""Decrypted message = %lf",m);
   return 0;
}