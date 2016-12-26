#include "simplemenu.h"

int main(int argc, char *args[]) {

    QApplication app(argc, args);

	SimpleMenu window;

	window.resize(250, 150);
	window.setWindowTitle("Simple Menu");

	window.show();

	return app.exec();

}
