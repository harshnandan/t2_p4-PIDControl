# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

---
<img src="./pipeline_steps/step_0_original.png" width="480" alt="Combined Image"/>
## Dependencies

* cmake >= 3.5
 * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1(mac, linux), 3.81(Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools]((https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)
* [uWebSockets](https://github.com/uWebSockets/uWebSockets)
  * Run either `./install-mac.sh` or `./install-ubuntu.sh`.
  * If you install from source, checkout to commit `e94b6e1`, i.e.
    ```
    git clone https://github.com/uWebSockets/uWebSockets 
    cd uWebSockets
    git checkout e94b6e1
    ```
    Some function signatures have changed in v0.14.x. See [this PR](https://github.com/udacity/CarND-MPC-Project/pull/3) for more details.
* Simulator. You can download these from the [project intro page](https://github.com/udacity/self-driving-car-sim/releases) in the classroom.

There's an experimental patch for windows in this [PR](https://github.com/udacity/CarND-PID-Control-Project/pull/3)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./pid`. 

Tips for setting up your environment can be found [here](https://classroom.udacity.com/nanodegrees/nd013/parts/40f38239-66b6-46ec-ae68-03afd8a601c8/modules/0949fca6-b379-42af-a919-ee50aa304e6a/lessons/f758c44c-5e40-4e01-93b5-1a82aa4e044f/concepts/23d376c7-0195-4276-bdf0-e02f1f3c665d)

## Discussion
[//]: # (Image References)

[image1]: ./figure/screen-shot.jpg "Screen shot"
![alt text][image1]

PID control works by minimizing the error value (which is difference between desired value and measured value) by applying a correction to control input (steering angle). The correction is calculated as three seperate components; Proportional (P), which applies a correction proportional to the calculated error, hence if the error is large a large correction factor is applied and vice-versa; Integral (I), looks at the past error and corrects for drift by integrating the past error and applying the correction proportional to the integrated error; Derivative (D) looks at the rate of change of error and applying corrective force to bring the error to zero as fast as possible.

The feedback gains were tuned manually. First Kp was tuned keeping everything zero so that the oscillations are minimized. The Kd was tuned to stablize the oscillations and at end Ki was tuned to minize drifts. Finally the tuned values were Kp=0.2, Ki=0.0001 and Kd=3.0.

   

