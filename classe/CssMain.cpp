#include "CssMain.h"
#include "stdio.h"

CssMain::CssMain(Gtk::Window* janela, const char* css){
	auto screen = Gdk::Screen::get_default();
	auto cssbuilder = Gtk::CssProvider::create();
	auto ctx = janela->get_style_context();

	//Glib::ustring data = "* {color: #ff00ea;font: Comic Sans MS 12}";

	if(not cssbuilder->load_from_path(css)){
		cerr << "Falha ao carregar css";
	}else{
		ctx->add_provider_for_screen(screen, cssbuilder, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
	}

	

}