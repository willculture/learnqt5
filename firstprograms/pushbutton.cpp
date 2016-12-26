#include <QApplication>
#include <QWidget>
#include <QPushButton>

class MyButton: public QWidget {
    
	public:
       MyButton(QWidget *parent = 0);

};

MyButton::MyButton(QWidget *parent):QWidget(parent) {


	QPushButton *quitbtn = new QPushButton("QuitButton", this);
	quitbtn->setGeometry(50, 40, 75, 30);

	connect(quitbtn, &QPushButton::clicked, qApp, &QApplication::quit);

}

int main(int argc, char *argv[]) {

	QApplication app(argc, argv);
	MyButton window;

	window.resize(250, 150);
	window.setWindowTitle("QPushButton");
	window.show();

	return app.exec();


}
