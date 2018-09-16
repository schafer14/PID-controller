#include "PID.h"
#include <iostream>
#include <cmath>


using namespace std;

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  previousCTE = 0;
  cteTotal = 0;
  tao = -0.2;
  tao_d = -4;
  tao_i = - 0.004;
}


double PID::Steer(double cte) {
  cteTotal += cte;
  double steer = cte * tao + tao_d * (cte - previousCTE) + cteTotal * tao_i;
  previousCTE = cte;

  return steer;
}


double PID::Throttle(double cte) {
  return .3;
  // return -.4 * abs(cte) + .6; 
}
