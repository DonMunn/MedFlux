/****************************************************************************
** main MedFlux for TouchScreen
** main.cpp
** DDM 06-10-2017
** Designed for Touch screen Method development for TransDermDrip
** 2012 - 2017
** medflux is core of application to develop MedFlux Methods
/****************************************************************************/

#include <stdio.h>

#include <QCoreApplication>
#include <QApplication>
#include <QHeaderView>
#include <QStandardItemModel>
#include <QTableView>

#include "medflux.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MedFlux method;

    return app.exec();
}


