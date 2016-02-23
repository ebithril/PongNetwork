#include "stdafx.h"
#include "NetMessageChatMessage.h"

#include "MessageType.h"

CNetMessageChatMessage::CNetMessageChatMessage() : CNetMessage()
{
	myID = char(eMessageType::MESSAGE);
}

CNetMessageChatMessage::~CNetMessageChatMessage()
{
}

void CNetMessageChatMessage::DoSerialize(StreamType& aStreamType)
{
	CNetMessage::DoSerialize(aStreamType);

	SERIALIZE(aStreamType, myMessage);
}

void CNetMessageChatMessage::DoDeSerialize(StreamType& aStreamType)
{
	CNetMessage::DoDeSerialize(aStreamType);

	DESERIALIZE(aStreamType, myMessage);
}

void CNetMessageChatMessage::SetMessage(const std::string& aString)
{
	myMessage = aString;
}

const std::string& CNetMessageChatMessage::GetChatMessage()
{
	return myMessage;
}
