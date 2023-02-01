#include "main.h"

/* Private function prototypes
 * -----------------------------------------------*/

int
main (void)
{
  HAL_Init ();
  SystemClock_Config ();
  MX_GPIO_Init ();
  MX_USART2_UART_Init ();
  while (1)
    {
      HAL_GPIO_TogglePin (LD2_GPIO_Port, LD2_Pin);
      HAL_Delay (200);
    }
}
