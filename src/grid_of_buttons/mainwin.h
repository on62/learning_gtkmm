#ifndef __MAINWIN_H
#define __MAINWIN_H

#include <gtkmm.h>

class Mainwin : public Gtk::Window {
    public:
        Mainwin();
        virtual ~Mainwin();
    protected:
        void on_button_clicked(int x, int y);
};
#endif 

