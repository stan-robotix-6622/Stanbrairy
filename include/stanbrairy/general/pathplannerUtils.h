#pragma once

#include <string>

#include <frc/geometry/Pose2d.h>

namespace stanbrairy
{
	namespace pathplannerUtils
	{
		frc::Pose2d getStartingPoseOfAuto(std::string iAutoName);
	} // namespace pathplannerUtils
} // namespace stanbrairy
