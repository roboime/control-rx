/*
 * Robo.h
 *
 *  Created on: Jul 9, 2016
 *      Author: lenovoi7
 */
#ifndef ROBO_H_
#define ROBO_H_

#include "stm32f4xx.h"
#include "stm32f4_discovery.h"
#include "GPIO.h"
#include "Pwm.h"
#include "Encoder.h"
#include "TimerTime2.h"
#include "Motor.h"

class Robo {
public:
	Robo();
	void control_speed();
	void control_pos();
	int pos[4];
	int speed[4];
	Timer_Time2 *robo_timer;
	Pwm *ahpwms[4];
	GPIO *algpios[4];
    Pwm *bhpwms[4];
    GPIO *blgpios[4];
    Encoder *encoders[4];
    Motor *motors[4];
    void set_speed(int v_r, int v_t, int w);
private:
};
#endif /* ROBO_H_ */
