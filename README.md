# Planning and control for car-like vehicles

## Overview

Pure pursuit controller and Reeds-Shepp sampling based planner for navigation in SE(2) space. This package has been mainly intended for car-like vehicles, although it can be used with mobile bases too (in that case you might want to check out move_base from ROS).

How is this package different from other SE(2) planning/control packages? 

* Provides planning and control for car like vehicles which are non-holonomic
* Correctly handles both forward and reverse driving
* Comes with a minimal set of dependencies
* Core algorithmics is separated from ros dependent code
* Tested on real-hardware
* Comes with a car example
* Integrated with [grid_map](https://github.com/ANYbotics/grid_map) package
* Features visualizatios and rviz planning interface
* Easily extensible

**Warning:** At the moment, this planning and control framework uses geometric planners which makes it unsuitable for high-speed driving. It is meant to be used fow slow maneuvers, e.g. parking maneuvers. 

**Author:** Edo Jelavic

**Maintainer:** Edo Jelavic, [jelavice@ethz.ch](jelavice@ethz.ch)

| Navigation with prius        | Navigation with Menzi Muck M545 |
|:----------------------:|:-----------------:| 
| [<img src="car_demo/doc/car.gif" width="340" height="250">](car_demo/doc/car.gif)  |[<img src="car_demo/doc/m545.gif" width="340" height="250">](car_demo/doc/m545.gif)  |

## Publications
 Coming soon

## Documentation

This package is split into smaller units each of which features it's own README. Follow   these links for more info:

* [car_demo](car_demo/README.md)
* [pure_pursuit_core](pure_pursuit_core/README.md)
* [pure_pursuit_ros](pure_pursuit_ros/README.md)
* [se2_navigation_msgs](se2_navigation_msgs/README.md)
* [se2_planning](se2_planning/README.md)
* [se2_planning_ros](se2_planning_ros/README.md)
* [se2_planning_rviz](se2_planning_rviz/README.md)
* [se2_visualization_ros](se2_visualization_ros/README.md)

## Installation
Refer to [car_demo](car_demo/README.md) for the details.

## Usage
Run the main demo with:   
`roslaunch car_demo demo_autonomous.launch`   
See [car_demo](car_demo/README.md) for the details.

## Coming soon
* Mobile base demo
