//
// Created by ashen-one on 5/23/23.
//

#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent) {
    auto *centralWidget = new QWidget(this);
    auto *verticalLayout = new QVBoxLayout(centralWidget);
    centralWidget->setLayout(verticalLayout);

    auto *listView = new QListView(centralWidget);
    verticalLayout->addWidget(listView);
    listView->setModel(&model);

    auto *horizontalLayout = new QHBoxLayout();
    verticalLayout->addLayout(horizontalLayout);

    lineEdit = new QLineEdit;
    horizontalLayout->addWidget(lineEdit);
    connect(lineEdit, &QLineEdit::returnPressed, this, &MainWindow::addItemFromEditLine);

    auto *doneButton = new QPushButton("Done");
    horizontalLayout->addWidget(doneButton);

    setCentralWidget(centralWidget);

    connect(doneButton, SIGNAL(clicked()), this, SLOT(addItemFromEditLine()));
}

void MainWindow::addItemFromEditLine() {
    auto cnt = model.rowCount();
    model.insertRow(cnt);
    model.setData(model.index(cnt), lineEdit->text());
}
