#include "anothermenu.h"

int main(int argc, char **charv) {


	QApplication app(argc, charv);
	AnotherMenu window;

	window.resize(350, 200);
	window.setWindowTitle("Another menu");
	window.show();

	return app.exec();

}
