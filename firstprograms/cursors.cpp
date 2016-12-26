#include <QApplication>
#include <QWidget>
#include <QFrame>
#include <QGridLayout>

class Cursors : public QWidget {

  public:
	  Cursors(QWidget *parent = 0);

};


Cursors::Cursors(QWidget *parent)
	:QWidget(parent){

     QFrame *f1 = new QFrame(this);
	 f1->setFrameStyle(QFrame::Box);
	 f1->setCursor(Qt::SizeAllCursor);
	 
	 QFrame *f2 = new QFrame(this);
	 f2->setFrameStyle(QFrame::Box);
	 f2->setCursor(Qt::PointingHandCursor);
	 
	 QFrame *f3 = new QFrame(this);
	 f3->setFrameStyle(QFrame::Box);
	 f3->setCursor(Qt::PointingHandCursor);
     
	 QGridLayout *grid = new QGridLayout(this);
	 grid->addWidget(f1, 0, 0);
	 grid->addWidget(f2, 0, 1);
	 grid->addWidget(f3, 0, 2);

	 setLayout(grid);
	


}



int main(int argc, char *argv[]) {

	  QApplication app(argc, argv);

	  Cursors window;

	  window.resize(350, 150);
	  window.setWindowTitle("Cursors");
	  window.show();

	  return app.exec();

}







