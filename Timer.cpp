#include "pch.h"
#include "Timer.h"

namespace CommonUtilities
{
	Timer::Timer()
		:myTotalTime(std::chrono::high_resolution_clock::now())
		, myLastFrameTime(myTotalTime)
	{
	}

	void Timer::Update()
	{
		myLastFrameTime = std::chrono::high_resolution_clock::now();
	}

	float Timer::GetDeltaTime() const
	{
		return std::chrono::duration<float>(std::chrono::high_resolution_clock::now() - myLastFrameTime).count();
	}

	double Timer::GetTotalTime() const
	{
		return std::chrono::duration<float>(std::chrono::high_resolution_clock::now() - myTotalTime).count();
	}

}