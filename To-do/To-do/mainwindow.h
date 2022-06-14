#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListView>
#include <QStringListModel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
       MainWindow();

protected slots:
       void onAdd();
       void onRemove();

private:
       QListView* m_pwPending = nullptr;
       QListView* m_pwCompleted = nullptr;

       QAction* m_pActAdd = nullptr;
       QAction* m_pActRemove = nullptr;
};
#endif // MAINWINDOW_H
