// GamepadPSP.h
/*提示
* 这个库不支持热插拔，不要在Arduino开启的时候插拔控制器，否则必须再次config_gamepad(pins)重连

*/
#ifndef _GAMEPADPSP_h
#define _GAMEPADPSP_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#include "ADXL345.h"
#else
	#include "WProgram.h"
#endif

class GamepadPSP
{
public:
	GamepadPSP();
	~GamepadPSP();
	void initPSP();
	void CheckInput();
	int giveSpeed();

	int *niceControl();

	int chassisControl();
	int turnControl();
	int aniContrl(Acceleration* acc);

	int powerUnion[2];
private:
	int rvalue=0;
};




#endif

