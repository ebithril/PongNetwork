#pragma once

#include "NetMessage.h"

class CNetMessageConnectMessage : public CNetMessage
{
public:
	CNetMessageConnectMessage();
	~CNetMessageConnectMessage();

	void SetName(const std::string& aName);
	const std::string GetName() const;
protected:
	virtual void DoSerialize(StreamType& aStreamType) override;
	virtual void DoDeSerialize(StreamType& aStreamType) override;

	std::string myName;
};