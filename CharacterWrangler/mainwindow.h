#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "charactersheet.h"

#include <QtGui/QMainWindow>
#include <QAction>

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void newCharacter(void);

private:
    void createActions(void);
    void createMenus(void);

    QAction* _newAction;
    QAction* _exitAction;

    CharacterSheet* _characterSheet;
};

#endif // MAINWINDOW_H
