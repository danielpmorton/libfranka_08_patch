#include <franka/control_types.h>

namespace franka {

Torques::Torques(std::array<double, 7> torques)
  : tau_J(std::move(torques)) {
}

Torques::Torques(std::initializer_list<double> torques) {
  if (torques.size() != tau_J.size()) {
    throw std::invalid_argument("Invalid number of elements in tau_J.");
  }
  std::copy(torques.begin(), torques.end(), tau_J.begin());
}

JointValues::JointValues(std::array<double, 7> joint_values)
  : q(std::move(joint_values)) {
}

JointValues::JointValues(std::initializer_list<double> joint_values) {
  if (joint_values.size() != q.size()) {
    throw std::invalid_argument("Invalid number of elements in joint_values.");
  }
  std::copy(joint_values.begin(), joint_values.end(), q.begin());
}

JointVelocities::JointVelocities(std::array<double, 7> joint_velocities)
  : dq(std::move(joint_velocities)) {
}

JointVelocities::JointVelocities(std::initializer_list<double> joint_velocities) {
  if (joint_velocities.size() != dq.size()) {
    throw std::invalid_argument("Invalid number of elements in joint_velocities.");
  }
  std::copy(joint_velocities.begin(), joint_velocities.end(), dq.begin());
}

CartesianPose::CartesianPose(std::array<double, 16> pose)
  : O_T_EE(std::move(pose)) {
}

CartesianPose::CartesianPose(std::initializer_list<double> pose) {
  if (pose.size() != O_T_EE.size()) {
    throw std::invalid_argument("Invalid number of elements in pose.");
  }
  std::copy(pose.begin(), pose.end(), O_T_EE.begin());
}

CartesianVelocities::CartesianVelocities(std::array<double, 6> velocities)
  : O_dP_EE(std::move(velocities)) {
}

CartesianVelocities::CartesianVelocities(std::initializer_list<double> velocities) {
  if (velocities.size() != O_dP_EE.size()) {
    throw std::invalid_argument("Invalid number of elements in velocities.");
  }
  std::copy(velocities.begin(), velocities.end(), O_dP_EE.begin());
}

} // namespace franka
