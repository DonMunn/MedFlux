#-------------------------------------------------
#
# Project created by QtCreator 2016-06-10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += widgets serialport
    QT += widgets
    QT += testlib
    QT += network
} else {
    include($$QTSERIALPORT_PROJECT_ROOT/src/serialport/qt4support/serialport.prf)
}


TARGET = MedFlux
TEMPLATE = app
target.path=/home/pi/MedFlux
INSTALLS += target


SOURCES += main.cpp\
    medflux.cpp \
    globals.cpp \
    methodrun.cpp \
    methodtablemodel.cpp \
    serialhandler.cpp \
    settingsdialog.cpp \
    spinboxdelegate.cpp

HEADERS  += medflux.h \
    globals.h \
    methodrun.h \
    methodtablemodel.h \
    serialhandler.h \
    settingsdialog.h \
    spinboxdelegate.h

FORMS    += medflux.ui \
    settingsdialog.ui
