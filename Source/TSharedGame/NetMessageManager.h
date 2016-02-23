#pragma once

class CNetMessageManager
{
public:
	CNetMessageManager();
	~CNetMessageManager();

	template <typename T>
	T CreateMessage();

	void SetSenderID(unsigned short aSenderID);
	void SetServerID(unsigned short aServerID);
private:
	unsigned short myServerID;
	unsigned short mySenderID;
};

template <typename T>
T CNetMessageManager::CreateMessage()
{
	T messageToCreate;
	messageToCreate.SetSenderID(mySenderID);
	messageToCreate.SetTargetID(myServerID);

	return messageToCreate;
}