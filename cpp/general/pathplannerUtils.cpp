#include "stanbrairy/general/pathplannerUtils.h"

#include <pathplanner/lib/commands/PathPlannerAuto.h>

frc::Pose2d stanbrairy::pathplannerUtils::getStartingPoseOfAuto(std::string iAutoName)
{
	// wPaths is of type std::vector<std::shared_ptr<pathplanner::PathPlannerPath>>
	auto wPaths = pathplanner::PathPlannerAuto::getPathGroupFromAutoFile(iAutoName);
	return wPaths.front().get()->getStartingHolonomicPose().value(); // Return the first pose of the first path's poses
}
