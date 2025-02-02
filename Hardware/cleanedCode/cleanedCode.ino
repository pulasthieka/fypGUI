#include <Wire.h>

#define ADS1115_ADDRESS (0x48)                //Prefix = P
#define ADS1115_REG_POINTER_CONFIG (0x01)     // Configuration
#define ADS1115_CONVERSIONDELAY (9)           // Conversion delay
#define ADS1015_REG_POINTER_CONVERT (0x00)    // Conversion
#define FSR_2V (0b1100010110000011)           // Config Reg value for 2v FSR
#define FSR_1V (0b1100011110000011)

#define BodyTempAdd 0x4A      //Prefix = T
#define EnvTempAdd 0x4B       //Prefix = E 
/*****************Ground the ADDR pin of the body temperature sensor for 0x4B**************************/
#define UART_SPEED 115200

const char* _SSID = "MiA2";
const char* PASSWORD = "12345678";
const char* IP = "192.168.43.123";
const int PORT = 8011;


#define MAX30100_ADDRESS        0x57
#define MAX30100_INT_STATUS     0x00  // Which interrupts are tripped
#define MAX30100_INT_ENABLE     0x01  // Which interrupts are active
#define MAX30100_FIFO_WR_PTR    0x02  // Where data is being written
#define MAX30100_OVRFLOW_CTR    0x03  // Number of lost samples
#define MAX30100_FIFO_RD_PTR    0x04  // Where to read from
#define MAX30100_FIFO_DATA      0x05  // Ouput data buffer
#define MAX30100_MODE_CONFIG    0x06  // Control register
#define MAX30100_SPO2_CONFIG    0x07  // Oximetry settings
#define MAX30100_LED_CONFIG     0x09  // Pulse width and power of LEDs
#define MAX30100_TEMP_INTG      0x16  // Temperature value, whole number
#define MAX30100_TEMP_FRAC      0x17  // Temperature value, fraction
#define MAX30100_REV_ID         0xFE  // Part revision
#define MAX30100_PART_ID        0xFF  // Part ID, normally 0x11
