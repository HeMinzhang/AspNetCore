// Copyright (c) .NET Foundation. All rights reserved.
// Licensed under the Apache License, Version 2.0. See License.txt in the project root for license information.

#pragma once

namespace signalr
{
    enum class connection_state
    {
        connecting,
        connected,
        disconnecting,
        disconnected
    };
}
