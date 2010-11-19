#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "databasemanager.h"

MainWindow::MainWindow(const QString &tableName,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /* set a model to be displayed in Tableview*/
    model = new QSqlTableModel(this);
    model->setTable(tableName);
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();

    model->setHeaderData(0, Qt::Horizontal, tr("AEM"));
    model->setHeaderData(1, Qt::Horizontal, tr("Name"));
    model->setHeaderData(2, Qt::Horizontal, tr("Surname"));

    /*add the model to the object*/
    ui->view->setModel(model);

    /*hide a group of objects*/
    ui->delEdit->hide();
    ui->delLabel->hide();
    ui->delcheckButton->hide();
    ui->cancelButton->hide();

    setWindowTitle(tr("Customers"));


}

MainWindow::~MainWindow()
{
    delete ui;
}

/*insert a new row to customers table and refresh the table*/
bool MainWindow::on_insertButton_clicked()
{
     bool ret = false;

    /*take the data from lineEdits and convert them to Qstring and Int */
    QString name = QString::fromStdString(ui->nameEdit->text().toStdString());
    QString surname = QString::fromStdString(ui->surnameEdit->text().toStdString());
    int aem = ui->aemEdit->text().toInt();

    /* declare a DataBaseManager object */
    DatabaseManager b;

    /*call the insert function*/
    ret = b.insertCustomer(aem,name,surname);
    updateView("customers");

    return ret;


}
   /*close the form by click the quit button*/
void MainWindow::on_quitButton_clicked()
{

    close();
}
/*make visible a group of objects needed to delete from table*/
void MainWindow::on_deleteButton_clicked()
{

    ui->delEdit->show();
    ui->delLabel->show();
    ui->delcheckButton->show();
    ui->cancelButton->show();


}
/* hides a group of objects that are no more usefull*/
void MainWindow::on_cancelButton_clicked()
{
    ui->delEdit->clear();
    ui->delEdit->hide();
    ui->delLabel->hide();
    ui->delcheckButton->hide();
    ui->cancelButton->hide();
}
/*delete a row from customers table and refresh the tableview object*/
bool MainWindow::on_delcheckButton_clicked()
{
    bool ret = false;

    /*declare a DatabaseManager object*/
    DatabaseManager b;

    /*call the deleteCustomer function from DatabaseManager*/
    ret = b.deleteCustomer(ui->delEdit->text().toInt());
    /*call the updateView function to refresh the tableview object*/
   updateView("customers");

    /*call to set invisible a group of object that are needed for delete function*/
    on_cancelButton_clicked();

    return ret;

}
/*refresh the tableview object*/
void MainWindow::updateView(QString tableName)
{
    QSqlTableModel *model=new QSqlTableModel(this);
    model->setTable(tableName);
    model->select();
    model->setHeaderData(0, Qt::Horizontal, tr("AEM"));
    model->setHeaderData(1, Qt::Horizontal, tr("Name"));
    model->setHeaderData(2, Qt::Horizontal, tr("Surname"));
    ui->view->setModel(model);

}

void MainWindow::submit()
 {
     model->database().transaction();
     if (model->submitAll()) {
         model->database().commit();
     } else {
         model->database().rollback();
         QMessageBox::warning(this, tr("Customers"),
                              tr("The database reported an error: %1")
                              .arg(model->lastError().text()));
     }
 }

void MainWindow::on_editButton_clicked()
{
    submit();
}
