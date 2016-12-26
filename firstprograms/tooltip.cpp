#include <QApplication>
#include <QWidget>
#include <QIcon>

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

	QWidget window;

	window.resize(250, 150);
	window.move(300, 300);
	window.setWindowTitle("tooltips");
	window.setToolTip("QWidget");//提示
	window.setWindowIcon(QIcon("web-icon.png"));// icon
	window.show();

	return app.exec();
}
