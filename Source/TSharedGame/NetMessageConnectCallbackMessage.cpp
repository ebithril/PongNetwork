#include "stdafx.h"
#include "NetMessageConnectCallbackMessage.h"
#include "MessageType.h"

CNetMessageConnectCallbackMessage::CNetMessageConnectCallbackMessage() : CNetMessage()
{
	myID = char(eMessageType::CONNECT_CALLBACK);
}

CNetMessageConnectCallbackMessage::~CNetMessageConnectCallbackMessage()
{
}