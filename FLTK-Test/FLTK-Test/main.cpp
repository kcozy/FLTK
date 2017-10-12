//
//  main.cpp
//  FLTK-Test
//
//  Created by user on 2017/10/10.
//  Copyright © 2017年 kcozy. All rights reserved.
//

#include <FL/Fl.H>
#include <FL/Fl Window.H>
#include <FL/Fl Box.H>
int main(int argc, char **argv) {
    Fl Window *window = new Fl Window(340,180);
    Fl Box *box = new Fl Box(20,40,300,100,"Hello, World!");
    box->box(FL UP BOX);
    box->labelfont(FL BOLD+FL ITALIC);
    box->labelsize(36);
    box->labeltype(FL SHADOW LABEL);
    window->end();
    window->show(argc, argv);
    return Fl::run();
}
