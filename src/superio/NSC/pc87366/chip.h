#ifndef SIO_COM1
#define SIO_COM1_BASE   0x3F8
#endif
#ifndef SIO_COM2
#define SIO_COM2_BASE   0x2F8
#endif

extern struct chip_operations superio_NSC_pc87366_control;

#include <pc80/keyboard.h>
#include <uart8250.h>

struct superio_NSC_pc87366_config {
	struct uart8250 com1, com2;
	struct pc_keyboard keyboard;
};
