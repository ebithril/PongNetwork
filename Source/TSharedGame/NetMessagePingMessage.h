#pragma once

#include "NetMessage.h"

class CNetMessagePingMessage : public CNetMessage
{
public:
	CNetMessagePingMessage();
	~CNetMessagePingMessage();
};