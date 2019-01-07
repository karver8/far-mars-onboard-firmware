/*
 * logger.h
 *
 * Created: 12/26/2018 12:47:35 PM
 *  Author: David Knight
 */ 


#ifndef LOGGER_H_
#define LOGGER_H_

#include <stdint.h>
#include "far_mars_onboard_firmware.h"
#include "messages.h"
#include "timestamp.h"

#warning SD Card and FatFS have not yet been implemented

//! @brief Logging levels for messages sent to SD card
enum loggingLevels {
	LOG_LEVEL_ALL = 0,
	LOG_LEVEL_DEBUG = 10,
	LOG_LEVEL_INFO = 20,
	LOG_LEVEL_WARN = 30,
	LOG_LEVEL_ERROR = 40,
	LOG_LEVEL_FATAL = 50,
	LOG_LEVEL_OFF = 255
};

//! @brief Current logging level
#define LOGGING_LEVEL LOG_LEVEL_ALL
//! @brief Length of the message queue
#define MESSAGE_QUEUE_LENGTH 25
//! @brief Length of the message queue
#define STRING_QUEUE_LENGTH 25

void loggerTask(void *pvParameters);
int logSensorMessage(struct sensorMessage *msg, uint8_t level);
int logString(const char *msg, uint8_t level);

#endif /* LOGGER_H_ */