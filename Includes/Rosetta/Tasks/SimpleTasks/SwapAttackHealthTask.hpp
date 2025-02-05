// This code is based on Sabberstone project.
// Copyright (c) 2017-2019 SabberStone Team, darkfriend77 & rnilva
// RosettaStone is hearthstone simulator using C++ with reinforcement learning.
// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

#ifndef ROSETTASTONE_SWAP_ATTACK_HEALTH_TASK_HPP
#define ROSETTASTONE_SWAP_ATTACK_HEALTH_TASK_HPP

#include <Rosetta/Tasks/ITask.hpp>

namespace RosettaStone::SimpleTasks
{
//!
//! \brief SwapAttackHealthTask class.
//!
//! This class represents the task for swapping attack and health of entity.
//!
class SwapAttackHealthTask : public ITask
{
 public:
    //! Constructs task with given \p entityType, \p cardID .
    //! \param entityType The entity type of target to swap.
    //! \param enchantmentID The ID of enchantment card.
    explicit SwapAttackHealthTask(EntityType entityType,
                                  std::string enchantmentID);

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

    std::string m_enchantmentID;
};
}  // namespace RosettaStone::SimpleTasks

#endif  // ROSETTASTONE_SWAP_ATTACK_HEALTH_TASK_HPP
