/* *****************************************************************************
 *
 *  target:     Reset and clock control module
 *  author:     huke
 *  email:      hihuke@163.com
 *  data:       2023.1.3
 *
 * ****************************************************************************/

/* *****************************************************************************
 *  include
 * ****************************************************************************/
# include "RCC.hpp"

/* *****************************************************************************
 *  code
 * ****************************************************************************/
RCC::RCC(void)
{
    InitSystemClock(8);
}

RCC::~RCC(void)
{
    
}

void RCC::InitSystemClock(void)
{

}

void RCC::InitSystemClock(SYS_CLK_SOURCE_TYPE clock_source)
{

}

int RCC::InitSystemClock(unsigned int target_freq, SYS_CLK_SOURCE_TYPE clock_source)
{
    return 0;
}
/* RCC module end */