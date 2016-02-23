#include "stdafx.h"
#include "NetMessagePingCallbackMessage.h"
#include "MessageType.h"

CNetMessagePingCallbackMessage::CNetMessagePingCallbackMessage() : CNetMessage()
{
	myID = char(eMessageType::PING_CALLBACK);
}

CNetMessagePingCallbackMessage::~CNetMessagePingCallbackMessage()
{
}