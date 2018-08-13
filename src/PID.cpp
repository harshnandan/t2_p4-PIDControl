#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_val, double Ki_val, double Kd_val) {
	Kp = Kp_val;
	Ki = Ki_val;
	Kd = Kd_val;

	_intialized = true;

	p_error = 0.0;
	i_error = 0.0;
	d_error = 0.0;

	prev_cte = 0.0;
}

void PID::UpdateError(double cte) {
	float dt = 1.0;
	p_error = cte;
	d_error = (cte - prev_cte)/dt;
	i_error = i_error + cte*dt;
}

double PID::TotalError() {
	return -Kp*p_error - Ki*i_error - Kd*d_error;
}

