#include<QtGui>

#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("Qotus --好用的备件管理软件"));
    setWindowIcon(QIcon(":/images/loved.ico"));
    createActions();
    createMenus();
    createToolBars();
    createWorkSpace();

}

MainWindow::~MainWindow()
{

}

void MainWindow::createActions()
{
    //userManageAction = new QAction(tr("账户管理"),this);
    //userManageAction->setStatusTip(tr("");

    userChangeAction =new QAction(tr("账户更改"),this);

    passwordAction = new QAction(tr("密码更改"),this);

    //dataAction = new QAction(tr("数据"));

    exportAction =new QAction(tr("导出"),this);

    inputAction = new QAction(tr("导入"),this);

    logoOffAction = new QAction(tr("注销"),this);

    quitAction = new QAction(tr("退出"),this);

    addShelfAction =new QAction(tr("新建货架"),this);

    addCellAction =new QAction(tr("新建架层"),this);

    deleteShelfAction = new QAction(tr("删除货架"),this);

    deleteCellAction =new QAction(tr("删除架层"),this);


    addPartAction =new QAction(tr("添加"),this);
    addPartAction->setIcon(QIcon(":/images/add.png"));
    addPartAction->setStatusTip(tr("添加备件"));

    deletePartAction=new QAction(tr("删除"),this);
    deletePartAction->setIcon(QIcon(":/images/delete.png"));
    deletePartAction->setStatusTip(tr("删除备件"));
    editPartAction=new QAction(tr("编辑"),this);
    editPartAction->setIcon(QIcon(":/images/edit.png"));
    editPartAction->setStatusTip(tr("编辑备件信息"));
    inPartAction=new QAction(tr("入库"),this);
    inPartAction->setIcon(QIcon(":/images/in.png"));
    inPartAction->setStatusTip(tr("备件入库"));
    outPartAction=new QAction(tr("出库"),this);
    outPartAction->setIcon(QIcon(":/images/out.png"));
    outPartAction->setStatusTip(tr("备件出库"));
    wantPartAction=new QAction(tr("计划"),this);
    wantPartAction->setIcon(QIcon(":/images/want.gif"));
    wantPartAction->setStatusTip(tr("标记计划"));
    findPartAction=new QAction(tr("查找"),this);
    findPartAction->setIcon(QIcon(":/images/find.gif"));
    findPartAction->setStatusTip(tr("查找"));




}

void MainWindow::createMenus()
{
    systemMenu=menuBar()->addMenu(tr("系统"));
    userManageSubMenu=systemMenu->addMenu(tr("账户管理"));
    userManageSubMenu->addAction(userChangeAction);
    userManageSubMenu->addAction(passwordAction);
    dataSubMenu=systemMenu->addMenu(tr("数据"));
    dataSubMenu->addAction(inputAction);
    dataSubMenu->addAction(exportAction);
    systemMenu->addSeparator();
    systemMenu->addAction(logoOffAction);
    systemMenu->addAction(quitAction);

    manageMenu=menuBar()->addMenu(tr("管理"));
    manageMenu->addAction(addShelfAction);
    manageMenu->addAction(addCellAction);
    manageMenu->addSeparator();
    manageMenu->addAction(deleteShelfAction);
    manageMenu->addAction(deleteCellAction);

    stateMenu = menuBar()->addMenu(tr("统计"));

    helpMenu = menuBar()->addMenu(tr("帮助"));

}

void MainWindow::createToolBars()
{
    mainToolBar = addToolBar(tr("快捷管理"));
    mainToolBar->addAction(addPartAction);
    mainToolBar->addAction(deletePartAction);
    mainToolBar->addAction(editPartAction);
    mainToolBar->addSeparator();
    mainToolBar->addAction(inPartAction);
    mainToolBar->addAction(outPartAction);
    mainToolBar->addAction(wantPartAction);
    mainToolBar->addSeparator();
    mainToolBar->addAction(findPartAction);
}

void MainWindow::createWorkSpace()
{
    treeWidget=new QTreeWidget();
    tableWidget=new QTableWidget();
    mainSplitter=new QSplitter(Qt::Horizontal);
    mainSplitter->addWidget(this->treeWidget);
    mainSplitter->addWidget(tableWidget);
    mainSplitter->setStretchFactor(1,1);
    this->setCentralWidget(mainSplitter);

    treeWidget->setColumnCount(1);
    treeWidget->setHeaderLabel(tr("货架结构"));
}
