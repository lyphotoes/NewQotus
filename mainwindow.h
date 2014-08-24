#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>

class QSplitter;
class QTreeWidget;
class QTableWidget;


class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
//protected:
  //  void closeEvent(QCloseEvent *event);

//private slots:
 //   void about();
private:
    void createActions(void);
    void createMenus(void);
    void createWorkSpace(void);
    //void createContextMenu();
    void createToolBars();
    //void createStatusBar();

    QToolBar *mainToolBar;

    QMenu *systemMenu;
    QMenu *userManageSubMenu;
    QMenu *dataSubMenu;
    QMenu *manageMenu;
    QMenu *stateMenu;
    QMenu *helpMenu;

   //QAction *userManageAction;
    QAction *userChangeAction;
    QAction *passwordAction;
    //QAction *dataAction;
    QAction *inputAction;
    QAction *exportAction;
    QAction *logoOffAction;
    QAction *quitAction;

    QAction *manageAction;
    QAction *addShelfAction;
    QAction *addCellAction;
    QAction *deleteShelfAction;
    QAction *deleteCellAction;

    QAction *addPartAction;
    QAction *deletePartAction;
    QAction *editPartAction;
    QAction *inPartAction;
    QAction *outPartAction;
    QAction *findPartAction;
    QAction *wantPartAction;

    QSplitter *mainSplitter;
    QTreeWidget *treeWidget;
    QTableWidget *tableWidget;


};

#endif // MAINWINDOW_H
