#pragma once

#include "NetMessage.h"

class CNetMessageConnectCallbackMessage : public CNetMessage
{
public:
	CNetMessageConnectCallbackMessage();
	~CNetMessageConnectCallbackMessage();
};