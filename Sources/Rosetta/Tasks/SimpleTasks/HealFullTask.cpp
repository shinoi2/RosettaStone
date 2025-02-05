// This code is based on Sabberstone project.
// Copyright (c) 2017-2019 SabberStone Team, darkfriend77 & rnilva
// RosettaStone is hearthstone simulator using C++ with reinforcement learning.
// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

#include <Rosetta/Tasks/SimpleTasks/HealFullTask.hpp>
#include <Rosetta/Tasks/SimpleTasks/IncludeTask.hpp>

namespace RosettaStone::SimpleTasks
{
HealFullTask::HealFullTask(EntityType entityType) : ITask(entityType)
{
    // Do nothing
}

TaskID HealFullTask::GetTaskID() const
{
    return TaskID::HEAL_FULL;
}

TaskStatus HealFullTask::Impl(Player& player)
{
    auto entities =
        IncludeTask::GetEntities(m_entityType, player, m_source, m_target);

    for (auto& entity : entities)
    {
        auto character = dynamic_cast<Character*>(entity);
        character->TakeFullHeal(*m_source);
    }

    return TaskStatus::COMPLETE;
}

ITask* HealFullTask::CloneImpl()
{
    return new HealFullTask(m_entityType);
}
}  // namespace RosettaStone::SimpleTasks
