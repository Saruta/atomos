#include <include/kernel.h>
#include <drivers/vga_text.h>

void panic (const char* msg) {
  set_fg_color (RED);
  set_bg_color (BLUE);

  write_text_vga ("KERNEL PANIC !!\n\n");

  for (;;)
    continue;
}
