/* *****************************************************************************
 *
 *  target:     Reset and clock control module
 *  author:     huke
 *  email:      hihuke@163.com
 *  data:       2023.1.3
 *
 * ****************************************************************************/

#ifndef HEADER_RCC_HPP
#define HEADER_RCC_HPP


class RCC 
{
public:
    RCC(void);
    ~RCC(void);

    enum SYS_CLK_SOURCE_TYPE {
        SYS_CLK_SOURCE_HSI = 0,
        SYS_CLK_SOURCE_HSE,
    };
    void InitSystemClock(void);
    void InitSystemClock(SYS_CLK_SOURCE_TYPE clock_source);
    int InitSystemClock(unsigned int target_freq, SYS_CLK_SOURCE_TYPE clock_source = SYS_CLK_SOURCE_HSI);

private:
};




#endif
/* RCC module end */