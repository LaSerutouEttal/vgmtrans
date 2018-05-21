/*
* VGMTrans (c) 2018
* Licensed under the zlib license, 
* refer to the included LICENSE.txt file
*/

#include <QApplication>
#include "MainWindow.h"
#include "QtVGMRoot.h"

int main(int argc, char *argv[]) {
  
  #if QT_VERSION >= QT_VERSION_CHECK(5, 6, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
  #endif

  QCoreApplication::setOrganizationName(QStringLiteral("VGMTrans"));
  QCoreApplication::setApplicationName(QStringLiteral("vgmtrans"));

  QApplication app(argc, argv);

  /*qApp->setStyleSheet("QSplitter::handle{background-color: #B8B8B8;}");
    QFile file(":/qdarkstyle/style.qss");
    file.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(file.readAll());
    qApp->setStyleSheet(styleSheet);
    */
    
  qtVGMRoot.Init();
  MainWindow window;
  window.show();

  return app.exec();
}
