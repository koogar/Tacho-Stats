/*
      ____  __  _____  ______   ______________  ___________    __________________
     / __ \/ / / /   |/_  __/  / ___/_  __/   |/_  __/ ___/   /_  __/ ____/_  __/
    / /_/ / /_/ / /| | / /_____\__ \ / / / /| | / /  \__ \     / / / /_    / /
   / ____/ __  / ___ |/ /_____/__/ // / / ___ |/ /  ___/ /    / / / __/   / /
  /_/   /_/ /_/_/  |_/_/     /____//_/ /_/  |_/_/  /____/    /_/ /_/     /_//*

    ___ ___  _  _ ___ ___ ___ _   _ ___    _ _____ ___ ___  _  _
   / __/ _ \| \| | __|_ _/ __| | | | _ \  /_\_   _|_ _/ _ \| \| |
  | (_| (_) | .` | _| | | (_ | |_| |   / / _ \| |  | | (_) | .` |
   \___\___/|_|\_|_| |___\___|\___/|_|_\/_/ \_\_| |___\___/|_|\_|

  uVolume, GNATSTATS OLED, TachoStats, PHATSTATS TFT PC Performance Monitor & HardwareSerialMonitor Windows Client
  Rupert Hirst © 2016 - 2023 http://tallmanlabs.com http://runawaybrainz.blogspot.com/
  https://github.com/koogar/Phat-Stats  https://hackaday.io/project/19018-phat-stats-pc-performance-tft-display

  Gnat-Stats & Phat-Stats are optimised for desktop CPU's with dedicated graphics cards,
  You may get weird results on integrated GPU's (iGPU's) on laptops.*/

//--------------------------- Uncomment your Micro Processor---------------------------------

//This version is specifically for the "Seeed Studio Round Display for XIAO"
//https://wiki.seeedstudio.com/get_start_round_display/

#define Seeeduino_XIAO_ESP32S3    // touch compatible


//#define Adafruit_QTPY_ATSAMD    // not touch compatible!!!
//#define Seeeduino_XIAO_ATSAMD   // not touch compatible!!!

//#define Seeeduino_XIAO_RP2040   // not touch compatible!!!
//#define Seeeduino_XIAO_NRF52840 // not touch compatible!!!

//--------------------------- Seeeduino_XIAO_ESP32C3S3 Experimental!!! --------------------------------
/* NOTE: The XIAO ESP32C3 is very problematic when uploading "in circuit" and has to be removed for programming.
  Most of the time it has to be forced into bootloader mode (Hold BOOT button down and power cycle while uploading) */

//#define Seeeduino_XIAO_ESP32C3   // not touch compatible!!!


//>>>>>>>>>>>>>>>>>>>>>>>>>>>

/* Characters to delete from the start of the CPU/GPU name eg: Remove "Intel" or "Nvidia" to save space*/
#define cpuNameStartLength 10 //i5-9600k = 10 / i9-13900k = 19
#define gpuNameStartLength 18

//>>>>>>>>>>>>>>>>>>>>>>>>>>>
/* Manually name the CPU,*/
//#define Manual_cpuName
String set_CPUname = "xxxxxx";

/* Manually name the GPU,*/
//#define Manual_gpuName
String set_GPUname = "xxxxxx";

/* Manually set GPU ram total,*/
//#define Manual_gpuRam
String set_GPUram = "xxxxxx"; //in GB

//>>>>>>>>>>>>>>>>>>>>>>>>>>>

#define noDegree      // lose the "o"
#define smallPercent  // Use small percent symbol

//---------------------------------------------------------------------------------------

/* CPU is overclocked with Turbo boost disabled, to stop "TURBO" indicator,*/
//#define CPU_OverClocked

//>>>>>>>>>>>>>>>>>>>>>>>>>>>

/* CPU & GPU Thermal Junction Max Temperature in "c" before throttling,*/
#define CPU_TJMAX 100  //  TJ Max for the Intel 9900K    = 100c
#define GPU_TJMAX 83   //  TJ Max for the Nvidia GTX1080 = 83c

/* CPU & GPU Turbo/Boost Frequency Values in Mhz */
#define CPU_BOOST 3700  //  Enter Stock CPU Frequency eg. Intel Core i9600k = 3700MHz
#define GPU_BOOST 1683  //  Enter Stock GPU Frequency eg. MSi GamingX 1080  = 1683MHz

//-------------------------------- Show GPU Stats ------------------------------------

/* Remove Specific GPU stats in landscape mode(enable_gpuVram, enable_gpuShader),
  this helps to make room if your GPU memory is over 9999MB */

//#define enable_gpuVram
//#define enable_gpuShader
#define enable_BigGPUw      // undefine  enable_gpuShader & enable_gpuShader first

//-----------------------------
#define enable_gpuCore
#define enable_gpuPowerStats    // Nvidia Specific???
#define enable_gpuFanStatsRPM
#define enable_gpuFanStatsPerc  // this is only displayed in Portrait!!!

//----------------------------- Frequency Gains Indicator --------------------------------

/* Uncomment to enable the display of frequency gains */
#define enable_ShowFrequencyGain

/* Uncomment only one of the units to display below, MHz or Percent */
//#define ShowFrequencyGainMHz        // Show Overlock/Turbo & Boost Clock Frequency Gains in MHZ  eg: "+24MHz"
#define ShowFrequencyGainPerc       // Show Overlock/Turbo & Boost Clock Frequency Gains in Percent  eg: "+24%"

//----------------------------- Throttle/Boost Indicator --------------------------------

#define enable_ThrottleIndicator // Show TJMax Indicator 
#define enable_BoostIndicator    // Show CPU & GPU Turbo/Boost Indicator


//----------------------------- TFT Fixed or PWM Brightness -------------------------------------

/* Comment out fixedBacklight for WIO Terminal, or the screen will not turn off */
/* Uncomment   fixedBacklight for ESP32, PWM is not yet supported */

// slide dip switch slot 2 to (KE) on the back of the Seeed Round display for backlight control
//#define fixedBacklight // enable a fixed backlight (no PWM) powered from VCC

volatile int brightness_count = 60; // Start Up PWM Brightness

//------------------------------- Display Activity Shutdown -----------------------------------

/* Uncomment below to turn off the screen on serial timeout, else keep last display info eg: incase of PC Crash*/
#define enableActivityChecker

/* How long the display takes to timeout due to inactive serial data from the windows application */
#define lastActiveDelay 8000


//-------------------------------- Misco Setting -----------------------------------------


/* Display screen rotation  0, 1, 2 or 3 = (0, 90, 180 or 270 degrees)*/
int ASPECT = 1; // USB socket facing the rear, Do not adjust

//#define  RETRO_MONO    //CRT Monochrome screen
//#define  RETRO_AMBER   //CRT Amber screen
//#define  RETRO_GREEN   //CRT Green screen


/* Enable the built in LED blinking when transmitting data, can lag the button mode*/
//#define enableTX_LED

int TX_LED_Delay = 0; // TX blink delay, lags button

int baudRate     = 9600; // set serial baud rate to match that of HardwareSerialMonitor 115200 will use more resources

/* Delay screen event, to stop screen data corruption ESP8622 use 25, most others 5 will do*/
int Serial_eventDelay = 5; //


//--------------------------------------- Versions -----------------------------------------------------
/*


   v3.1.7.RND

         Seeed Round Display For XIAO

*/




//----------------------------- Debug Screen Erasers ---------------------------------------

/* Debug Screen, Update Erasers, */
//#define Debug

//-------------- Show Networks Stats when using Phatstats edition of WeeStatServer ---------------
//#define enable_LibreNet // Reserved // undefine  enable_gpuCore, enable_gpuShader, enable_gpuShader first, enable_gpuPowerStats
//--------------------------- Throttle/Boost Gains MHZ or % ------------------------------
