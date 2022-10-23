#pragma once
#include <chrono>
#include <iostream>
#include <thread>

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
		std::chrono::time_point<std::chrono::steady_clock> myEndTime;
		std::chrono::time_point<std::chrono::steady_clock> myStartTime;
		std::chrono::duration<double> myTotalDuration;
		std::chrono::duration<float, std::milli> myDeltaTime;
	};
}

