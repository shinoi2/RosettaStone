// Copyright (c) 2018 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef HEARTHSTONEPP_EFFECTS_H
#define HEARTHSTONEPP_EFFECTS_H

#include <hspp/Enchants/Effect.h>

namespace Hearthstonepp
{
//!
//! \brief Effects class.
//!
//! This class lists specific effects such as Taunt, Poisonous and Stealth.
//!
class Effects
{
 public:
    //! A minion ability which forces the opposing player to direct any melee
    //! attacks toward enemy targets with this ability.
    inline static Effect Taunt = Effect(GameTag::TAUNT, EffectOperator::SET, 1);

    //! A minion ability that causes any minion damaged by them to be destroyed.
    inline static Effect Poisonous =
        Effect(GameTag::POISONOUS, EffectOperator::SET, 1);

    //! An ability which causes a minion to ignore the next damage it receives.
    inline static Effect DivineShield =
        Effect(GameTag::DIVINE_SHIELD, EffectOperator::SET, 1);

    //! An ability which allows a character to attack twice per turn.
    inline static Effect WindFury =
        Effect(GameTag::WINDFURY, EffectOperator::SET, 1);

    //! A minion ability which prevents that minion from being the target of
    //! enemy attacks, spells and effects until they attack.
    inline static Effect Stealth =
        Effect(GameTag::STEALTH, EffectOperator::SET, 1);
};
};  // namespace Hearthstonepp

#endif  // HEARTHSTONEPP_EFFECTS_H