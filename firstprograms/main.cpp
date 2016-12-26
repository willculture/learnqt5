#include <QGridLayout>
#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QLabel>

class PlusMinus : public QWidget {

    Q_OBJECT
 //   Q_INTERFACES(QWidget)

public:
	PlusMinus(QWidget *parent);
	~PlusMinus();

public slots:
	void OnPlus();
	void OnMinus();
private:
	QLabel *lbl;
};

PlusMinus::PlusMinus(QWidget *parent)
 :QWidget(parent){

    QPushButton *pbtn = new QPushButton("+", this);
    QPushButton *mbtn = new QPushButton("-", this);

    lbl = new QLabel("0", this);
    
    QGridLayout *grid = new QGridLayout(this);
    grid->addWidget(pbtn, 0, 0);
    grid->addWidget(mbtn, 0, 1);
    grid->addWidget(lbl, 1, 1);

    setLayout(grid);

   connect(pbtn, &QPushButton::clicked, this, &PlusMinus::OnPlus);
   connect(mbtn, &QPushButton::clicked, this, &PlusMinus::OnMinus);	
	
	
	
	
}

PlusMinus::~PlusMinus(){
   delete lbl;
}

void PlusMinus::OnPlus() {
  
	int val = lbl->text().toInt();
	val++;
	lbl->setText(QString::number(val));


}


void PlusMinus::OnMinus() {
   
	int val = lbl->text().toInt();
	val--;
	lbl->setText(QString::number(val));
}


int main(int argc, char *argv[]) {

	QApplication app(argc, argv);

	PlusMinus window(0);

	window.resize(300, 190);
	window.setWindowTitle("Plus minus");
	window.show();

	return app.exec();

}
#include "main.moc"
