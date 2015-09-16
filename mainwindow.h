#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QString>
#include <QDebug>
#include <QVector>
#include <QImage>
#include <QRgb>
#include <QPixmap>
#include <opencv.hpp>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionLoad_Image_clicked();

    void on_brightness_horizontalSlider_valueChanged(int value);

    void on_red_horizontalSlider_valueChanged(int value);



    void on_green_horizontalSlider_valueChanged(int value);

    void on_blue_horizontalSlider_valueChanged(int value);

    void on_grayScale_pushButton_clicked();

    void on_blur_pushButton_clicked();

    void on_edge_pushButton_clicked();

    void on_save_clicked();

    void on_negativeImage_clicked();

    void on_contrast_horizontalSlider_valueChanged(int value);

    void on_delete_2_clicked();

private:
    Ui::MainWindow *ui;

    cv::Mat img;
    cv::Mat img2;

    void changeColor(const cv::Mat &src,cv::Mat &dst,QVector<int> value);

    QImage Mat2QImage(const cv::Mat src);

    void showImage(const cv::Mat &src);
};

#endif // MAINWINDOW_H
