#include "stanbrairy/controller/deadband.h"

#include <cmath>

#include <frc/MathUtil.h>

double stanbrairy::deadband(double iInput, double iThreshold, bool iSquared)
{
	if (std::abs(iInput) < iThreshold) {
		return 0.0;
	}
	if (!iSquared) {
		// ((iInput > 0) - (iInput < 0)) gives us the sign of iInput
		// Then we scale the value of iInput over the range [-1; iThreshold] or [iTheshold; 1]
		return (1 / (1 - iThreshold)) * (iInput - (((iInput > 0) - (iInput < 0)) * iThreshold));
	}
	// Same as above but we square the value and keep the sign of the initial iInput
	return frc::CopyDirectionPow((1 / (1 - iThreshold)) * (iInput - (((iInput > 0) - (iInput < 0)) * iThreshold)), 2);
}
