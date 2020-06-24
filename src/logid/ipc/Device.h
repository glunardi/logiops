/*
 * Copyright 2019-2020 PixlOne
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef LOGID_IPC_DEVICE_H
#define LOGID_IPC_DEVICE_H

#include "../Device.h"
#include "dbus_server.h"

namespace logid::IPC
{
    using namespace pizza::pixl::logiops;

    class Device : public Device_adaptor,
                 public DBus::IntrospectableAdaptor,
                 public DBus::PropertiesAdaptor,
                 public DBus::ObjectAdaptor
    {
    public:
        Device(DBus::Connection &connection, logid::Device* device);
    private:
        logid::Device* _device;
    };
}

#endif //LOGID_IPC_UTIL_H