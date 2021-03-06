#ifndef _PID_MW_H
#define _PID_MW_H

#include <stdint.h>
#include "bf_common.h"

struct pidProfile_t
{
    //att ypr
    uint8_t  P[3];
    uint8_t  I[3];
    uint8_t  D[3];

    uint8_t  pidLevel_P;
    uint8_t  pidLevel_I;
    uint8_t  pidLevel_D;

    uint8_t yawRate;
    uint8_t rollPitchRate[2];

//    uint8_t  pidMAG_P;

//    uint16_t yaw_p_limit;                   // set P term limit (fixed value was 300)
//    uint16_t dterm_lpf_hz;                  // Delta Filter in hz
//    uint16_t yaw_lpf_hz;                    // additional yaw filter when yaw axis too noisy
//    uint8_t  deltaMethod;
//
//    uint8_t horizon_tilt_effect;            // inclination factor for Horizon mode
//    uint8_t horizon_tilt_mode;              // SAFE or EXPERT
//
//    uint8_t dterm_filter_type;              // Filter selection for dterm
//    uint16_t dterm_notch_hz;                // Biquad dterm notch hz
//    uint16_t dterm_notch_cutoff;            // Biquad dterm notch low cutoff
//
//    uint16_t max_angle_inclination;         // max inclination allowed in angle (level) mode. default 500 (50 degrees).

};

class Pid_mw 
{
private:
    pidProfile_t* cfg;

    uint8_t dynP8[3] = {0,0,0};  //TODO
    uint8_t dynD8[3] = {0,0,0};
    int16_t rollPitchTrim[2] = {0, 0};//TODO adjustable from RC


public:
    Pid_mw(pidProfile_t* pidProfile);

    void pid_mw(int16_t* rcCommand, int16_t* gyroADC, int16_t* attitude, FLIGHT_MODE flightMode, int16_t* axisPID);

};



#endif
