/*authors: 
Lorenzo Tosi - lorenzo.tosi10@studio.unibo.it - 0000997569
Andrea Zavatta - andrea.zavatta3@studio.uninbo.it - 0000989124
Luca Pasini - luca.pasini9@studio.unibo.it - 0000987673
*/
#ifndef __FUNCTIONS__
#define __FUNCTIONS__

#define BTN_BLUE 11
#define BTN_GREEN 10
#define BTN_ORANGE 9
#define BTN_YELLOW 8
#define LED_BLUE 7
#define LED_GREEN 6
#define LED_ORANGE 5
#define LED_YELLOW 4
#define LED_WHITE 3
#define MIN_BRIGHTNESS 0
#define MAX_BRIGHTNESS 255
#define PORT 9600
#define LED_NUMBER 4
#define SETUP 0
#define FADING 1
#define SLEEP 2
#define RANDOM_LED 3
#define WAIT_RANDOM_LED 4
#define CHECK_BUTTON 5
#define CLICK_BUTTONS 6
#define WIN 7
#define LOSS 8
#define T1_MIN 500
#define T1_MAX 5000
#define T2_MIN 100
#define T3_MIN 1000
#define T_RANGE 2000

void switchOnRandomLeds();

bool clickAButton();

int reduceByFactor(long int temp, int difficulty, long int min_temp);

void setVariables();

void disableAllInterrupts();

void setWrongButton();

void sleep();

bool checkWin();

int checkLed(int led);

void pressBtn(int led);

void pressGreen();

void pressYellow();

void pressOrange();

void pressBlue();

void lightOut();

void fading();

void changeSleep();

void game();

int randomSeq();

void resetSeq();

void setPin();

void enableInterruptForStartingGame();

void enableInterruptForSequence();

#endif