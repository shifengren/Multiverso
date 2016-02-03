#ifndef MULTIVERSO_CONTROLLER_H_
#define MULTIVERSO_CONTROLLER_H_

#include "actor.h"
#include "message.h"

namespace multiverso {

class Controller : public Actor {
public:
  Controller();
  ~Controller();
private:
  void ProcessBarrier(MessagePtr& msg);
  void ProcessRegister(MessagePtr& msg);

  // TODO(feiga): may delete the following
  class RegisterController;
  RegisterController* register_controller_;
  class BarrierController;
  BarrierController* barrier_controller_;
  class ClockController;
  ClockController* clock_controller_;
};

} // namespace multiverso

#endif // MULTIVERSO_CONTROLLER_H_