/****************************************************************************
** MedFlux  for TouchScreen
** HeaderFile
** DDM 06-10-2017
** Designed for Touch screen Method development for MedFlux Instrument
** 2012 - June. 2017
** medflux is core application
****************************************************************************/


#ifndef MEDFLUX_H
#define MEDFLUX_H
#include <QtCore>
#include <QMainWindow>
#include <QStandardItemModel>
#include <QFileDialog>
#include <QMessageBox>
#include <QVariant>
#include <QHostInfo>
#include <QTimeEdit>
#include "ui_medflux.h"

#include "globals.h"
#include "methodtablemodel.h"
#include "methodrun.h"
#include "spinboxdelegate.h"

// #include "soft_keyboard/softkeyboard.h"

namespace Ui {
class MedFlux;
}

class MedFlux : public QMainWindow
{
    Q_OBJECT
public:
    MedFlux(QWidget *parent = 0);
    ~MedFlux();

private:
    Ui::NewMethod *ui;
    MethodRun *methodManager;
    MethodTableModel model;
    QStandardItemModel *posDatModel;
    //HMSDelegate delegate;
    //SoftKeyboard *softKeyboard;
    SettingsDialog *serialComms;
//    QLabel *mPumpStat;

    int settingsLoaded;

protected:
    void setupActions();
    void setupTables();
    void setupRecentSettings();
    void setupRecentFiles();
    void setupSoftKeyboard();

    void writeSettings();
    void readSettings();

    bool mayDiscardDocument();
    void saveFile(const QString&);

    void closeEvent(QCloseEvent *event);

protected slots:
    void newFile();
    void loadFile();
    void saveFile();
    void saveFileAs();
    void saveSettingsFile();
    void loadSettingsFile(int num = 0);
    void undo();
    void redo();
    void copy();
    void about();

    void cleanup();

    void pos_one(double in);
    void pos_nine(double in);

};

#endif // MEDFLUX_H
