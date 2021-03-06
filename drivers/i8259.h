#ifndef _8259_H
#define _8259_H

#include <arch/ioport.h>

#define _MASTER 0x20
#define _SLAVE 0xa0

/* initialisation of the master PIC */

extern void pic_init();

/* enable line */
extern void enable_irq_line (int num);

#endif /* _8259_H */
