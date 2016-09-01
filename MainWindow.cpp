#include "MainWindow.h"
#include "ui_MainWindow.h"

#include <QFileDialog>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    Mat image = imread("c:\\Users\\rono\\Desktop\\czMetro.jpg");
    QImage img = Mat2QImage(image);

    ui->picLabel->setPixmap(QPixmap::fromImage(img));

}

MainWindow::~MainWindow()
{
    delete ui;
}

QImage MainWindow::Mat2QImage(Mat& image)
{
    QImage img;

    if (image.channels()==3) {
        cvtColor(image, image, CV_BGR2RGB);
        img = QImage((const unsigned char *)(image.data), image.cols, image.rows,
                image.cols*image.channels(), QImage::Format_RGB888);
    } else if (image.channels()==1) {
        img = QImage((const unsigned char *)(image.data), image.cols, image.rows,
                image.cols*image.channels(), QImage::Format_ARGB32);
    } else {
        img = QImage((const unsigned char *)(image.data), image.cols, image.rows,
                image.cols*image.channels(), QImage::Format_RGB888);
    }

    return img;
}
