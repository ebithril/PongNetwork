#include "stdafx.h"
#include "NetMessageDisconnectMessage.h"
#include "MessageType.h"

CNetMessageDisconnectMessage::CNetMessageDisconnectMessage() : CNetMessage()
{
	myID = char(eMessageType::DISCONNECT);
}

CNetMessageDisconnectMessage::~CNetMessageDisconnectMessage()
{
}