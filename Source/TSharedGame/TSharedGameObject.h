#pragma once



class TSharedGameObject
{
public:
	TSharedGameObject();
	~TSharedGameObject();

	virtual void Update(float aDeltaTime) = 0;
};