#pragma once

#include "NetMessage.h"

class CNetMessageDisconnectCallbackMessage : public CNetMessage
{
public:
	CNetMessageDisconnectCallbackMessage();
	~CNetMessageDisconnectCallbackMessage();
};