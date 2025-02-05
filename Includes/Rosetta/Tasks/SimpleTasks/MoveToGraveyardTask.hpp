// This code is based on Sabberstone project.
// Copyright (c) 2017-2019 SabberStone Team, darkfriend77 & rnilva
// RosettaStone is hearthstone simulator using C++ with reinforcement learning.
// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

#ifndef ROSETTASTONE_MOVE_TO_GRAVEYARD_TASK_HPP
#define ROSETTASTONE_MOVE_TO_GRAVEYARD_TASK_HPP

#include <Rosetta/Tasks/ITask.hpp>

namespace RosettaStone::SimpleTasks
{
//!
//! \brief MoveToGraveyardTask class.
//!
//! This class represents the task for moving entities to graveyard.
//!
class MoveToGraveyardTask : public ITask
{
 public:
    //! Constructs task with given \p entityType.
    //! \param entityType The type of entity.
    explicit MoveToGraveyardTask(EntityType entityType);

    //! Returns task ID.
    //! \return Task ID.
    TaskID GetTaskID() const override;

 private:
    //! Processes task logic internally and returns meta data.
    //! \param player The player to run task.
    //! \return The result of task processing.
    TaskStatus Impl(Player& player) override;

    //! Internal method of Clone().
    //! \return The cloned task.
    ITask* CloneImpl() override;
};
}  // namespace RosettaStone::SimpleTasks

#endif  // ROSETTASTONE_MOVE_TO_GRAVEYARD_TASK_HPP
