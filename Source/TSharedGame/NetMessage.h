#pragma once

#include "SerializeHelper.h"
#define SERIALIZE(aStream, aType) serialize(aType, aStream)
#define DESERIALIZE(aStream, aType) aType = deserialize<decltype(aType)>(aStream)

class CNetMessage
{
public:
	CNetMessage();
	virtual ~CNetMessage();

	void PackMessage();
	void UnpackMessage(char* aMessage, int aSize);

	void SetSenderID(unsigned short aSenderID);
	void SetTargetID(unsigned short aTargetID);

	unsigned short GetSenderID() const;
	unsigned short GetTargetID() const;
	unsigned int GetTimeStamp() const;

	StreamType myStream;
protected:
	virtual void DoSerialize(StreamType& aStreamType);
	virtual void DoDeSerialize(StreamType& aStreamType);
	
	unsigned int myTimeStamp;
	unsigned short mySenderID;
	unsigned short myTargetID;
	char myID;
};