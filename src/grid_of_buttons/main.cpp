#include "mainwin.h"
#include <gtkmm.h>

int main (int argc, char *argv[]) {
    auto app = Gtk::Application::create(argc, argv, "lg.grid.of.buttons");
    Mainwin win;
    return app->run(win);
}

