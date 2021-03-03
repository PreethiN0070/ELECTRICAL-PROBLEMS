//An EMF of 400sin(628t) is applied to a series circuit and the resultant current is i=2.5sin(628t-1.37) find the frequency in hertz and phase angle in degrees and parameters of the circuit  
#include <stdio.h> 
#include <math.h>
int main()
{
  int Vm=400,w=628,fl,Z;
  double Im=2.5,pi=3.14,phaseangle=1.37,Vrms,Irms,pf,R,P,S,Xl,L;
  scanf("%d",&Vm);
  printf("The value of maximum voltage is :%dV\n",Vm);
  scanf("%d",&w);
  printf("The value of angular frequency(omega) is :%drad/s\n",w);
  scanf("%lf",&pi);
  printf("The value of pi is:%lf\n",pi);
  fl=w/(2*pi);
  scanf("%d",&fl);
  printf("the value of frequency is:%dhertz\n",fl); 
  Vrms=Vm/sqrt(2);
  scanf("%lf",&Vrms);
  printf("the rms voltage is :%lfV\n",Vrms);
  Irms =Im/sqrt(2);
  scanf("%lf",&Irms);
  printf("the rms current is :%fA\n",Irms);
  Z=Vm/Im;
  scanf("%d",&Z);
  printf("the value of impedence is :%dohm\n",Z);
  pf =cos(phaseangle);
  scanf("%lf",&pf);
  printf("the value of power factor is :%lf\n",pf);
  R=Z*pf;
  scanf("%lf",&R);
  printf("the value of resistance is:%lfohm\n",R);
  P=Vrms*Irms*pf;
  scanf("%lf",&P);
  printf("the power consumed is :%lfwatt\n",P);
  S=sin(phaseangle);
  scanf("%lf",&S);
  printf("the value of sinphi is :%lf\n",S);
  Xl=Z*S;
  scanf("%lf",&Xl);
  printf("the value of inductive reactance is :%lfohm\n",Xl);
  L=w/Xl;
  scanf("%lf",&L);
  printf("the value inductance is :%lfH\n",L);
  return 0;
}