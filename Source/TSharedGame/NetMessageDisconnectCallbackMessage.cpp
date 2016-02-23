#include "stdafx.h"
#include "NetMessageDisconnectCallbackMessage.h"
#include "MessageType.h"

CNetMessageDisconnectCallbackMessage::CNetMessageDisconnectCallbackMessage() : CNetMessage()
{
	myID = char(eMessageType::DISCONNECT_CALLBACK);
}

CNetMessageDisconnectCallbackMessage::~CNetMessageDisconnectCallbackMessage()
{
}