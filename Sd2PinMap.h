/* Arduino SdFat Library
 * Copyright (C) 2010 by William Greiman
 * Revision Date: 08/18/2011 (Olver Jones)
 *
 * This file is part of the Arduino SdFat Library
 *
 * This Library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This Library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with the Arduino SdFat Library.  If not, see
 * <http://www.gnu.org/licenses/>.
 */
// Warning this file was generated by a program.
#ifndef Sd2PinMap_h
#define Sd2PinMap_h

#if defined(_BOARD_MEGA_) || defined(_BOARD_UNO_) || defined(_BOARD_UC32_)

	//Pin 11
	#define prtSDO				IOPORT_G
	#define	trisSDO				TRISG
	#define	latSDO				LATG
	#define	bnSDO				BIT_8

	//Pin 12
	#define prtSDI				IOPORT_G
	#define trisSDI				TRISG
	#define	latSDI				LATG
	#define bnSDI				BIT_7

	//Pin 13
	#define prtSCK				IOPORT_G
	#define trisSCK				TRISG
	#define latSCK				LATG
	#define bnSCK				BIT_6

#elif defined(_BOARD_PONTECH_QUICK240_USB_)
        //uc Pin 72
        #define prtSDO				IOPORT_D
        #define	trisSDO				TRISD
        #define	latSDO				LATD
        #define	bnSDO				BIT_0

        //uc Pin 9
        #define prtSDI				IOPORT_C
        #define trisSDI				TRISC
        #define	latSDI				LATC
        #define bnSDI				BIT_4

        //uc Pin 70
        #define prtSCK				IOPORT_D
        #define trisSCK				TRISD
        #define latSCK				LATD
        #define bnSCK				BIT_10
#elif defined(_BOARD_CEREBOT_MX3CK_)

	#define	prtSDO				IOPORT_F	//JC
	#define	trisSDO				TRISF
	#define	latSDO				LATF
	#define	bnSDO				BIT_5

	#define	prtSDI				IOPORT_F
	#define	trisSDI				TRISF
	#define	latSDI				LATF
	#define	bnSDI				BIT_4

	#define	prtSCK				IOPORT_B
	#define	trisSCK				TRISB
	#define	latSCK				LATB
	#define	bnSCK				BIT_14

#elif defined(_BOARD_CEREBOT_MX4CK_)

	#define	prtSDO				IOPORT_B	//JK
	#define	trisSDO				TRISB
	#define	latSDO				LATB
	#define	bnSDO				BIT_11

	#define	prtSDI				IOPORT_B
	#define	trisSDI				TRISB
	#define	latSDI				LATB
	#define	bnSDI				BIT_12

	#define	prtSCK				IOPORT_B
	#define	trisSCK				TRISB
	#define	latSCK				LATB
	#define	bnSCK				BIT_13

#elif defined(_BOARD_CEREBOT_MX7CK_)

	#define	prtSDO				IOPORT_F	//JF
	#define	trisSDO				TRISF
	#define	latSDO				LATF
	#define	bnSDO				BIT_5

	#define	prtSDI				IOPORT_F
	#define	trisSDI				TRISF
	#define	latSDI				LATF
	#define	bnSDI				BIT_4

	#define	prtSCK				IOPORT_F
	#define	trisSCK				TRISF
	#define	latSCK				LATF
	#define	bnSCK				BIT_13

#else
//*	Dec 14, 2011	<MLS>	Issue #160 this is the same, but we have to have a default, this still needs work

	//Pin 11
	#define prtSDO				IOPORT_G
	#define	trisSDO				TRISG
	#define	latSDO				LATG
	#define	bnSDO				BIT_8

	//Pin 12
	#define prtSDI				IOPORT_G
	#define trisSDI				TRISG
	#define	latSDI				LATG
	#define bnSDI				BIT_7

	//Pin 13
	#define prtSCK				IOPORT_G
	#define trisSCK				TRISG
	#define latSCK				LATG
	#define bnSCK				BIT_6

#endif

#endif
