/*
 * ProgressValidator.cpp
 *
 *  Created on: Mar 22, 2020
 *      Author: jelavice
 */
#include "pure_pursuit_core/path_tracking/ProgressValidator.hpp"

#include "pure_pursuit_core/Path.hpp"
#include "pure_pursuit_core/math.hpp"

namespace pure_pursuit {

bool ProgressValidator::isPathSegmentTrackingFinished(const PathSegment& pathSegment, const RobotState& currentState) {
  const Point currPosition = currentState.pose_.position_;
  const Point goalPosition = pathSegment.point_.back().position_;
  const bool isCloseEnough = (currPosition - goalPosition).norm() < goalDistanceTolerance_;
  return isCloseEnough || isPastLastPoint(pathSegment, currPosition);
}
bool ProgressValidator::isPathTrackingFinished(const Path& path, const RobotState& currentState, unsigned int currentSegment) {
  const bool isTrackingLastSegment = path.segment_.size() - 1 == currentSegment;
  return isPathSegmentTrackingFinished(path.segment_.at(currentSegment), currentState) && isTrackingLastSegment;
}

void ProgressValidator::setGoalDistanceTolerance(double tolerance) {
  goalDistanceTolerance_ = tolerance;
}

}  // namespace pure_pursuit