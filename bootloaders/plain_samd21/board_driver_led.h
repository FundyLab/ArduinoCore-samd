/*
  Copyright (c) 2015 Arduino LLC.  All right reserved.
  Copyright (c) 2015 Atmel Corporation/Thibaut VIARD.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _BOARD_DRIVER_LED_
#define _BOARD_DRIVER_LED_

#include <sam.h>
#include "board_definitions.h"

// Don't set to any LED port reg (just only read) for plain Board
inline void LED_init(void) { volatile uint32_t temp0 = PORT->Group[0].DIRSET.reg; }
inline void LED_on(void) { volatile uint32_t temp1 = PORT->Group[0].OUTSET.reg; }
inline void LED_off(void) { volatile uint32_t temp2 = PORT->Group[0].OUTCLR.reg; }
inline void LED_toggle(void) { volatile uint32_t temp3 = PORT->Group[0].OUTTGL.reg; }

inline void LEDRX_init(void) { volatile uint32_t temp4 = PORT->Group[1].DIRSET.reg; }
inline void LEDRX_on(void) { volatile uint32_t temp5 = PORT->Group[1].OUTSET.reg; }
inline void LEDRX_off(void) { volatile uint32_t temp6 = PORT->Group[1].OUTCLR.reg; }
inline void LEDRX_toggle(void) { volatile uint32_t temp7 = PORT->Group[1].OUTTGL.reg; }

inline void LEDTX_init(void) { volatile uint32_t temp8 = PORT->Group[0].DIRSET.reg; }
inline void LEDTX_on(void) { volatile uint32_t temp9 = PORT->Group[0].OUTSET.reg; }
inline void LEDTX_off(void) { volatile uint32_t temp10 = PORT->Group[0].OUTCLR.reg; }
inline void LEDTX_toggle(void) { volatile uint32_t temp11 = PORT->Group[0].OUTTGL.reg; }

/*inline void LED_init(void) { PORT->Group[BOARD_LED_PORT].DIRSET.reg = (1<<BOARD_LED_PIN); }
inline void LED_on(void) { PORT->Group[BOARD_LED_PORT].OUTSET.reg = (1<<BOARD_LED_PIN); }
inline void LED_off(void) { PORT->Group[BOARD_LED_PORT].OUTCLR.reg = (1<<BOARD_LED_PIN); }
inline void LED_toggle(void) { PORT->Group[BOARD_LED_PORT].OUTTGL.reg = (1<<BOARD_LED_PIN); }

inline void LEDRX_init(void) { PORT->Group[BOARD_LEDRX_PORT].DIRSET.reg = (1<<BOARD_LEDRX_PIN); }
inline void LEDRX_on(void) { PORT->Group[BOARD_LEDRX_PORT].OUTSET.reg = (1<<BOARD_LEDRX_PIN); }
inline void LEDRX_off(void) { PORT->Group[BOARD_LEDRX_PORT].OUTCLR.reg = (1<<BOARD_LEDRX_PIN); }
inline void LEDRX_toggle(void) { PORT->Group[BOARD_LEDRX_PORT].OUTTGL.reg = (1<<BOARD_LEDRX_PIN); }

inline void LEDTX_init(void) { PORT->Group[BOARD_LEDTX_PORT].DIRSET.reg = (1<<BOARD_LEDTX_PIN); }
inline void LEDTX_on(void) { PORT->Group[BOARD_LEDTX_PORT].OUTSET.reg = (1<<BOARD_LEDTX_PIN); }
inline void LEDTX_off(void) { PORT->Group[BOARD_LEDTX_PORT].OUTCLR.reg = (1<<BOARD_LEDTX_PIN); }
inline void LEDTX_toggle(void) { PORT->Group[BOARD_LEDTX_PORT].OUTTGL.reg = (1<<BOARD_LEDTX_PIN); }*/

#endif // _BOARD_DRIVER_LED_
