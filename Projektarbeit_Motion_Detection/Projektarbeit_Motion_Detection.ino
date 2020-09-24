#include "MPU6050_Constants.h"
#include "Changeable_Settings.h"

#include<Wire.h>

const int MPU_addr = 0x68; // I2C address of the MPU-6050
int16_t AcX, AcZ, GyY;

float expFilterAlpha[3] = {largeAlpha, mediumAlpha, smallAlpha};


float mediumExponentialFilterX;
float mediumExponentialFilterZ;
float mediumExponentialFilterGY;



void setup() {
  Serial.begin(9600);

}

void loop() {
  

}
