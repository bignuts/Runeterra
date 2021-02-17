// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Dongyeon Park, Seungwon Seo
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Runeterra/Models/Player.hpp>

namespace Runeterra
{
PlayerType Player::GetType() const
{
    return m_type;
}
}  // namespace Runeterra