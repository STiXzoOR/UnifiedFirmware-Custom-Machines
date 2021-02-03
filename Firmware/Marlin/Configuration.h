/**
 * For directions on how to use this firmware visit http://uf2.th3dstudio.com
 */
#pragma once
#define CONFIGURATION_H_VERSION 020007

// ONLY UNCOMMENT THINGS IN ONE PRINTER SECTION!!! IF YOU HAVE MULTIPLE MACHINES FLASH THEM ONE AT A TIME.

//============================================================================
// **************************   CUSTOM PRINTERS    ***************************
//============================================================================

#define STIX_A8

//===============================================================================
// **********************  PRINTER CONFIGURATION SETTINGS   *********************
//===============================================================================

#if ENABLED(STIX_A8)
  #define PRINTER_VOLTAGE_12
  #define CUSTOM_PRINTER_NAME
  #define USER_PRINTER_NAME "STiX's A8"

  #define SERIAL_PORT 2
  #define SERIAL_PORT_2 -1
  #define SKR_E3_MINI_V2_0
  #define SKR_E3_MINI_BOARD
  #define BAUDRATE 115200
  
  #define CR10_STOCKDISPLAY

  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_BTT_SKR_MINI_E3_V2_0
  #endif

  #define BLTOUCH
  #define CUSTOM_PROBE
  #define NOZZLE_TO_PROBE_OFFSET { 30, 0, 0 }
  #define EZABL_POINTS 5
  #define EZABL_PROBE_EDGE 20
  // #define EZABL_FASTPROBE
  #define HEATERS_ON_DURING_PROBING
  #define EXTRAPOLATE_BEYOND_GRID
  #define FINE_BABYSTEPPING

  #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 98 }
  #define DEFAULT_MAX_FEEDRATE          { 200, 200, 8, 50 }
  #define DEFAULT_MAX_ACCELERATION      { 1000, 1000, 500, 5000 }

  #define DEFAULT_ACCELERATION          500
  #define DEFAULT_RETRACT_ACCELERATION  500
  #define DEFAULT_TRAVEL_ACCELERATION   1000

  #define CLASSIC_JERK
  #if ENABLED(CLASSIC_JERK)
    #define LINEAR_ADVANCE
    #define LINEAR_ADVANCE_K 0
    
    #define DEFAULT_XJERK 7.0
    #define DEFAULT_YJERK 7.0
    #define DEFAULT_ZJERK  0.3
  #else
    #define S_CURVE_ACCELERATION
    #define JUNCTION_DEVIATION_MM 0.10
    #define JD_HANDLE_SMALL_SEGMENTS 
  #endif

  #define DEFAULT_EJERK    5.0

  #define SHOW_BOOTSCREEN

  #define EXTRUDERS 1
  #define ENABLE_PIDBED
  #define PID_EDIT_MENU
  #define PID_AUTOTUNE_MENU

  #define DEFAULT_Kp 10.5
  #define DEFAULT_Ki 0.42
  #define DEFAULT_Kd 65.9

  #define DEFAULT_bedKp 181.3
  #define DEFAULT_bedKi 30.56
  #define DEFAULT_bedKd 717

  #define X_BED_SIZE 220
  #define Y_BED_SIZE 220
  
  #define X_MIN_POS -2
  #define Y_MIN_POS -14
  #define Z_MAX_POS 240

  #define USE_XMIN_PLUG
  #define USE_YMIN_PLUG
  #define USE_ZMIN_PLUG

  #define X_HOME_DIR -1
  #define Y_HOME_DIR -1
  #define Z_HOME_DIR -1
  
  #define TEMP_SENSOR_0 13
  #define TEMP_SENSOR_1 0 
  #define TEMP_SENSOR_2 0
  #define TEMP_SENSOR_3 0
  #define TEMP_SENSOR_4 0
  #define TEMP_SENSOR_5 0
  #define TEMP_SENSOR_6 0
  #define TEMP_SENSOR_7 0
  
  #define TEMP_SENSOR_BED 5
  #define TEMP_SENSOR_PROBE 0
  #define TEMP_SENSOR_CHAMBER 0

  #define ENDSTOPPULLUPS
  #define ENDSTOP_INTERRUPTS_FEATURE

  #define X_MIN_ENDSTOP_INVERTING true
  #define Y_MIN_ENDSTOP_INVERTING true
  #define Z_MIN_ENDSTOP_INVERTING false
  #define X_MAX_ENDSTOP_INVERTING false
  #define Y_MAX_ENDSTOP_INVERTING false
  #define Z_MAX_ENDSTOP_INVERTING false
  #define Z_MIN_PROBE_ENDSTOP_INVERTING false
  #define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN

  #define X_DRIVER_TYPE TMC2209
  #define Y_DRIVER_TYPE TMC2209
  #define Z_DRIVER_TYPE TMC2209
  #define E0_DRIVER_TYPE TMC2209

  // #define SENSORLESS_HOMING
  #define STEALTHCHOP_E
  #define DUAL_Z_MOTORS

  #define X_MOTOR_CURRENT 523
  #define Y_MOTOR_CURRENT 523
  #define Z_MOTOR_CURRENT 1050
  #define E0_MOTOR_CURRENT 523

  #if ENABLED(SENSORLESS_HOMING)
    #define X_MOTOR_STALL_SENSITIVITY 120
    #define Y_MOTOR_STALL_SENSITIVITY 120
  #endif

  #define X_ENABLE_ON 0
  #define Y_ENABLE_ON 0
  #define Z_ENABLE_ON 0
  #define E_ENABLE_ON 0

  #define INVERT_X_DIR false
  #define INVERT_Y_DIR false
  #define INVERT_Z_DIR true
  
  #define INVERT_E0_DIR false
  #define INVERT_E1_DIR false
  #define INVERT_E2_DIR false
  #define INVERT_E3_DIR false
  #define INVERT_E4_DIR false
  #define INVERT_E5_DIR false
  #define INVERT_E6_DIR false
  #define INVERT_E7_DIR false

  #define ENCODER_PULSES_PER_STEP 4
  #define ENCODER_STEPS_PER_MENU_ITEM 1

  #define Z_PROBE_OFFSET_RANGE_MIN -10
  #define Z_PROBE_OFFSET_RANGE_MAX 10

  #define USE_CONTROLLER_FAN
  #define CONTROLLER_FAN_EDITABLE

#endif
// End PRINTER Board Settings

/*
 * All other settings are stored in the Configuration_backend.h file. Do not change unless you know what you are doing.
 */
 
#include "Configuration_backend.h"