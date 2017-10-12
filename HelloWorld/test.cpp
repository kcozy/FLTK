//
//  main.cpp
//  FLTK-Test
//
//  Created by user on 2017/10/10.
//  Copyright © 2017年 kcozy. All rights reserved.
//

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
int main(int argc, char **argv) {
    Fl_Window *window = new Fl_Window(340,180);
    Fl_Box *box = new Fl_Box(20,40,300,100,"Hello, World!");
    box->box(FL_UP_BOX);
    box->labelfont(FL_BOLD+FL_ITALIC);
    box->labelsize(36);
    box->labeltype(FL_SHADOW_LABEL);
    window->end();
    window->show(argc, argv);
    return Fl::run();
}

/*
gcc -I/usr/local/Cellar/fltk/1.3.4_1/include -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_THREAD_SAFE -D_REENTRANT -L/usr/local/Cellar/fltk/1.3.4_1/lib -lfltk -lpthread -framework Cocoa test.cpp
*/