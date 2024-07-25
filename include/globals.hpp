#pragma once

#include "robodash/api.h"
#include "subsys/intake.hpp"
#include "subsys/arm.hpp"

namespace auton {
    void leftWP();
}
extern rd::Selector selector;

extern Intake intake;
extern Hooks hooks;
extern Conveyor conveyor;

extern Arm arm;
