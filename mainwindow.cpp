#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "user.h"
#include "strcat_new.h"
#include "resize_new.h"

#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
  ui->setupUi(this);
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_submitPushButton_clicked()
{
  qDebug() << "User clicked on submit button";

  User::addUser(User(22, "Timofey"));
  User::addUser(User(33, "Aufar"));
  User::addUser(User(44, "Valery"));
  User::addUser(User(55, "Kirill"));
  User::addUser(User(66, "Artem"));
  User::addUser(User(77, "Camila"));

  qDebug() << "Current students' count: " << User::getCount();
  qDebug() << "All students: ";
  qDebug() << User::getAllNames();
  qDebug() << "Removing user at 4 index";

  User::removeUserAt(4);

  qDebug() << "Current Students' Count: " << User::getCount();
  qDebug() << "All students: ";
  qDebug() << User::getAllNames();
  qDebug() << "Removing user named Aufar ";

  User::removeUserByName("Aufar");

  qDebug() << "Current Students' Count: " << User::getCount();
  qDebug() << "All students: ";
  qDebug() << User::getAllNames();

  char str1[14] = "Test ";
  char str2[] = "passed!";
  strcat_new(str1, str2);
  qDebug() << str1;
}
