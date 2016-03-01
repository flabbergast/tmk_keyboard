#include "ch.h"
#include "hal.h"

#include "bootloader.h"

static THD_WORKING_AREA(waButtonThread, 32);
static THD_FUNCTION(buttonThread, arg) {
  (void)arg;
  chRegSetThreadName("bootloadButton");

  while(true) {
    if(palReadPad(GPIOB, GPIOB_BUTTON) == PAL_HIGH) {
      bootloader_jump();
    }
    chThdSleepMilliseconds(500);
  }
}

void user_init(void) {
  chThdCreateStatic(waButtonThread, sizeof(waButtonThread), LOWPRIO, buttonThread, NULL);
}
