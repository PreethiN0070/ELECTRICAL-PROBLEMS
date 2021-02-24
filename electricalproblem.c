#include <stdio.h> 
#include <math.h>
int main()
{
  int Vm=400,w=628,fl,Vrms,Irms,Z,R;
  float Im=2.5,pi=3.14,phaseangle=-1.37;
  scanf("%d",&Vm);
  printf("The value of maximum voltage is :%d\n",Vm);
  scanf("%d",&w);
  printf("The value of angular frequency(omega) is :%d\n",w);
  scanf("%f",&pi);
  printf("The value of pi is:%f\n",pi);
  fl=w/(2*pi);
  scanf("%d",&fl);
  printf("the value of frequency is:%d\n",fl); 
  Vrms=Vm/sqrt(2);
  scanf("%d",&Vrms);
  printf("the rms voltage is :%d\n",Vrms);
  return 0;
}