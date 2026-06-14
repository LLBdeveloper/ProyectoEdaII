#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenu>
#include <QGraphicsScene>
#include "sistemagestionlogistico.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *escena;

    SistemaLogistico sistema;

    int origenSeleccionado = -1;
    int destinoSeleccionado = -1;
};

#endif // MAINWINDOW_H