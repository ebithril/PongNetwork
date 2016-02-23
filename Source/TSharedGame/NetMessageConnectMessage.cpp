#include "stdafx.h"
#include "NetMessageConnectMessage.h"
#include "MessageType.h"

CNetMessageConnectMessage::CNetMessageConnectMessage() : CNetMessage()
{
	myID = char(eMessageType::CONNECT);
}

CNetMessageConnectMessage::~CNetMessageConnectMessage()
{
}

void CNetMessageConnectMessage::SetName(const std::string& aName)
{
	myName = aName;
}

const std::string CNetMessageConnectMessage::GetName() const
{
	return myName;
}

void CNetMessageConnectMessage::DoSerialize(StreamType& aStreamType)
{
	CNetMessage::DoSerialize(aStreamType);

	SERIALIZE(aStreamType, myName);
}

void CNetMessageConnectMessage::DoDeSerialize(StreamType& aStreamType)
{
	CNetMessage::DoDeSerialize(aStreamType);

	DESERIALIZE(aStreamType, myName);
}