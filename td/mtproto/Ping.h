//
// Copyright Aliaksei Levin (levlam@telegram.org), Arseny Smirnov (arseny30@gmail.com) 2014-2019
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
#pragma once

#include "td/mtproto/AuthData.h"
#include "td/mtproto/RawConnection.h"

#include "td/actor/actor.h"
#include "td/actor/PromiseFuture.h"

#include "td/utils/common.h"

namespace td {
namespace mtproto {

ActorOwn<> create_ping_actor(string debug, unique_ptr<RawConnection> raw_connection, unique_ptr<AuthData> auth_data,
                             Promise<unique_ptr<RawConnection>> promise, ActorShared<> parent);

}
}  // namespace td
