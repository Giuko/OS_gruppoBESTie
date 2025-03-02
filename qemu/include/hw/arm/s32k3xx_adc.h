#ifndef S32K3XX_ADC_H
#define S32K3XX_ADC_H
#define ADC_BASE_ADDRESS 0x400A000

#define ADC0_OFFSET      (0    * 1024)
#define ADC1_OFFSET      (16   * 1024)
#define ADC2_OFFSET      (32   * 1024)

#define ADC0 (ADC_BASE_ADDRESS + ADC0_OFFSET)
#define ADC1 (ADC_BASE_ADDRESS + ADC1_OFFSET)
#define ADC2 (ADC_BASE_ADDRESS + ADC2_OFFSET)

#define ADC_SIZE        (16    * 1024)

/* End of conversion interrupt */
#define ADC0_EOC            180
#define ADC1_EOC            181
#define ADC2_EOC            182

#endif 
