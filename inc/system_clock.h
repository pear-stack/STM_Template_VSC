#ifndef SYSTEM_CLOCK_H
#define SYSTEM_CLOCK_H

#ifdef __cplusplus
extern "C"
{
#endif

/* Includes
 * ------------------------------------------------------------------*/
#include "stm32f3xx_hal.h"

  void SystemClock_Config (void);
  void Error_Handler (void);

#ifdef __cplusplus
}
#endif

#endif /* SYSTEM_CLOCK_H */