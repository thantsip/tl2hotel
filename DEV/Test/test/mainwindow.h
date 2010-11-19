#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>


class QDialogButtonBox;
class QPushButton;
class QSqlTableModel;
class QLineEdit;
class QGroupBox;

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(const QString &tableName,QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QSqlTableModel *model;

private slots:


private slots:
    void on_editButton_clicked();
    bool on_delcheckButton_clicked();
    void on_cancelButton_clicked();
    void on_deleteButton_clicked();
    void on_quitButton_clicked();
    bool on_insertButton_clicked();
    void updateView(QString tableName);
    void submit();
};

#endif // MAINWINDOW_H
