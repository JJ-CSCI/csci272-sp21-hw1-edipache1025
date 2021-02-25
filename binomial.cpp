#include <iostream>
#include <iomanip>
using namespace std;
#include "binomial.h"

Binomial::Binomial (double c1, double c2, int p1, int p2) 
{
  coefft1 = c1; coefft2 = c2;
  if (p1 < 1) 
    p1 = 1;
  if (p2 < 1) 
    p2 = 1;
  power1 = p1; 
  power2 = p2;
}

double Binomial::GetCoefficient (int index) const 
{
  if (index == 1) 
    return coefft1;
  else if (index == 2) 
    return coefft2;
  else 
    return -1;
}

int Binomial::GetPower(int index) const 
{
  if (index == 1) 
    return power1;
  else if (index == 2) 
    return power2;
  else 
    return -1;
}

int Binomial::SetPower (int index, int power) 
{
  if (power <= 0) 
    power = 1;
  if (index == 1) 
    power1 = power;
  else if (index == 2) 
    power2 = power;
  else 
    return -1;
return 0;
}

int Binomial::Add (const Binomial other) 
{
  if ((other.GetPower (1) == power1) && (other.GetPower(2) == power2)) 
  {
     coefft1 += other.GetCoefficient (1);
     coefft2 += other.GetCoefficient (2);
     return 0;
  }
  else if ((other.GetPower (2) == power1) && (other.GetPower(1) == power2)) 
  {
     coefft1 += other.GetCoefficient (2);
     coefft2 += other.GetCoefficient (1);
     return 0;
  }
  else
    return -1;
}

void Binomial::Multiply (double f) 
{
  coefft1 *= f;
  coefft2 *= f;
}

void Binomial::Multiply (double coefft, int power) 
{
  coefft1 *= coefft;
  coefft2 *= coefft;
  power1 += power;
  power2 += power;
}