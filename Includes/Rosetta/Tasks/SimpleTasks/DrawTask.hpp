// This code is based on Sabberstone project.
// Copyright (c) 2017-2019 SabberStone Team, darkfriend77 & rnilva
// RosettaStone is hearthstone simulator using C++ with reinforcement learning.
// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

#ifndef ROSETTASTONE_DRAW_TASK_HPP
#define ROSETTASTONE_DRAW_TASK_HPP

#include <Rosetta/Tasks/ITask.hpp>

namespace RosettaStone::SimpleTasks
{
//!
//! \brief DrawTask class.
//!
//! This class represents the task for drawing card(s) from deck at random.
//!
class DrawTask : public ITask
{
 public:
    //! Constructs task with given \p amount and \p toStack.
    //! \param amount The amount to draw card.
    //! \param toStack A flag to store card to stack.
    explicit DrawTask(int amount, bool toStack = false);

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

    int m_amount = 0;
    bool m_toStack = false;
};
}  // namespace RosettaStone::SimpleTasks

#endif  // ROSETTASTONE_DRAW_TASK_HPP
