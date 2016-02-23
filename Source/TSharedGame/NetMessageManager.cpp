#include "stdafx.h"
#include "NetMessageManager.h"

CNetMessageManager::CNetMessageManager()
{
	myServerID = 0;
	mySenderID = 0;
}

CNetMessageManager::~CNetMessageManager()
{
}

void CNetMessageManager::SetSenderID(unsigned short aSenderID)
{
	mySenderID = aSenderID;
}

void CNetMessageManager::SetServerID(unsigned short aServerID)
{
	myServerID = aServerID;
}
