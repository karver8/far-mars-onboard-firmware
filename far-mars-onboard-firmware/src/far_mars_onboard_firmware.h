/*
 * far_mars_onboard_firmware.h
 *
 * Created: 12/26/2018 1:52:11 PM
 *  Author: bigbird42
 */ 


#ifndef FAR_MARS_ONBOARD_FIRMWARE_H_
#define FAR_MARS_ONBOARD_FIRMWARE_H_

//! Returns the length of an array
#define LENGTH(x) (sizeof(x)/sizeof((x)[0]))

//! All of the return values for functions in the Far Mars Onboard Firmware (FMOF)
enum FMOF_returns {
	FMOF_SUCCESS,				    //! Generic success
	FMOF_LOGGER_LOW_LOGGING_LEVEL,  //! A message was send to be logged but it's logging level was less than LOGGING_LEVEL
	FMOF_LOGGER_MESSAGE_QUEUE_FULL, //! The message queue is completely full of messages
	FMOF_LOGGER_INVALID_MSGID,	    //! An invalid message ID was passed to the message logger
	FMOF_FAILURE				    //! Generic failure
};



#endif /* FAR_MARS_ONBOARD_FIRMWARE_H_ */