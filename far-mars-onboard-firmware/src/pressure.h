/*
 * pressure.h
 *
 * Created: 1/2/2019 2:58:16 PM
 *  Author: David Knight
 */ 


#ifndef PRESSURE_H_
#define PRESSURE_H_

#include "messages.h"

enum pressureSensors {
	P1,
	P2,
	P3,
	numPressureSensors
};

int pressureInit(void);
int pressureStartConversion(uint8_t wait);
int pressureReadConversion(struct sensorMessage *pressures, uint8_t wait);
int pressureRawToPSIA(struct sensorMessage *RAW, struct sensorMessage *PSIA);
int pressureRawToPSIG(struct sensorMessage *RAW, struct sensorMessage *PSIG);
int pressurePSIAToPSIG(struct sensorMessage *PSIA, struct sensorMessage *PSIG);
int pressurePSIGToPSIA(struct sensorMessage *PSIG, struct sensorMessage *PSIA);

#endif /* PRESSURE_H_ */