/*
    This file is part of CuteBode.

    CuteBode is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    CuteBode is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with CuteBode.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "trf.h"

Trf::Trf(QObject *parent) :
    QObject(parent)
{
    this->type = Type1;
    this->tau = 1;
}

Trf::Type Trf::getType()
{
    return this->type;
}

void Trf::setType(Type t)
{
    this->type = t;
}

double Trf::getTau()
{
    return this->tau;
}

void Trf::setTau(double t)
{
    this->tau = t;
}
