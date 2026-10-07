#include "mainwindow.hpp"
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/Qlabel>

MainWindow::MainWindow()
{
    setWindowTitle("Test application");
    resize(900, 600);

    // create central widghet
    QWidget *central_widget = new QWidget;
    setCentralWidget(central_widget);

    // create and set a vbox layout as the layout for the central widget
    QVBoxLayout *main_layout = new QVBoxLayout;
    central_widget->setLayout(main_layout);

    // add a label
    QLabel *top_label = new QLabel("<h2>Test label</h2>");
    // top_label->setAlignment(Qt::AlignCenter);
    main_layout->addWidget(top_label);

}