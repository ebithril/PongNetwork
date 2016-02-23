#pragma once

#include "NetMessage.h"

class CNetMessagePingCallbackMessage : public CNetMessage
{
public:
	CNetMessagePingCallbackMessage();
	~CNetMessagePingCallbackMessage();
};