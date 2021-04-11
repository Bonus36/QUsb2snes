/*
 * Copyright (c) 2018 Sylvain "Skarsnik" Colinet.
 *
 * This file is part of the QUsb2Snes project.
 * (see https://github.com/Skarsnik/QUsb2snes).
 *
 * QUsb2Snes is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * QUsb2Snes is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with QUsb2Snes.  If not, see <https://www.gnu.org/licenses/>.
 */


#include <QLoggingCategory>
#include <QTcpSocket>
#include <QTimer>

#include "emunetworkaccessfactory.h"

Q_LOGGING_CATEGORY(log_emunwafactory, "Emu NWA Factory")
#define sDebug() qCDebug(log_emunwafactory)


// Placeholder
const quint16 emuNetworkAccessStartPort = 68200;

EmuNetworkAccessFactory::EmuNetworkAccessFactory()
{

}


QStringList EmuNetworkAccessFactory::listDevices()
{
    return QStringList();
}

ADevice *EmuNetworkAccessFactory::attach(QString deviceName)
{
    return nullptr;
}

bool EmuNetworkAccessFactory::deleteDevice(ADevice *)
{
    return false;
}

QString EmuNetworkAccessFactory::status()
{
    return QString();
}

QString EmuNetworkAccessFactory::name() const
{
    return "EmuNetworkAccess";
}


bool EmuNetworkAccessFactory::hasAsyncListDevices()
{
    return true;
}

bool EmuNetworkAccessFactory::asyncListDevices()
{

    return true;
}
