/*******************************************************************************
* Copyright 2016 ROBOTIS CO., LTD.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

/* Authors: */

#ifndef TURTLEBOT3_MECANUM_H_
#define TURTLEBOT3_MECANUM_H_

#include "open_manipulator_driver.h"

#define NAME                             "Waffle or Waffle Pi"

#define WHEEL_RADIUS                     0.0508          // meter   車輪半徑
#define WHEEL_SEPARATION_X               0.171           // meter   x間距
#define WHEEL_SEPARATION_Y               0.095           // meter   y間距
#define TURNING_RADIUS                   0.1435          // meter   旋轉半徑
#define ROBOT_RADIUS                     0.245           // meter   車體半徑
#define ENCODER_MIN                      -2147483648     // raw
#define ENCODER_MAX                      2147483648      // raw

#define MAX_LINEAR_VELOCITY              (WHEEL_RADIUS * 2 * 3.14159265359 * 77 / 60)       // m/s  
#define MAX_ANGULAR_VELOCITY             (MAX_LINEAR_VELOCITY / TURNING_RADIUS)      // rad/s

#define MIN_LINEAR_VELOCITY              -MAX_LINEAR_VELOCITY  
#define MIN_ANGULAR_VELOCITY             -MAX_ANGULAR_VELOCITY 

#endif  //TURTLEBOT3_MECANUM_H_
