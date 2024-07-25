#include "globals.hpp"

void auton::leftWP() {printf("leftWP yipeeee!!!1!!\n");}

rd::Selector selector({
    {"Left WP", &auton::leftWP}
});

Intake intake(std::make_unique<pros::Motor>(-15, pros::v5::MotorGears::green));
Hooks hooks(std::make_unique<pros::Motor>(-20, pros::v5::MotorGears::green));
Conveyor conveyor(intake, hooks);

//Arm arm(
//        std::make_unique<pros::Motor>(3, pros::v5::MotorGears::blue),
//        std::make_unique<pros::Rotation>(6),
//        -0.25,
//        std::make_unique<pros::Motor>(-19, pros::v5::MotorGears::blue),
//        std::make_unique<pros::Rotation>(14),
//        -0.25,
//        lemlib::PID {5, 0, 3},
//        -20
//);