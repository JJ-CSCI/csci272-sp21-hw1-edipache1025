#ifndef BINOMIAL
#define BINOMIAL

class Binomial 
{
  double coefft1, coefft2;
  int power1, power2;
public:
  Binomial (double c1 = 1.0, double c2 = 1.0, int p1 = 1, int p2 = 1);

  double GetCoefficient (int index) const;
  int GetPower(int index) const;
  int SetPower (int index, int power);
  int Add (const Binomial other);

  void Multiply (double f);
  void Multiply (double coefft, int pwr);
};

#endif