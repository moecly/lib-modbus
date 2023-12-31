#ifndef _SERIAL_CONFIGS_H
#define _SERIAL_CONFIGS_H

/* config serial */
#define SERIAL_PORT "/dev/ttyS12"
#define SERIAL_BAUD 115200
#define SERIAL_PARITY 'N'
#define SERIAL_DATA_BIT 8
#define SERIAL_STOP_BIT 1
#define USE_RS485 1

#define SLAVE_ID 10

#define BITS_ADDRESS 0
#define BITS_NB 0

#define INPUT_BITS_ADDRESS 0
#define INPUT_BITS_NB 0

#define REGISTERS_ADDRESS 1000
#define REGISTERS_NB_MAX 255

#define INPUT_REGISTERS_ADDRESS 1000
#define INPUT_REGISTERS_NB 255

#endif // _SERIAL_CONFIGS_H
