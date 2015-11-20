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

#ifndef PLOT_H
#define PLOT_H

#include <QFrame>
#include <QPainter>

class Plot : public QFrame
{
    Q_OBJECT

public:
    explicit Plot(QWidget *parent = 0);

private:
    QPen pen;

protected:
    void paintEvent(QPaintEvent *);
};

#endif // PLOT_H