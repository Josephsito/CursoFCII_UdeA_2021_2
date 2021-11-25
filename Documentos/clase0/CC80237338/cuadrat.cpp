#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
{
  float a,b,c;
  float disc;
  double x1,x2;
  cout<<"\n Digite los coeficientes de ax^2+bx+c\n";
 
  cout<<"\n a=";
  cin>>a;
  cout<<"\n b=";
  cin>>b;
  cout<<"\n c=";
  cin>>c;
 
  
  disc=b*b-4*a*c;
  if (disc==0)
  {
    x1=-b/(2*a);
    cout<<"\nRaiz repetida:\n "<<x1<<endl;      
  }
  else if(disc>0)
    {
      x1 = (-b+sqrt(disc))/(2*a);
      x2 = (-b-sqrt(disc))/(2*a);
      cout<<"\nLas raices son reales:\n"<<x1<<"y"<<x2<<"\n";
    }
  else if (disc<0)
    {
    cout<<"\nLas raices son complejas\n";
    disc=abs(disc);
    double re=-b/(2*a);
    double im=sqrt(abs(disc))/(2*a);
    cout<<"\n"<<re<<"+"<<im<<"i"<<"\n";
    cout<<"\n"<<re<<"-"<<im<<"i"<<"\n";
    }
  return 0;
}
