#include <iostream>
#include <gtkmm.h>
#include "../classe/CssMain.h"

class Login{

	public:
		Login();
		Gtk::Window* window = nullptr;
		Gtk::Button*  btnLogin = nullptr;

		void onLogin();

		Gtk::Window* getJanela();


};