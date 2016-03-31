#ifndef EXCHANGEPAGE_H
#define EXCHANGEPAGE_H

#include <QDialog>

namespace Ui {
    class ExchangePage;
}

QT_BEGIN_NAMESPACE
class QTableView;
class QItemSelection;
class QSortFilterProxyModel;
class QMenu;
class QModelIndex;
QT_END_NAMESPACE

/** Widget that shows a list of sending or receiving addresses.
  */
class ExchangePage : public QDialog
{
    Q_OBJECT

public:
    explicit ExchangePage(QWidget *parent = 0);
    ~ExchangePage();
private:
    Ui::ExchangePage *ui;
};

#endif // EXCHANGEPAGE_H
