#pragma once
class ConsoleUpdater
{
	friend class EngineCore;

public:
	//isPendingKill
	bool IsPendingKill()
	{
		
	}
	//GetCore
	class EngineCore* GetCore()
	{
		
	}
	//Destroy
	void Destroy()
	{
		
	}
	//Update �������̵�
	virtual void Update()
	{

	}
private:
	bool DeathValue = false;
	class EngineCore* Core = nullptr;

	void SetCore(EngineCore* _Core)
	{
		Core = _Core;
	}
};

