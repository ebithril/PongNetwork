#pragma once

#include "NetMessage.h"

class CNetMessageDisconnectMessage : public CNetMessage
{
public:
	CNetMessageDisconnectMessage();
	~CNetMessageDisconnectMessage();
};