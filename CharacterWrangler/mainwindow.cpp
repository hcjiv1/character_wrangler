#include "mainwindow.h"
#include "charactersheet.h"

#include <QMenuBar>
#include <QMenu>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    createActions();
    createMenus();

    _characterSheet = new CharacterSheet(this);
    setCentralWidget(_characterSheet);
}

MainWindow::~MainWindow()
{
    
}

void MainWindow::
createActions(void)
{
    _exitAction = new QAction(tr("E&xit"), this);
    _exitAction->setShortcut(tr("Ctrl-Q"));
    connect(_exitAction, SIGNAL(triggered()), this, SLOT(close()));

    _newAction = new QAction(tr("&New"), this);
    _newAction->setStatusTip("Create New Character");
    _newAction->setToolTip("Create New Character");
    _newAction->setShortcut(tr("Ctrl-N"));
    connect(_newAction, SIGNAL(triggered()), this, SLOT(newCharacter()));
}

void MainWindow::
createMenus(void)
{
    QMenu* fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(_newAction);
    fileMenu->addSeparator();
    fileMenu->addAction(_exitAction);
}

void MainWindow::
newCharacter(void)
{

}
