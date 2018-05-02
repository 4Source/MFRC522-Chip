/*
 Author:	4Source
*/

#ifndef _MFRC522_Chip_h
#define _MFRC522_Chip_h

#if defined(ARDUINO) && ARDUINO >= 100
#include <arduino.h>
#endif

class MFRC522 {
public:
	//Register
	enum Reg
	{
		//Page 0: Command and status
		//Reserved 		= 0x00,				//reserved for future use 
		CommandReg = 0x01,					//starts and stops command execution 
		ComlEnReg = 0x02, 					//enable and disable interrupt request control bits
		DivlEnReg = 0x03,					//enable and disable interrupt request control bits 
		ComIrqReg = 0x04,					//interrupt request bits 
		DivIrqReg = 0x05, 					//interrupt request bits 
		ErrorReg = 0x06, 					//error bits showing the error status of the last command executed
		Status1Reg = 0x07, 					//communication status bits 
		Status2Reg = 0x08, 					//receiver and transmitter status bits 
		FIFODataReg = 0x09, 				//input and output of 64 byte FIFO buffer 
		FIFOLevelReg = 0x0A, 				//number of bytes stored in the FIFO buffer 
		WaterLevelReg = 0x0B, 				//level for FIFO underflow and overflow warning 
		ControlReg = 0x0C, 					//miscellaneous control registers 
		BitFramingReg = 0x0D, 				//adjustments for bit-oriented frames 
		CollReg = 0x0E, 					//bit position of the first bit-collision detected on the RF interface
		//Reserved 		= 0x0F, 			//reserved for future use 

		//Page 1: Command
		//Reserved 		= 0x10, 			//reserved for future use
		ModeRe = 0x11, 						//defines general modes for transmitting and receiving 
		TxModeReg = 0x12, 					//defines transmission data rate and framing 
		RxModeReg = 0x13, 					//defines reception data rate and framing 
		TxControlReg = 0x14, 				//controls the logical behavior of the antenna driver pins TX1 and TX2
		TxASKReg = 0x15, 					//controls the setting of the transmission modulation 
		TxSelReg = 0x16, 					//selects the internal sources for the antenna driver 
		RxSelReg = 0x17, 					//selects internal receiver settings 
		RxThresholdReg = 0x18, 				//selects thresholds for the bit decoder 
		DemodReg = 0x19, 					//defines demodulator settings 
		//Reserved 		= 0x1A, 			//reserved for future use 
		//Reserved 		= 0x1B, 			//reserved for future use
		MfTxReg = 0x1C, 					//controls some MIFARE communication transmit parameters 
		MfRxReg = 0x1D, 					//controls some MIFARE communication receive parameters 
		//Reserved 		= 0x1E, 			//reserved for future use 
		SerialSpeedReg = 0x1F, 				//selects the speed of the serial UART interface 

		//Page 2: Configuration
		//Reserved 		= 0x20, 			//reserved for future use 
		CRCResultRegH = 0x21, 				//shows the MSB and LSB values of the CRC calculation HighByte
		CRCResultRegL = 0x22, 				//shows the MSB and LSB values of the CRC calculation LowByte
		//Reserved 		= 0x23, 			//reserved for future use 
		ModWidthReg = 0x24, 				//controls the ModWidth setting 
		//Reserved 		= 0x25, 			//reserved for future use 
		RFCfgReg = 0x26, 					//configures the receiver gain 
		GsNReg = 0x27, 						//selects the conductance of the antenna driver pins TX1 and TX2 for modulation
		CWGsPReg = 0x28, 					//defines the conductance of the p-driver output during periods of no modulation
		ModGsPReg = 0x29, 					//defines the conductance of the p-driver output during periods of modulation
		TModeReg = 0x2A, 					//defines settings for the internal timer 
		TPrescalerReg = 0x2B,				//shows the 12-bit LowByte
		TReloadRegH = 0x2C, 				//defines the 16-bit timer reload value HighByte
		TReloadRegL = 0x2D, 				//defines the 16-bit timer reload value LowByte
		TCounterValRegH = 0x2E, 			//shows the 16-bit timer value HighByte
		TCounterValRegL = 0x2F, 			//shows the 16-bit timer value HighByte

		//Page 3: Test register
		//Reserved 		= 0x30, 			//reserved for future use 
		TestSel1Reg = 0x31, 				//general test signal configuration 
		TestSel2Reg = 0x32, 				//general test signal configuration and PRBS control 
		TestPinEnReg = 0x33, 				//enables pin output driver on pins D1 to D7 
		TestPinValueReg = 0x34, 			//defines the values for D1 to D7 when it is used as an I/O bus 
		TestBusReg = 0x35, 					//shows the status of the internal test bus 
		AutoTestReg = 0x36, 				//controls the digital self test 
		VersionReg = 0x37, 					//shows the software version 
		AnalogTestReg = 0x38, 				//controls the pins AUX1 and AUX2 
		TestDAC1Reg = 0x39, 				//defines the test value for TestDAC1 
		TestDAC2Reg = 0x3A, 				//defines the test value for TestDAC2 
		TestADCReg = 0x3B, 					//shows the value of ADC I and Q channels 
		//Reserved 		= 0x3C to 0x3F		//reserved for production tests 
	};

	//
	//Construktor
	//


	//
	//Basic Methodes
	//
	

};
#endif

