//
// Created by ashen-one on 5/23/23.
//

#ifndef QT_TRYOUT_CLION_MAINWINDOW_H
#define QT_TRYOUT_CLION_MAINWINDOW_H

#include <QApplication>
#include <QPushButton>
#include <QMainWindow>
#include <QVBoxLayout>
#include <QListView>
#include <QLineEdit>
#include <QStringListModel>


class MainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

private slots:
    void addItemFromEditLine();

private:
    QStringListModel model;
    QLineEdit *lineEdit;
};


#endif //QT_TRYOUT_CLION_MAINWINDOW_H
