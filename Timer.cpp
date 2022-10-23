#include "pch.h"
#include "Timer.h"

namespace CommonUtilities
{
	Timer::Timer()
		:myStartTime(std::chrono::high_resolution_clock::now())
		, myEndTime(myStartTime)
		, myTotalDuration(0)
		, myDeltaTime(0)
	{
	}

	void Timer::Update()
	{


		myTotalDuration = std::chrono::high_resolution_clock::now() - myStartTime;
		for (size_t i = 0; i < 10; i++)
		{
			myEndTime = std::chrono::high_resolution_clock::now();
			myDeltaTime = std::chrono::high_resolution_clock::now() - myEndTime;
			std::cout << "DeltaTime: " << GetDeltaTime()
				<< "\t Total time: " << GetTotalTime() << "\n";
		}
		std::this_thread::sleep_for(std::chrono::seconds(1));
		system("cls");


	}

	float Timer::GetDeltaTime() const
	{
		return myDeltaTime.count();
	}

	double Timer::GetTotalTime() const
	{
		return myTotalDuration.count();
	}

}