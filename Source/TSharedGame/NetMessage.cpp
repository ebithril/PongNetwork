#include "stdafx.h"
#include "NetMessage.h"
#include "MessageType.h"
#include <time.h>

CNetMessage::CNetMessage()
{
	myTimeStamp = unsigned int(time(0));
	myID = char(eMessageType::BROKEN);
	mySenderID = 0;
	myTargetID = 0;
}

CNetMessage::~CNetMessage()
{
}

void CNetMessage::PackMessage()
{
	myStream.clear();
	DoSerialize(myStream);
}

void CNetMessage::UnpackMessage(char* aMessage, int aSize)
{
	myStream.clear();

	for (int i = 0; i < aSize; i++)
	{
		myStream.push_back(aMessage[i]);
	}

	DoDeSerialize(myStream);
}

void CNetMessage::SetSenderID(unsigned short aSenderID)
{
	mySenderID = aSenderID;
}

void CNetMessage::SetTargetID(unsigned short aTargetID)
{
	myTargetID = aTargetID;
}

unsigned short CNetMessage::GetSenderID() const
{
	return mySenderID;
}

unsigned short CNetMessage::GetTargetID() const
{
	return myTargetID;
}

unsigned int CNetMessage::GetTimeStamp() const
{
	return myTimeStamp;
}

void CNetMessage::DoSerialize(StreamType& aStreamType)
{
	SERIALIZE(aStreamType, myID);
	SERIALIZE(aStreamType, myTimeStamp);
	SERIALIZE(aStreamType, mySenderID);
	SERIALIZE(aStreamType, myTargetID);
}

void CNetMessage::DoDeSerialize(StreamType& aStreamType)
{
	DESERIALIZE(aStreamType, myID);
	DESERIALIZE(aStreamType, myTimeStamp);
	DESERIALIZE(aStreamType, mySenderID);
	DESERIALIZE(aStreamType, myTargetID);
}