#include "stdafx.h"
#include "NetMessagePingMessage.h"
#include "MessageType.h"

CNetMessagePingMessage::CNetMessagePingMessage() : CNetMessage()
{
	myID = char(eMessageType::PING);
}

CNetMessagePingMessage::~CNetMessagePingMessage()
{
}