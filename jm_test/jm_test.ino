#include <jm_Scheduler.h>
#include <jm_Wire.h>

#include <jm_Scheduler.h>
#include <jm_Wire.h>
extern uint16_t twi_readFrom_timeout;
extern uint16_t twi_writeTo_timeout;
extern bool twi_readFrom_wait;
extern bool twi_writeTo_wait;
#include <jm_LiquidCrystal_I2C.h>

// your code...

void setup(void)
{
    Wire.begin();
    twi_readFrom_wait = false; // Suppress twi_readFrom() waiting loop
    twi_writeTo_wait = false; // Suppress twi_writeTo() waiting loop

    lcd.init();
    while (lcd._i2cio.yield_request()) jm_Scheduler::yield();
}

void loop(void)
{
    jm_Scheduler::yield();
}
