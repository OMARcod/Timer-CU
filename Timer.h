#pragma once
#include <chrono>
#include <iostream>

namespace CommonUtilities
{
	class Timer
	{
	public:
		Timer();
		Timer(const Timer& aTimer) = delete;
		Timer& operator=(const Timer& aTimer) = delete;

		void Update();

		float GetDeltaTime() const;
		double GetTotalTime() const;

	private:
		std::chrono::time_point<std::chrono::steady_clock> myLastFrameTime;
		std::chrono::time_point<std::chrono::steady_clock> myTotalTime;
	};
}

