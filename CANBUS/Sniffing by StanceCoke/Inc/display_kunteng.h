/*
 * display_kunteng.h
 *
 *  Created on: 25.09.2019
 *      Author: Admin
 */

#ifndef DISPLAY_KUNTENG_H_
#define DISPLAY_KUNTENG_H_

void kunteng_init();
void display_update(MotorState_t* MS_U);
void check_message(MotorState_t* MS_D);
uint8_t GetRXBuffer();

typedef struct _lcd_configuration_variables
{
  uint8_t ui8_assist_level;
  uint8_t ui8_light;
  uint8_t ui8_motor_characteristic;
  uint8_t ui8_wheel_size;
  uint8_t ui8_max_speed;
  uint8_t ui8_power_assist_control_mode;
  uint8_t ui8_controller_max_current;
} struc_lcd_configuration_variables;

#define COMMUNICATIONS_BATTERY_VOLTAGE	(BATTERY_LI_ION_CELLS_NUMBER * 3.45) // example: 7S battery, should be = 24

// Considering the follow voltage values for each li-ion battery cell
// State of charge 		| voltage
#define LI_ION_CELL_VOLTS_MAX 4.20
#define LI_ION_CELL_VOLTS_100 4.20
#define LI_ION_CELL_VOLTS_80 3.86 // 4.02
#define LI_ION_CELL_VOLTS_60 3.68 // 3.87
#define LI_ION_CELL_VOLTS_40 3.46 // 3.80
#define LI_ION_CELL_VOLTS_20 3.28 // 3.73
#define LI_ION_CELL_VOLTS_0 3.10 // 3.27
#define LI_ION_CELL_VOLTS_MIN 3.10

#define BATTERY_PACK_VOLTS_100	(LI_ION_CELL_VOLTS_100 * BATTERY_LI_ION_CELLS_NUMBER) * 256
#define BATTERY_PACK_VOLTS_80 	(LI_ION_CELL_VOLTS_80 * BATTERY_LI_ION_CELLS_NUMBER) * 256
#define BATTERY_PACK_VOLTS_60	(LI_ION_CELL_VOLTS_60 * BATTERY_LI_ION_CELLS_NUMBER) * 256
#define BATTERY_PACK_VOLTS_40	(LI_ION_CELL_VOLTS_40 * BATTERY_LI_ION_CELLS_NUMBER) * 256
#define BATTERY_PACK_VOLTS_20	(LI_ION_CELL_VOLTS_20 * BATTERY_LI_ION_CELLS_NUMBER) * 256
#define BATTERY_PACK_VOLTS_0	(LI_ION_CELL_VOLTS_0 * BATTERY_LI_ION_CELLS_NUMBER) * 256

#define ADC_BATTERY_VOLTAGE_K 73 // 0.272 << 8
#define BATTERY_LI_ION_CELLS_NUMBER 10

#endif /* DISPLAY_KUNTENG_H_ */
