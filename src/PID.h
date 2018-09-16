#ifndef PID_H
#define PID_H

class PID {
public:
  /*
  * Errors
  */
  double p_error;
  double i_error;
  double d_error;

  /*
  * Coefficients
  */ 
  double tao;
  double tao_d;
  double tao_i;
  double cteTotal;
  double Kp;
  double Ki;
  double Kd;
  double previousCTE;

  /*
  * Constructor
  */
  PID();

  /*
  * Destructor.
  */
  virtual ~PID();

  /*
  * Initialize PID.
  */
  void Init(double Kp, double Ki, double Kd);

  /*
  * Update the PID error variables given cross track error.
  */
  double Steer(double cte);

  /*
  * Calculate the total PID error.
  */
  double Throttle(double cte);
};

#endif /* PID_H */
