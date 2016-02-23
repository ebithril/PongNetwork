#pragma once

#include "NetMessage.h"

class CNetMessageChatMessage : public CNetMessage
{
public:
	CNetMessageChatMessage();
	~CNetMessageChatMessage();

	const std::string& GetChatMessage();
	void SetMessage(const std::string& aString);

protected:
	virtual void DoSerialize(StreamType& aStreamType) override;
	virtual void DoDeSerialize(StreamType& aStreamType) override;

	std::string myMessage;
};